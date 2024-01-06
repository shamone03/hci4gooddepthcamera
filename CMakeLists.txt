cmake_minimum_required(VERSION 3.27)

project(hci4gooddepthcamera)

#set(LIBREALSENSE_PATH "C:\\Program Files (x86)\\Intel RealSense SDK 2.0")
set(SOURCES ${PROJECT_NAME}/sources/main.cpp)
set(INCLUDE ${PROJECT_NAME}/include/main.h)

find_package(OpenCV REQUIRED core CONFIG)
find_package(realsense2 REQUIRED CONFIG)

add_executable(${PROJECT_NAME} ${SOURCES} ${INCLUDE})

target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_NAME}/include)

#target_include_directories(${PROJECT_NAME} PRIVATE ${LIBREALSENSE_PATH}/include)
#target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_INCLUDE_PATH})

#target_link_libraries(${PROJECT_NAME} PRIVATE ${LIBREALSENSE_PATH}/lib/x64/realsense2.lib)
target_link_libraries(${PROJECT_NAME} PRIVATE realsense2::realsense2)
target_link_libraries(${PROJECT_NAME} PRIVATE opencv::opencv)

#file(GLOB LIBREALSENSE_DLL ${LIBREALSENSE_PATH}/bin/x64/*)
#file(COPY ${LIBREALSENSE_DLL} DESTINATION ${CMAKE_BINARY_DIR})

#get_cmake_property(_variableNames VARIABLES)
#foreach (_variableName ${_variableNames})
#    message("${_variableName}=${${_variableName}}")
#endforeach()
