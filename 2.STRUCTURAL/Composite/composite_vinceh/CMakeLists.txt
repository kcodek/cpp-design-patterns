cmake_minimum_required(VERSION 3.12)
project(composite_vinceh
        VERSION 1.0.0
        DESCRIPTION "Composite Pattern by Vince Houston")


add_executable(composite_before)
target_sources(composite_before PRIVATE composite_before.cpp)
target_compile_features(composite_before PRIVATE cxx_std_14) 

add_executable(composite_after)
target_sources(composite_after PRIVATE composite_after.cpp)
target_compile_features(composite_after PRIVATE cxx_std_14) 


add_executable(composite_demo)
target_sources(composite_demo PRIVATE composite_demo.cpp)
target_compile_features(composite_demo PRIVATE cxx_std_14) 
