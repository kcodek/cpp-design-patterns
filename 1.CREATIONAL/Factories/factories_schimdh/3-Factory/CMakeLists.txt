cmake_minimum_required(VERSION 3.12)
project(factories_schmidh
        VERSION 1.0.0
        DESCRIPTION "Factory by Schmid H")


# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   

add_executable(factory)
target_sources(factory PRIVATE Factory.cpp)
target_compile_features(factory PRIVATE cxx_std_14) 
