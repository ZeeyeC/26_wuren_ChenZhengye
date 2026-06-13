%% 第二问：轨迹跟踪
clear; clc; close all

% 车辆参数
lfr = 2.168 + 1.907; % 轴距 L
dt = 0.01;
v = 15; 
sim_steps = 2000;

% 参考轨迹 (正弦曲线)
X_ref = 0:0.1:200; 
Y_ref = 10 * sin(X_ref / 15); 

% 初始车辆状态 
X = X_ref(1); Y = Y_ref(1) + 3; phi = 0; 
X_vec = zeros(1, sim_steps); Y_vec = zeros(1, sim_steps);
% 纯跟踪参数
Ld = 10; % 默认前视距离（根据速度调整）


for ii = 1:sim_steps
    X_vec(ii) = X; Y_vec(ii) = Y;
    
    
    % ===============================================================
    
    % ================= TODO 2.1: 实现某种跟踪算法 =================
    
    % 纯跟踪实现（数学注释）
    % 1) 参考轨迹上各点到车辆当前位置的距离：
    dists = sqrt((X_ref - X).^2 + (Y_ref - Y).^2);

    % 2) 选取前视点（look-ahead point）：
    %    先找到最近的参考点索引 closest_idx，然后从该索引向前寻找一个刚好不小于前视距离 Ld 的点 idx，作为目标点 (X_target, Y_target)。
    %    这样避免选到车辆后方的轨迹点。
    [~, closest_idx] = min(dists); %找距离车辆最近的轨迹点
    idx = [];
    for k = closest_idx:length(X_ref)
        if dists(k) >= Ld
            idx = k;
            break;
        end
    end
    if isempty(idx)
        idx = length(X_ref);
    end
    X_target = X_ref(idx);
    Y_target = Y_ref(idx);
    %上面这个部分的语法我不太懂

    % 3) 目标点相对角度与误差角：
    angle_to_target = atan2(Y_target - Y, X_target - X); % 目标点相对角度 arctan2（Y目标- Y，X目标- X）
    alpha = atan2(sin(angle_to_target - phi), cos(angle_to_target - phi)); % 误差角

    % 4) Pure Pursuit 曲率与转向角：
    kappa = 2 * sin(alpha) / Ld; % 期望转向率
    sigma = atan(lfr * kappa); % 前轮的转向角

    % ===============================================================

    % ================= TODO 2.2: 车辆状态更新 =================
    % 提示: 将刚才求得的转向角 sigma 代入运动学模型，更新 X, Y, phi。
    % 和第一问一样
    

    phi_dot = v / lfr * tan(sigma);
    phi = phi + phi_dot * dt;
    X = X + v * cos(phi) * dt;
    Y = Y + v * sin(phi) * dt;
    
    % ===============================================================
    
    % 到达终点提前结束
    if X >= X_ref(end), break; end
end

% 绘图对比
figure; hold on; grid on;
plot(X_ref, Y_ref, 'k--', 'LineWidth', 2);
plot(X_vec(1:ii), Y_vec(1:ii), 'r-', 'LineWidth', 2);
legend('参考规划轨迹', '实际行驶轨迹');
title(['Pure Pursuit 跟踪 (Ld = ', num2str(Ld), 'm)']);
xlabel('X [m]'); ylabel('Y [m]'); axis equal;