#include <librealsense2/rs.hpp>
#include <thread>
#include <iomanip>
#include <opencv2/core.hpp>

#include "main.h"
struct point {
	int x;
	int y;
};

int main() {

	rs2::context ctx;
	std::cout << "hello from librealsense - " << RS2_API_VERSION_STR << std::endl;
	std::cout << "You have " << ctx.query_devices().size() << " RealSense devices connected" << std::endl;
	cv::Mat m = cv::Mat::zeros(400, 400, CV_8UC3);
	rs2::pipeline p;
	// p.start();
	// while (true) {
	// 	rs2::frameset frames = p.wait_for_frames();
	// 	rs2::depth_frame depth = frames.get_depth_frame();
	// 	float closest = 999;
	// 	point closestpoint = {0, 0};
	// 	float ground = 10;
	// 	
	// 	for (int i = 0; i < depth.get_width(); i++) {
	// 		for (int j = 0; j < depth.get_height(); j++) {
	// 			const auto dist = depth.get_distance(i, j);
	// 			if (dist < ground) {
	// 				const auto diff = ground - dist;
	//
	// 				if (diff < closest) {
	// 					closest = diff;
	// 					closestpoint.x = i;
	// 					closestpoint.y = j;
	// 				}
	// 			}
	// 		}
	// 	}
	// 	
	// 	std::cout << "closest thing is at x = " << closestpoint.x << " y = " << closestpoint.y << " dist = " << closest << "\r";
	//
	// 	using namespace std::chrono_literals;
	// 	std::this_thread::sleep_for(2s);
	// }

}
