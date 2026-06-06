# 作业代码与模板代码逐行对比

本文档详细对比**作业代码**(`turtle_figure_eight.cpp`)与**模板代码**(`topic_publisher.cpp`)的差异。

---

## 📋 代码结构对比

### 模板代码（topic_publisher.cpp）
```
总行数：78行
结构：
├── 注释说明（步骤1-5）
├── 头文件（4个）
├── 类定义
│   ├── 构造函数
│   │   ├── 创建发布者
│   │   └── 创建定时器
│   ├── 发布函数
│   └── 成员变量（2个）
└── 主函数
```

### 作业代码（turtle_figure_eight.cpp）
```
总行数：224行
结构：
├── 注释说明（作业要求）
├── 头文件（4个 + 1个新增）
├── 状态机枚举（新增）
├── 类定义
│   ├── 构造函数
│   │   ├── 参数声明
│   │   ├── 参数获取
│   │   ├── 创建发布者
│   │   └── 创建定时器
│   ├── 定时器回调（新增）
│   ├── 状态更新函数（新增）
│   ├── 发布命令函数（替代原发布函数）
│   └── 成员变量（9个新增）
└── 主函数
```

---

## 🔍 逐行对比

### 【第1-14行】文件头注释
| 行号 | 模板代码 | 作业代码 | 区别说明 |
|------|---------|---------|---------|
| 1-14 | 简单的步骤说明 | 详细的作业说明 + 区别列表 | **新增**：与模板区别说明 |

```cpp
// 模板
/*  
  需求：在turtlesim节点中发布话题使乌龟做圆周运动
  步骤：
    1.包含头文件；
    2.初始化 ROS2 客户端；
    ...
*/

// 作业
/*
 * ROS2 作业：控制乌龟做8字形运动
 * 
 * 📌 与模板的主要区别：
 * 1. 不需要单独的发布方和订阅方，一个节点完成所有功能
 * 2. 使用状态机控制8字形轨迹（CIRCLE1 → TRANSITION → CIRCLE2）
 * ...
 */
```

---

### 【第15-25行】头文件
| 行号 | 模板代码 | 作业代码 | 区别说明 |
|------|---------|---------|---------|
| 15 | `#include <chrono>` | `#include <chrono>` | ✅ 相同 |
| 16 | `#include <functional>` | `#include <memory>` | **修改**：顺序调整 |
| 17 | `#include <memory>` | `#include <string>` | **新增**：字符串处理 |
| 18 | （空行） | （空行） | - |
| 19 | `#include "geometry_msgs/msg/twist.hpp"` | `#include "rclcpp/rclcpp.hpp"` | **修改**：顺序调整 |
| 20 | `#include "rclcpp/rclcpp.hpp"` | `#include "geometry_msgs/msg/twist.hpp"` | **修改**：顺序调整 |
| 21 | （空行） | （空行） | - |
| 22 | `using namespace std::chrono_literals;` | `using namespace std::chrono_literals;` | ✅ 相同 |
| 23 | （空行） | `using namespace std::placeholders;` | **新增**：用于std::bind |

```cpp
// 模板
#include <chrono>
#include <functional>
#include <memory>

#include "geometry_msgs/msg/twist.hpp"
#include "rclcpp/rclcpp.hpp"

using namespace std::chrono_literals;

// 作业
#include <chrono>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"

using namespace std::chrono_literals;
using namespace std::placeholders;  // 【新增】
```

---

### 【第24-35行】状态机枚举（作业新增）
| 行号 | 模板代码 | 作业代码 | 区别说明 |
|------|---------|---------|---------|
| 24 | （无） | `// ============================== 【与模板区别】状态机枚举 ==============================` | **新增**：注释说明 |
| 25 | （无） | `// 模板中没有状态机，直接周期性发布固定消息` | **新增**：说明 |
| 26 | （无） | `// 8字形需要状态转换：第一个圆 → 过渡 → 第二个圆 → 循环` | **新增**：说明 |
| 27-35 | （无） | 完整的 `enum class MotionState` 定义 | **完全新增** |

```cpp
// 【作业新增 - 模板中没有这部分】
// ============================== 【与模板区别】状态机枚举 ==============================
// 模板中没有状态机，直接周期性发布固定消息
// 8字形需要状态转换：第一个圆 → 过渡 → 第二个圆 → 循环
enum class MotionState {
    CIRCLE1,       // 第一个圆（顺时针）
    TRANSITION,    // 过渡阶段（减速准备转向）
    CIRCLE2,       // 第二个圆（逆时针）
    IDLE           // 空闲状态
};
```

---

