cmake_minimum_required(VERSION 3.24)
project(test_task_Lesta_games)

set(CMAKE_CXX_STANDARD 20)

set (MY_CIRCULAR_DIR ${CMAKE_SOURCE_DIR}/CircularBuffer)
set (MY_CIRCULAR_1_DIR ${MY_CIRCULAR_DIR}/CircularBuffer_1)
set (MY_CIRCULAR_2_DIR ${MY_CIRCULAR_DIR}/CircularBuffer_2)

add_executable(test_task_Lesta_games main.cpp
        ${MY_CIRCULAR_DIR}/CircularBuffer.h
        ${MY_CIRCULAR_DIR}/CircularBuffer.cpp
        ${MY_CIRCULAR_1_DIR}/CircularBuffer_1.cpp
        ${MY_CIRCULAR_1_DIR}/CircularBuffer_1.h
        ${MY_CIRCULAR_2_DIR}/CircularBuffer_2.h
        ${MY_CIRCULAR_2_DIR}/CircularBuffer_2.cpp
        isEven.h
        My_quick_sort.h)

target_include_directories(test_task_Lesta_games PUBLIC ${MY_CIRCULAR_DIR} ${MY_CIRCULAR_1_DIR} ${MY_CIRCULAR_2_DIR})