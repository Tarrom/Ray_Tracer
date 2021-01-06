cmake_minimum_required(VERSION 3.13)
project(ray)

set(CMAKE_CXX_STANDARD 14)

add_executable(ray main.cpp vec3.h ray.h hitable.h sphere.h hitable_list.h camera.h material.h random_number_gen.h)