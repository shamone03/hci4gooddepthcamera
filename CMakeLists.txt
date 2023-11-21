cmake_minimum_required(VERSION 3.27)
project(hci4gooddepthcamera)

find_package(realsense2 REQUIRED)

find_library(LIB_PATH realsense2d ${CMAKE_LIBRARY_PATH} REQUIRED)
find_library(LIB_PATH_2 realsense-filed ${CMAKE_LIBRARY_PATH} REQUIRED)
find_library(LIB_PATH_3 libusb-1.0 ${CMAKE_LIBRARY_PATH} REQUIRED)
find_library(LIB_PATH_4 fwd ${CMAKE_LIBRARY_PATH} REQUIRED)

add_executable(${PROJECT_NAME} ${CMAKE_SOURCE_DIR}/main/source/main.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_INCLUDE_PATH})


target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/main/include)
target_link_libraries(${PROJECT_NAME} PRIVATE ${LIB_PATH_4})
target_link_libraries(${PROJECT_NAME} PRIVATE ${LIB_PATH_3})
target_link_libraries(${PROJECT_NAME} PRIVATE ${LIB_PATH_2})
target_link_libraries(${PROJECT_NAME} PRIVATE ${LIB_PATH})
