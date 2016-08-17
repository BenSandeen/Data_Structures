cmake_minimum_required(VERSION 3.6)
project(Data_Structures)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp DataStructure.h DataStructure.cpp LinkedList.cpp Queue.h Queue.cpp BinarySearchTree.h BinarySearchTree.cpp)
add_executable(Data_Structures ${SOURCE_FILES})