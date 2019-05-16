cmake_minimum_required(VERSION 3.12)
project(observer_schmidh
        VERSION 1.0.0
        DESCRIPTION "thread_safety observer Pattern by Schmid H")


# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   

add_executable(thread_safety_observer)
target_sources(thread_safety_observer PRIVATE observer2.cpp)
target_compile_features(thread_safety_observer PRIVATE cxx_std_14) 
