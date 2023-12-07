cmake_minimum_required(VERSION 3.10)

project(hci4gooddepthcamera)

set(LIBREALSENSE_PATH "C:\\Program Files (x86)\\Intel RealSense SDK 2.0")
file(GLOB_RECURSE SOURCES ${PROJECT_NAME}/sources/*.cpp)
file(GLOB_RECURSE INCLUDE ${PROJECT_NAME}/include/*.h)


add_executable(${PROJECT_NAME} ${SOURCES} ${INCLUDE})

target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_NAME}/include)
target_include_directories(${PROJECT_NAME} PRIVATE ${LIBREALSENSE_PATH}/include)

target_link_libraries(${PROJECT_NAME} ${LIBREALSENSE_PATH}/lib/x64/realsense2.lib)

file(GLOB LIBREALSENSE_DLL ${LIBREALSENSE_PATH}/bin/x64/*)

file(COPY ${LIBREALSENSE_DLL} DESTINATION ${CMAKE_BINARY_DIR})

