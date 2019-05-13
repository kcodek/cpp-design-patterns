cmake_minimum_required(VERSION 3.12)
project(factories_schmidh
        VERSION 1.0.0
        DESCRIPTION "Point Example by Schmid H")


# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   

add_executable(point_example)
target_sources(point_example PRIVATE PointExample.cpp)
target_compile_features(point_example PRIVATE cxx_std_14) 
