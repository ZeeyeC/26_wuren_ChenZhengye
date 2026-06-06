// 8字形运动节点

#include <chrono>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"

using namespace std::chrono_literals;
using namespace std::placeholders;

// 状态机枚举 enum是枚举的关键字
enum class MotionState {
    CIRCLE1,       // 第一个圆（顺时针）
    TRANSITION,    // 过渡阶段（减速准备转向）
    CIRCLE2,       // 第二个圆（逆时针）
    IDLE           // 空闲状态
};

class TurtleFigureEight : public rclcpp::Node
{
public:
        TurtleFigureEight()
    : Node("bazi"), //节点名
      state_(MotionState::CIRCLE1), //初始状态是CIRCLE1
      state_start_time_(this->get_clock()->now()) //初始状态开始时间是当前时间
    {
        // 动态参数配置
        // 从YAML文件读取参数
        declare_parameters();
        get_parameters();
        
        // 创建发布者
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>(
            cmd_vel_topic_, 
            rclcpp::QoS(10) //发布者QoS 10
               );
        
        // 创建定时器 
        timer_ = this->create_wall_timer( 
            std::chrono::milliseconds((int)(1000.0 / publish_rate_)), //每1000/publish_rate_毫秒发布一次
            std::bind(&TurtleFigureEight::timer_callback, this) //绑定定时器回调函数
        );

        //打印日志
        RCLCPP_INFO(this->get_logger(), "乌龟8字形运动节点已启动"); 
        RCLCPP_INFO(this->get_logger(), "参数配置:");
        RCLCPP_INFO(this->get_logger(), "- 线速度: %.2f m/s", linear_speed_);
        RCLCPP_INFO(this->get_logger(), "- 第一个圆角速度: %.2f rad/s", angular_speed_circle1_);
        RCLCPP_INFO(this->get_logger(), "- 第二个圆角速度: %.2f rad/s", angular_speed_circle2_);
        RCLCPP_INFO(this->get_logger(), "- 圆持续时间: %.2f s", circle_duration_);
        RCLCPP_INFO(this->get_logger(), "- 圆半径: %.2f m", linear_speed_ / std::abs(angular_speed_circle1_));
    }

private:
    void declare_parameters()
    {
        // 运动参数
        this->declare_parameter<double>("linear_speed"); 
        //declare_parameter是ros2参数声明函数 用于声明参数 参数linear_speed是参数名 <double>是参数类型 用于指定参数的类型是double类型
        this->declare_parameter<double>("angular_speed_circle1");
        this->declare_parameter<double>("angular_speed_circle2");
        
        // 时间参数
        this->declare_parameter<double>("circle_duration");
        this->declare_parameter<double>("transition_duration");
        
        // 发布参数
        this->declare_parameter<double>("publish_rate");
        this->declare_parameter<std::string>("cmd_vel_topic");
    }

    // 参数获取函数
    void get_parameters()
    {
        this->get_parameter("linear_speed", linear_speed_);
        this->get_parameter("angular_speed_circle1", angular_speed_circle1_);
        this->get_parameter("angular_speed_circle2", angular_speed_circle2_);
        this->get_parameter("circle_duration", circle_duration_);
        this->get_parameter("transition_duration", transition_duration_);
        this->get_parameter("publish_rate", publish_rate_);
        this->get_parameter("cmd_vel_topic", cmd_vel_topic_);
    }

    // 定时器回调函数
    // 1. 计算状态持续时间 2. 更新运动状态 3. 根据状态发布不同指令
    void timer_callback()
    {
        // 计算当前状态持续时间
        auto now = this->get_clock()->now();
        auto elapsed = (now - state_start_time_).seconds(); // 计算状态持续时间 用现在减去状态开始时间 就是状态持续时间
        
        // 更新运动状态
        update_state(elapsed);
        
        // 发布运动指令
        publish_command();
    }

