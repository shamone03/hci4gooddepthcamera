
#include "main.h"
#include <librealsense2/rs.hpp> // Include RealSense Cross Platform API


int main(int argc, char* argv[]) {
	rs2::context ctx;
	std::cout << "hello world" << std::endl;
	std::cout << "hello from librealsense - " << RS2_API_VERSION_STR << std::endl;
	std::cout << "You have " << ctx.query_devices().size() << " RealSense devices connected" << std::endl;
}