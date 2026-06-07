import torch
from torch import nn
from torchvision import transforms, datasets, models  # 【差异1】新增models，用于加载预训练模型
from torch.utils.data.dataloader import DataLoader
import torch.optim as optim
import torch.nn.functional as F
from torchinfo import summary
from torch.optim.lr_scheduler import ReduceLROnPlateau  # 【差异2】新增学习率调度器
import os
import time  # 【差异3】新增时间模块，用于记录训练时间

# ==============================================
# 【差异4】新增：基于预训练ResNet18的模型
# 原始代码只有一个简单的CNN，这里提供了预训练模型选项
# ==============================================
class EnhancedNet(nn.Module):
    def __init__(self, num_classes=3, use_pretrained=True):
        super(EnhancedNet, self).__init__()
        
        # 使用预训练的ResNet18作为基础模型
        if use_pretrained:
            self.base_model = models.resnet18(pretrained=True)
            # 冻结前几层，只训练后面的层（迁移学习策略）
            for param in list(self.base_model.parameters())[:-10]:
                param.requires_grad = False
        else:
            self.base_model = models.resnet18(pretrained=False)
        
        # 修改最后一层以适配我们的分类任务
        num_features = self.base_model.fc.in_features
        self.base_model.fc = nn.Sequential(
            nn.Linear(num_features, 512),
            nn.ReLU(),
            nn.Dropout(0.3),
            nn.Linear(512, 256),
            nn.ReLU(),
            nn.Dropout(0.3),
            nn.Linear(256, num_classes)
        )
    
    def forward(self, x):
        x = self.base_model(x)
        return x

# ==============================================
# 【差异5】改进的自定义CNN（带残差连接）
# 原始代码没有残差连接，容易出现梯度消失
# ==============================================
class CustomCNN(nn.Module):
    def __init__(self, num_classes=3):
        super(CustomCNN, self).__init__()
        # 卷积层（与原始类似）
        self.conv1 = nn.Conv2d(3, 32, 3, 1, 1)
        self.bn1 = nn.BatchNorm2d(32)
        self.conv2 = nn.Conv2d(32, 64, 3, 1, 1)
        self.bn2 = nn.BatchNorm2d(64)
        self.conv3 = nn.Conv2d(64, 128, 3, 1, 1)
        self.bn3 = nn.BatchNorm2d(128)
        self.conv4 = nn.Conv2d(128, 256, 3, 1, 1)
        self.bn4 = nn.BatchNorm2d(256)
        
        # 【差异5.1】新增残差连接（Residual Connection）
        # 解决深层网络梯度消失问题，提升训练稳定性
        self.residual1 = nn.Conv2d(32, 64, 1, 1)
        self.residual2 = nn.Conv2d(64, 128, 1, 1)
        self.residual3 = nn.Conv2d(128, 256, 1, 1)
        
        # 池化层
        self.pool = nn.MaxPool2d(2, 2)
        self.dropout = nn.Dropout(0.3)  # 【差异5.2】dropout从0.5降低到0.3，减少信息丢失
        
        # 全连接层（结构与原始类似）
        self.linear1 = nn.Linear(256 * 4 * 4, 512)
        self.linear2 = nn.Linear(512, 256)
        self.linear3 = nn.Linear(256, 128)
        self.output = nn.Linear(128, num_classes)
    
    def forward(self, x):
        # 卷积层1（与原始相同）
        x = torch.relu(self.bn1(self.conv1(x)))
        
        # 【差异5.3】卷积层2 + 残差连接
        residual = self.residual1(x)  # 捷径连接
        x = self.pool(torch.relu(self.bn2(self.conv2(x))))
        x = x + residual  # 残差相加
        
        # 【差异5.4】卷积层3 + 残差连接
        residual = self.residual2(x)
        x = self.pool(torch.relu(self.bn3(self.conv3(x))))
        x = x + residual
        
        # 【差异5.5】卷积层4 + 残差连接
        residual = self.residual3(x)
        x = self.pool(torch.relu(self.bn4(self.conv4(x))))
        x = x + residual
        
        x = x.reshape(x.size(0), -1)
        x = self.dropout(torch.relu(self.linear1(x)))
        x = self.dropout(torch.relu(self.linear2(x)))
        x = torch.relu(self.linear3(x))
        x = self.output(x)
        return x