### 【第36-50行】类定义开始
| 行号 | 模板代码 | 作业代码 | 区别说明 |
|------|---------|---------|---------|
| 36 | `class TopicPublisher : public rclcpp::Node` | `class TurtleFigureEight : public rclcpp::Node` | **修改**：类名不同 |
| 37 | `{` | `{` | 相同 |
| 38 | `public:` | `public:` | 相同 |
| 39 | `TopicPublisher()` | `TurtleFigureEight()` | **修改**：构造函数名 |
| 40 | `: Node("topic_publisher")` | `: Node("turtle_figure_eight"),` | **修改**：节点名 |
| 41 | （无） | `state_(MotionState::CIRCLE1),` | **新增**：状态初始化 |
| 42 | （无） | `state_start_time_(this->get_clock()->now())` | **新增**：时间记录 |
| 43 | `{}` | `{` | **修改**：构造函数体更长 |

---

### 【第44-70行】构造函数体（重点差异区域）
| 行号 | 模板代码 | 作业代码 | 区别说明 |
|------|---------|---------|---------|
| 44-48 | （无） | 参数配置相关代码 | **完全新增** |
| 49-55 | 创建发布者（简单） | 创建发布者（带变量） | **修改**：话题名参数化 |
| 56-61 | 创建定时器（固定100ms） | 创建定时器（动态周期） | **修改**：周期可配置 |
| 62-70 | （无） | 日志输出 | **新增**：启动信息 |

```cpp
// 模板（简单直接）
TopicPublisher()
: Node("topic_publisher")
{
    publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/circle_cmd", 10);
    timer_ = this->create_wall_timer(
      100ms, std::bind(&TopicPublisher::publish_circle_command, this));
}

// 作业（参数化、复杂）
TurtleFigureEight()
: Node("turtle_figure_eight"),
  state_(MotionState::CIRCLE1),
  state_start_time_(this->get_clock()->now())
{
    // ============================== 【与模板区别】动态参数配置 ==============================
    declare_parameters();    // 【新增】
    get_parameters();        // 【新增】
    
    publisher_ = this->create_publisher<geometry_msgs::msg::Twist>(
        cmd_vel_topic_,      // 【修改】：参数化
        rclcpp::QoS(10)
    );
    
    timer_ = this->create_wall_timer(
        std::chrono::milliseconds((int)(1000.0 / publish_rate_)),  // 【修改】：动态周期
        std::bind(&TurtleFigureEight::timer_callback, this)       // 【修改】：新回调
    );
    
    RCLCPP_INFO(...);  // 【新增】：日志输出
}
```

---

### 【第72-101行】私有成员函数（作业新增）
| 行号 | 模板代码 | 作业代码 | 区别说明 |
|------|---------|---------|---------|
| 72 | （无） | `private:` | **新增**：访问控制 |
| 73-89 | （无） | `declare_parameters()` | **完全新增** |
| 91-101 | （无） | `get_parameters()` | **完全新增** |

```cpp
// 【作业新增 - 模板中没有参数管理函数】
void declare_parameters()
{
    this->declare_parameter<double>("linear_speed", 1.5);
    this->declare_parameter<double>("angular_speed_circle1", 1.0);
    this->declare_parameter<double>("angular_speed_circle2", -1.0);
    this->declare_parameter<double>("circle_duration", 8.0);
    this->declare_parameter<double>("transition_duration", 1.0);
    this->declare_parameter<double>("publish_rate", 50.0);
    this->declare_parameter<std::string>("cmd_vel_topic", "/turtle1/cmd_vel");
}

void get_parameters()
{
    this->get_parameter("linear_speed", linear_speed_);
    this->get_parameter("angular_speed_circle1", angular_speed_circle1_);
    // ...
}
```

---

### 【第103-117行】定时器回调函数（作业新增）
| 行号 | 模板代码 | 作业代码 | 区别说明 |
|------|---------|---------|---------|
| 103 | （无） | 注释说明 | **新增** |
| 104-106 | （无） | 函数声明 | **完全新增** |
| 107-117 | （无） | 函数体 | **完全新增** |

```cpp
// 【作业新增 - 模板中没有定时器回调】
void timer_callback()
{
    auto now = this->get_clock()->now();
    auto elapsed = (now - state_start_time_).seconds();
    
    update_state(elapsed);     // 【新增】
    publish_command();          // 【修改】：调用新函数
}
```

---

### 【第119-155行】状态更新函数（作业新增）
| 行号 | 模板代码 | 作业代码 | 区别说明 |
|------|---------|---------|---------|
| 119-155 | （无） | 完整的 `update_state()` | **完全新增** |

