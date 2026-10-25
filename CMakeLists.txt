cmake_minimum_required(VERSION 4.1)
project(ListaDwukierunkowa_Pyrdol_Jakub)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ListaDwukierunkowa_Pyrdol_Jakub main.cpp DoublyLinkedList.cpp Node.cpp Factory.cpp Iterator.cpp)
