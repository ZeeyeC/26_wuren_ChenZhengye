#include <chrono>
#include <memory>
#include <vector>

#include "rclcpp/rclcpp.hpp"
#include "visualization_msgs/msg/marker.hpp"
#include "visualization_msgs/msg/marker_array.hpp"
#include "fsd_common_msgs/msg/map.hpp"

using namespace std::chrono_literals;

class MapVisualizer : public rclcpp::Node
{
public:
	MapVisualizer() : Node("map_visualizer") //这个部分不断被spin运行
	{
		// 创建 Marker 发布器，使用 MarkerArray 可以发布多个 Marker （和模板不同）
		marker_pub_ = this->create_publisher<visualization_msgs::msg::MarkerArray>("visualization_marker_array", 10);//10是队列大小 缓存10条信息

		// 订阅地图话题，消息类型为 fsd_common_msgs::msg::Map
		//这个节点是订阅者 和模板不一样 用的是订阅模式 
		map_sub_ = this->create_subscription<fsd_common_msgs::msg::Map>(
			"/estimation/slam/map", //订阅话题 这个话题名是yaml里面的
			10,//队列大小
			std::bind(&MapVisualizer::Callback, this, std::placeholders::_1)//绑定回调函数
		);

		RCLCPP_INFO(this->get_logger(), "Map Visualizer has been started."); //日志信息 地图可视化节点启动启动了
		RCLCPP_INFO(this->get_logger(), "Subscribing to: /estimation/slam/map"); //日志信息 订阅到地图话题 /estimation/slam/map
	}

private:
	void Callback(const fsd_common_msgs::msg::Map::SharedPtr msg)
	{
		visualization_msgs::msg::MarkerArray marker_array;

		// 从消息头获取坐标系
		std::string frame_id = msg->header.frame_id;
		if (frame_id.empty()) {
			frame_id = "map";  // 如果没有坐标系，默认使用 map
		}

		int marker_id = 0;

		// 处理蓝色锥桶
		for (const auto& cone : msg->cone_blue) {
			visualization_msgs::msg::Marker marker = createConeMarker(cone, frame_id, marker_id++, "blue_cones");
			marker.color.r = 0.0f;
			marker.color.g = 0.0f;
			marker.color.b = 1.0f;
			marker.color.a = 1.0f;
			marker_array.markers.push_back(marker);
		}


		// 处理红色锥桶
		for (const auto& cone : msg->cone_red) {
			visualization_msgs::msg::Marker marker = createConeMarker(cone, frame_id, marker_id++, "red_cones");
			marker.color.r = 1.0f;
			marker.color.g = 0.0f;
			marker.color.b = 0.0f;
			marker.color.a = 1.0f;
			marker_array.markers.push_back(marker);
		}

		// 处理黄色锥桶（readme解释了为什么有这个部分）
		for (const auto& cone : msg->cone_yellow) {
			visualization_msgs::msg::Marker marker = createConeMarker(cone, frame_id, marker_id++, "yellow_cones");
			marker.color.r = 1.0f;
			marker.color.g = 1.0f;
			marker.color.b = 0.0f;
			marker.color.a = 1.0f;
			marker_array.markers.push_back(marker);
		}

		// 处理未知颜色锥桶

		for (const auto& cone : msg->cone_unknown) {
			visualization_msgs::msg::Marker marker = createConeMarker(cone, frame_id, marker_id++, "unknown_cones");
			marker.color.r = 0.5f;
			marker.color.g = 0.5f;
			marker.color.b = 0.5f;
			marker.color.a = 1.0f;
			marker_array.markers.push_back(marker);
		}


		// 发布所有 Marker
		
		marker_pub_->publish(marker_array);

		RCLCPP_INFO(this->get_logger(), "Published %zu markers (Blue: %zu, Red: %zu, Yellow: %zu, Unknown: %zu)",
			marker_array.markers.size(),
			msg->cone_blue.size(),
			msg->cone_red.size(),
			msg->cone_yellow.size(),
			msg->cone_unknown.size()
		);
	}

	// 创建单个锥桶 Marker 的辅助函数 用来在RViz中可视化锥桶
	visualization_msgs::msg::Marker createConeMarker(
		const fsd_common_msgs::msg::Cone& cone,
		const std::string& frame_id,
		int id,
		const std::string& ns)
	{
		visualization_msgs::msg::Marker marker;

		// 设置坐标系和时间戳
		marker.header.frame_id = frame_id;
		marker.header.stamp = this->now();

		// 设置命名空间和 ID
		marker.ns = ns;
		marker.id = id;

		// 设置类型为圆柱体（模拟锥桶形状）
		marker.type = visualization_msgs::msg::Marker::CYLINDER;

		// 设置动作
		marker.action = visualization_msgs::msg::Marker::ADD;

		// 设置位置
		marker.pose.position.x = cone.position.x;
		marker.pose.position.y = cone.position.y;
		marker.pose.position.z = cone.position.z;
		marker.pose.orientation.x = 0.0;
		marker.pose.orientation.y = 0.0;
		marker.pose.orientation.z = 0.0;
		marker.pose.orientation.w = 1.0;

		// 设置尺寸（锥桶大小）
		marker.scale.x = 0.3;  // 直径
		marker.scale.y = 0.3;  // 直径
		marker.scale.z = 0.5;  // 高度

		// 生命周期
		marker.lifetime = rclcpp::Duration::from_seconds(0.0);

		return marker;
	}

	// 成员变量
	rclcpp::Publisher<visualization_msgs::msg::MarkerArray>::SharedPtr marker_pub_;
	rclcpp::Subscription<fsd_common_msgs::msg::Map>::SharedPtr map_sub_;
};

//main函数和基础题目一样 不注释了
int main(int argc, char ** argv)
{
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<MapVisualizer>());
	rclcpp::shutdown();
	return 0;
}