# ==============================================
# 【差异6】增强的数据变换函数（训练集专用）
# 原始代码只有Resize、ToTensor、Normalize
# ==============================================
def get_train_transform():
    return transforms.Compose([
        transforms.Resize([64, 64]),
        transforms.RandomHorizontalFlip(p=0.5),      # 新增：随机水平翻转
        transforms.RandomVerticalFlip(p=0.5),        # 新增：随机垂直翻转
        transforms.RandomRotation(15),               # 新增：随机旋转±15°
        transforms.RandomResizedCrop(64, scale=(0.8, 1.0)),  # 新增：随机裁剪
        transforms.ColorJitter(                      # 新增：颜色抖动
            brightness=0.2,
            contrast=0.2,
            saturation=0.2,
            hue=0.1
        ),
        transforms.ToTensor(),
        transforms.Normalize((0.5, 0.5, 0.5), (0.5, 0.5, 0.5))
    ])

# ==============================================
# 【差异7】测试集数据变换（无增强）
# 测试集不应使用数据增强，保持一致性
# ==============================================
def get_test_transform():
    return transforms.Compose([
        transforms.Resize([64, 64]),
        transforms.ToTensor(),
        transforms.Normalize((0.5, 0.5, 0.5), (0.5, 0.5, 0.5))
    ])

# ==============================================
# 【差异8】重构的训练函数（模块化）
# 原始代码训练逻辑直接写在__main__中，可读性差
# ==============================================
def train_model(model, train_loader, test_loader1, test_loader2, criterion, optimizer, scheduler, 
                device, epochs=100, save_path="pth_enhanced"):
    os.makedirs(save_path, exist_ok=True)
    
    best_accuracy = 0.0  # 【差异8.1】修复：从0开始，原始代码是99
    train_loss_history = []
    val_accuracy_history = []
    
    print(f"开始训练，使用设备: {device}")
    
    for epoch in range(epochs):
        model.train()
        train_loss = 0.0
        correct_train = 0
        total_train = 0
        
        start_time = time.time()
        
        for batch_id, (datas, labels) in enumerate(train_loader):
            datas, labels = datas.to(device), labels.to(device)
            
            optimizer.zero_grad()
            outputs = model(datas)
            loss = criterion(outputs, labels)
            loss.backward()
            optimizer.step()
            
            train_loss += loss.item() * datas.size(0)  # 【差异8.2】正确累加损失
            _, predicted = torch.max(outputs.data, dim=1)
            total_train += labels.size(0)
            correct_train += (predicted == labels).sum().item()
        
        # 计算平均损失和训练准确率
        avg_train_loss = train_loss / len(train_loader.dataset)
        train_accuracy = 100 * correct_train / total_train
        
        # 在测试集上评估
        model.eval()
        acc1 = evaluate_model(model, test_loader1, device)
        acc2 = evaluate_model(model, test_loader2, device)
        
        # 【差异8.3】更新学习率调度器（自适应调整学习率）
        if scheduler is not None:
            scheduler.step(avg_train_loss)
        
        epoch_time = time.time() - start_time
        
        # 记录历史（便于后续分析）
        train_loss_history.append(avg_train_loss)
        val_accuracy_history.append((acc1 + acc2) / 2)
        
        # 【差异8.4】更详细的训练日志
        print(
            f"Epoch [{epoch + 1}/{epochs}]\t"
            f"Time: {epoch_time:.2f}s\t"
            f"Train Loss: {avg_train_loss:.5f}\t"
            f"Train Acc: {train_accuracy:.2f}%\t"
            f"Test1 Acc: {acc1:.2f}%\t"
            f"Test2 Acc: {acc2:.2f}%"
        )
        
        # 【差异8.5】保存最佳模型（基于平均准确率）
        avg_acc = (acc1 + acc2) / 2
        if avg_acc > best_accuracy:
            best_accuracy = avg_acc
            best_path = os.path.join(save_path, f"model_best_{best_accuracy:.2f}.pth")
            torch.save(model.state_dict(), best_path)
            print(f"保存最佳模型: {best_path}")
        
        # 每10个epoch保存一次检查点
        if (epoch + 1) % 10 == 0:
            checkpoint_path = os.path.join(save_path, f"model_epoch_{epoch + 1}.pth")
            torch.save(model.state_dict(), checkpoint_path)
    
    return model, best_accuracy

