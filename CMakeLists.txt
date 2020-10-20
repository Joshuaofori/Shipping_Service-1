cmake_minimum_required(VERSION 3.17)
project(shipping_Service)

set(CMAKE_CXX_STANDARD 14)

add_executable(shipping_Service main.cpp delivery/Point.cpp delivery/Point.h delivery/Slot.cpp delivery/Slot.h delivery/Packet.cpp delivery/Packet.h delivery/Truck.cpp delivery/Truck.h)