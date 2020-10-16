cmake_minimum_required(VERSION 3.17)
project(Shipping_service)

set(CMAKE_CXX_STANDARD 14)

add_executable(Shipping_service main.cpp Truck.cpp Truck.h Slot.cpp Slot.h Packet.cpp Packet.h Point.cpp Point.h)