# ==============================================
# 【差异9】新增：评估函数（模块化）
# 原始代码测试逻辑重复写在训练循环中
# ==============================================
def evaluate_model(model, dataloader, device):
    correct = 0
    total = 0
    
    with torch.no_grad():
        for datas, labels in dataloader:
            datas, labels = datas.to(device), labels.to(device)
            outputs = model(datas)
            _, predicted = torch.max(outputs.data, dim=1)
            total += labels.size(0)
            correct += (predicted == labels).sum().item()
    
    return 100 * correct / total

if __name__ == "__main__":
    # 【差异10】超参数调整
    BATCH_SIZE = 64  # 原始是1024，太大容易内存溢出，64更合理
    EPOCH = 100     # 原始是200，配合学习率调度器，100足够
    LEARNING_RATE = 0.001
    USE_PRETRAINED = True  # 是否使用预训练模型
    
    # 【差异11】分开的训练/测试数据变换
    train_transform = get_train_transform()
    test_transform = get_test_transform()
    
    # 加载数据（使用不同的变换）
    trainset = datasets.ImageFolder(root='dataset/train', transform=train_transform)
    testset1 = datasets.ImageFolder(root='dataset/test1', transform=test_transform)
    testset2 = datasets.ImageFolder(root='dataset/test2', transform=test_transform)
    
    print(f"训练集图片数量: {len(trainset)}")
    print(f"测试集1图片数量: {len(testset1)}")
    print(f"测试集2图片数量: {len(testset2)}")
    print(f"标签对应的ID: {trainset.class_to_idx}")
    
    train_loader = DataLoader(trainset, batch_size=BATCH_SIZE, shuffle=True, pin_memory=True)
    test_loader1 = DataLoader(testset1, batch_size=BATCH_SIZE, shuffle=False, pin_memory=True)  # 测试集无需shuffle
    test_loader2 = DataLoader(testset2, batch_size=BATCH_SIZE, shuffle=False, pin_memory=True)
    
    # 【差异12】修复设备检测逻辑
    # 原始代码: "mps" if torch.cuda.is_available() 是错误的，mps和cuda是不同的后端
    device = torch.device(
        "mps" if torch.backends.mps.is_available() else 
        "cuda" if torch.cuda.is_available() else 
        "cpu"
    )
    print(f"使用设备: {device}")
    
    # 【差异13】可选择使用预训练模型或自定义CNN
    if USE_PRETRAINED:
        model = EnhancedNet(num_classes=3, use_pretrained=True).to(device)
    else:
        model = CustomCNN(num_classes=3).to(device)
    
    # 打印网络信息
    summary(model, input_size=(1, 3, 64, 64), device=device)
    
    # 【差异14】优化器和学习率调度器改进
    criterion = nn.CrossEntropyLoss()
    optimizer = optim.Adam(model.parameters(), lr=LEARNING_RATE, weight_decay=1e-4)  # Adam + 权重衰减
    scheduler = ReduceLROnPlateau(optimizer, mode='min', patience=5, factor=0.5, verbose=True)  # 自适应学习率
    
    # 开始训练
    print("=" * 60)
    print("开始训练...")
    print("=" * 60)
    
    trained_model, best_acc = train_model(
        model, train_loader, test_loader1, test_loader2,
        criterion, optimizer, scheduler, device, epochs=EPOCH
    )
    
    print("=" * 60)
    print(f"训练完成！最佳平均准确率: {best_acc:.2f}%")
    print("=" * 60)