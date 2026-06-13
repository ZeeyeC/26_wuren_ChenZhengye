#include <iostream>
#include <Eigen/Core>
#include <cmath>

int main() {
    Eigen::Vector2d X(0.0, 0.0); // 初始位置
    double eta = 0.1; // 学习率
    int iter = 0;
    const double tol = 1e-3;

    while ( (std::abs(X(0)-3.0) > tol) || (std::abs(X(1)-3.0) > tol) ) {
        Eigen::Vector2d grad;
        grad << X(0)-3.0, 10.0*(X(1)-3.0);
        X -= eta * grad;
        iter++;
    }

    std::cout << "迭代次数: " << iter << std::endl;
    std::cout << "最优解: " << X.transpose() << std::endl;
    return 0;
}