    // 状态更新函数
    void update_state(double elapsed)
    {
        switch (state_)
        {
            case MotionState::CIRCLE1:
                // 第一个圆画完，进入过渡阶段
                if (elapsed >= circle_duration_) {
                    RCLCPP_INFO(this->get_logger(), "完成第一个圆，进入过渡阶段"); // RCLCPP_INFO是ros2日志函数 用于打印信息日志 信息日志级别是info 区别于debug
                    state_ = MotionState::TRANSITION; //更新状态 下面同理
                    state_start_time_ = this->get_clock()->now(); // 更新状态开始时间 下面也同理
                }
                break;
                
            case MotionState::TRANSITION:
                // 过渡完成，开始第二个圆
                if (elapsed >= transition_duration_) {
                    RCLCPP_INFO(this->get_logger(), "过渡完成，开始第二个圆");
                    state_ = MotionState::CIRCLE2;
                    state_start_time_ = this->get_clock()->now();
                }
                break;
                
            case MotionState::CIRCLE2:
                // 第二个圆画完，回到第一个圆
                if (elapsed >= circle_duration_) {
                    RCLCPP_INFO(this->get_logger(), "完成第二个圆，回到第一个圆");
                    state_ = MotionState::CIRCLE1;
                    state_start_time_ = this->get_clock()->now();
                }
                break;
                
            default:
                break;
        }
    }

    
    // 根据状态发布不同的速度指令
    void publish_command()
    {
        auto msg = geometry_msgs::msg::Twist(); // 调用geometry_msgs::msg::Twist的构造函数 创建一个Twist消息
        //geometry_msgs是ROS2的几何消息包 msg定义信息格式
        //此外 geometry_msgs还有srv服务消息类型 定义了服务请求和响应 action 定义动作 还有cpp

        //这个Twist里面有两vector3类型的变量 linear和angular
        //vector3类型里面有x y z三个double变量


        switch (state_) //条件判断
        {
            case MotionState::CIRCLE1: //当状态是CIRCLE1时
                // 第一个圆：顺时针运动
                msg.linear.x = linear_speed_;   //这个就是vector3里面的x
                msg.angular.z = angular_speed_circle1_;

                /*只改xlinear的x和angular的z
                x是因为这个坐标轴是以小海龟为原点 头指向x轴来定义的 所以小海龟的头的方向的速度就是线速度
                z是因为angular的x是控制翻滚的 y是表示俯仰的 z是表示偏左右旋转的
                */
            
                break;
                
            case MotionState::TRANSITION:
                // 过渡阶段：减速直线运动
                msg.linear.x = linear_speed_ * 0.5;  // 减速
                msg.angular.z = 0.0;
                break;
                
            case MotionState::CIRCLE2:
                // 第二个圆：逆时针运动
                msg.linear.x = linear_speed_;
                msg.angular.z = angular_speed_circle2_;
                break;
                
            default:
                // 停止
                msg.linear.x = 0.0;
                msg.angular.z = 0.0;
                break;
        }
        
        publisher_->publish(msg);
        
    }

    // 成员变量声明
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_; //rclcpp是ros2核心库 TimerBase是定时器的基础类 SharedPtr是智能指针
    
    // 声明成员变量 就是前面参数获取函数里面的后一个参数
    double linear_speed_;
    double angular_speed_circle1_;
    double angular_speed_circle2_;
    double circle_duration_;
    double transition_duration_;
    double publish_rate_;
    std::string cmd_vel_topic_;
    
    // 声明状态变量
    MotionState state_;
    // 声明状态开始时间变量
    rclcpp::Time state_start_time_; //rclcpp是ros2核心库 Time是时间类
};

// 主函数
int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv); // 初始化ros2节点 init是初始化函数 argc是命令行参数个数 argv是命令行参数数组
    rclcpp::spin(std::make_shared<TurtleFigureEight>()); // 启动ros2节点 spin是启动函数 参数std::make_shared<TurtleFigureEight>()是节点对象的智能指针
    //这个spin内部是长这样的
    /*while (rclcpp::ok()) {
    // 检查定时器是否到期
    // 检查是否有新消息
    // 如果有事件，调用对应的回调函数
    }*/
   //不断在循环检查计时器的情况 如果有事件 就调用对应的回调函数 然后回调函数就检查这个阶段到时间没有 到了就更新状态
    rclcpp::shutdown(); // 关闭ros2节点 shutdown是关闭函数
    return 0;
}
