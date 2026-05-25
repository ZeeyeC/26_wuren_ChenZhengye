# 1. 导入所需库
from sklearn import datasets  # 加载鸢尾花数据集
from sklearn.model_selection import train_test_split  # 划分训练/测试集
from sklearn.svm import SVC  # SVM分类器
from sklearn.metrics import accuracy_score, classification_report  # 评估指标

# 2. 加载鸢尾花数据集
iris = datasets.load_iris()
X = iris.data  # 特征：4个维度（花萼长/宽、花瓣长/宽）
y = iris.target  # 标签：0/1/2 对应3种鸢尾花
print("数据集特征形状:", X.shape)
print("数据集标签形状:", y.shape)

# 3. 划分训练集(70%)和测试集(30%)
X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.3, random_state=42  # random_state保证结果可复现
)

# 4. 创建SVM分类器
# kernel（核心）可选：linear(线性核)、rbf(高斯核，默认)、poly(多项式核)
svm_model = SVC(kernel='linear', random_state=42)

# 5. 训练模型
svm_model.fit(X_train, y_train)

# 6. 测试集预测
y_pred = svm_model.predict(X_test)

# 7. 模型评估
print("\n预测准确率: {:.2f}%".format(accuracy_score(y_test, y_pred) * 100))
print("\n分类报告:")
print(classification_report(y_test, y_pred, target_names=iris.target_names))

'''
分类报告:
              precision    recall  f1-score   support   -> 准确率(猜对的概率) 召回率(全部找出的概率) 准确率和召回率的综合平均分 样本数

      setosa       1.00      1.00      1.00        19   -> 山鸢尾   
  versicolor       1.00      1.00      1.00        13   -> 变色鸢尾
   virginica       1.00      1.00      1.00        13   -> 维吉尼亚鸢尾

    accuracy                           1.00        45   -> 总体准确率
   macro avg       1.00      1.00      1.00        45   -> 宏平均
weighted avg       1.00      1.00      1.00        45   -> 加权平均(最常用的汇总指标）
'''