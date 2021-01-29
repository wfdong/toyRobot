cmake_minimum_required(VERSION 3.2)
project(toyRobot)
INCLUDE_DIRECTORIES(include)
AUX_SOURCE_DIRECTORY(src DIR_SRCS)
SET(TEST_ENV
${DIR_SRCS}
)
ADD_EXECUTABLE(toyRobot ${TEST_ENV})
add_subdirectory(test)
add_definitions(-std=c++11)