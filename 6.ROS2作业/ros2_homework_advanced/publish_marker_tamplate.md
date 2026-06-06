# RViz Marker 发布模板

下面是一个可直接套用的 C++ 模板，用于在 ROS2 中向 rviz 发布 Marker。你可以把其中的坐标系、类型、颜色、尺寸和位置按需替换。

## C++ 模板

```cpp
#include <chrono>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "visualization_msgs/msg/marker.hpp"

using namespace std::chrono_literals;

class MarkerPublisher : public rclcpp::Node
{
public:
	MarkerPublisher() : Node("marker_publisher")
	{
		// ============================================================
		// [自定义1] 话题名：可以根据需要修改，但RViz默认订阅的是 "visualization_marker"
		// ============================================================
		marker_pub_ = this->create_publisher<visualization_msgs::msg::Marker>("visualization_marker", 10);

		// 定时发布间隔：可以根据需要调整（单位：毫秒）
		timer_ = this->create_wall_timer(500ms, std::bind(&MarkerPublisher::publishMarker, this));
	}

private:
	void publishMarker()
	{
		visualization_msgs::msg::Marker marker;

		// ============================================================
		// [自定义2] 坐标系名称：必须与RViz中Fixed Frame设置的坐标系一致！
		// ============================================================
		marker.header.frame_id = "map";  // TODO: 修改为实际的坐标系名称
		marker.header.stamp = this->now();

		// ============================================================
		// [自定义3] 命名空间和ID：用于区分不同Marker组，同一组用相同ns
		// ============================================================
		marker.ns = "basic_shapes";  // TODO: 修改为你的命名空间，如"cones"
		marker.id = 0;               // TODO: 每个Marker需要唯一ID，循环使用时需递增

		// ============================================================
		// [自定义4] Marker形状类型：根据可视化需求选择
		// 可选值：CUBE / SPHERE / ARROW / TEXT_VIEW_FACING / LINE_STRIP / POINTS 等
		// ============================================================
		marker.type = visualization_msgs::msg::Marker::SPHERE;  // TODO: 修改形状

		// ============================================================
		// [自定义5] 动作：ADD=添加或更新 / DELETE=删除
		// ============================================================
		marker.action = visualization_msgs::msg::Marker::ADD;  // 通常不需要修改

		// ============================================================
		// [自定义6] 位置和方向：三维坐标和四元数朝向
		// ============================================================
		marker.pose.position.x = 0.0;  // TODO: 修改X坐标
		marker.pose.position.y = 0.0;  // TODO: 修改Y坐标
		marker.pose.position.z = 0.5;  // TODO: 修改Z坐标
		marker.pose.orientation.x = 0.0;
		marker.pose.orientation.y = 0.0;
		marker.pose.orientation.z = 0.0;
		marker.pose.orientation.w = 1.0;

		// ============================================================
		// [自定义7] 尺寸大小：根据实际物体尺寸调整
		// ============================================================
		marker.scale.x = 0.5;  // TODO: 修改宽度
		marker.scale.y = 0.5;  // TODO: 修改高度
		marker.scale.z = 0.5;  // TODO: 修改深度（或长度）

		// ============================================================
		// [自定义8] 颜色：RGBA格式，alpha必须>0才显示
		// ============================================================
		marker.color.r = 0.1f;  // TODO: 修改红色分量 (0.0~1.0)
		marker.color.g = 0.8f;  // TODO: 修改绿色分量
		marker.color.b = 0.2f;  // TODO: 修改蓝色分量
		marker.color.a = 1.0f;  // TODO: 修改透明度 (0.0~1.0, 1.0=完全不透明)

		// ============================================================
		// [自定义9] 生命周期：0表示永久显示，也可设置具体秒数
		// ============================================================
		marker.lifetime = rclcpp::Duration::from_seconds(0.0);  // 通常不需要修改

		// 发布 Marker
		marker_pub_->publish(marker);
	}

	rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr marker_pub_;
	rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char ** argv)
{
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<MarkerPublisher>());
	rclcpp::shutdown();
	return 0;
}
```