```cpp
// 【作业新增 - 模板中没有状态机概念】
void update_state(double elapsed)
{
    switch (state_)
    {
        case MotionState::CIRCLE1:
            if (elapsed >= circle_duration_) {
                state_ = MotionState::TRANSITION;
                state_start_time_ = this->get_clock()->now();
            }
            break;
        // ... TRANSITION, CIRCLE2 的处理
    }
}
```

---

### 【第157-197行】发布命令函数（核心差异）
| 行号 | 模板代码 | 作业代码 | 区别说明 |
|------|---------|---------|---------|
| 157 | （无） | 注释说明 | **新增** |
| 158-160 | （无） | 函数声明 | **新增** |
| 161 | `void publish_circle_command()` | `void publish_command()` | **修改**：函数名 |
| 162-175 | 固定的 `msg.linear.x = 2.0` | 动态的 `switch` 语句 | **完全重写** |

```cpp
// 模板（固定值）
void publish_circle_command()
{
    geometry_msgs::msg::Twist msg;
    msg.linear.x = 2.0;      // 固定值
    msg.linear.y = 0.0;
    msg.linear.z = 0.0;
    msg.angular.x = 0.0;
    msg.angular.y = 0.0;
    msg.angular.z = 1.0;      // 固定值
    // ...
    publisher_->publish(msg);
}

// 作业（动态值）
void publish_command()
{
    auto msg = geometry_msgs::msg::Twist();
    
    switch (state_)  // 【新增】：根据状态判断
    {
        case MotionState::CIRCLE1:
            msg.linear.x = linear_speed_;      // 动态参数
            msg.angular.z = angular_speed_circle1_;
            break;
        case MotionState::TRANSITION:
            msg.linear.x = linear_speed_ * 0.5;
            msg.angular.z = 0.0;
            break;
        case MotionState::CIRCLE2:
            msg.linear.x = linear_speed_;
            msg.angular.z = angular_speed_circle2_;  // 负值
            break;
    }
    publisher_->publish(msg);
}
```

---

### 【第199-215行】成员变量（作业新增）
| 行号 | 模板代码 | 作业代码 | 区别说明 |
|------|---------|---------|---------|
| 199-200 | 只有2个成员变量 | 2个基础 + 9个新增 | **新增7个参数变量 + 2个状态变量** |

```cpp
// 模板（只有2个）
rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
rclcpp::TimerBase::SharedPtr timer_;

// 作业（11个）
rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
rclcpp::TimerBase::SharedPtr timer_;

// 【新增参数变量】
double linear_speed_;
double angular_speed_circle1_;
double angular_speed_circle2_;
double circle_duration_;
double transition_duration_;
double publish_rate_;
std::string cmd_vel_topic_;

// 【新增状态变量】
MotionState state_;
rclcpp::Time state_start_time_;
```

---

### 【第217-224行】主函数
| 行号 | 模板代码 | 作业代码 | 区别说明 |
|------|---------|---------|---------|
| 217 | `int main(int argc, char ** argv)` | `int main(int argc, char * argv[])` | 相同 |
| 218-220 | 标准5步骤 | 相同结构 | **基本相同** |

```cpp
// 模板和作业的主函数几乎相同
int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TurtleFigureEight>());  // 【修改】：类名
    rclcpp::shutdown();
    return 0;
}
```

---

## 📊 差异统计

| 类别 | 数量 | 说明 |
|------|------|------|
| **新增代码** | ~120行 | 状态机、参数管理、状态更新函数 |
| **修改代码** | ~20行 | 类名、函数名、参数化 |
| **删除代码** | ~30行 | 模板中的固定值发布逻辑 |
| **相同代码** | ~25行 | 头文件、基础结构、主函数 |

---

## 🎯 关键差异总结

### 1. **架构差异**
```
模板：简单的发布者 → 固定消息 → 定时发布
作业：发布者 + 状态机 + 参数系统 + 动态控制
```

### 2. **核心区别**
- ❌ 模板：硬编码参数 → 固定圆周运动
- ✅ 作业：动态参数 → 状态机控制 → 8字形轨迹

### 3. **代码量**
- 模板：78行（简单直接）
- 作业：224行（功能完整）

---

## 📝 代码复用建议

如果你要在作业基础上开发新功能：

1. **保持状态机结构**：它让代码逻辑清晰
2. **扩展YAML参数**：添加新参数只需3步：
   - YAML中添加配置
   - `declare_parameters()` 中声明
   - `get_parameters()` 中获取
3. **在 `update_state()` 中添加新状态**：扩展运动轨迹

---

## 🔗 参考文件

- 模板代码：`topic_case_package/src/topic_publisher.cpp`
- 作业代码：`ros2_homework_basic_package/src/turtle_figure_eight.cpp`
- Launch文件对比：见 `ros2_launch_common_usage.md`
