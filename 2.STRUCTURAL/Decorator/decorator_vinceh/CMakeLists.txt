cmake_minimum_required(VERSION 3.12)
project(decorator_vinceh
        VERSION 1.0.0
        DESCRIPTION "decorator Pattern by Vince Houston")


add_executable(decorator_before)
target_sources(decorator_before PRIVATE decorator_before.cpp)
target_compile_features(decorator_before PRIVATE cxx_std_14) 

add_executable(decorator_after)
target_sources(decorator_after PRIVATE decorator_after.cpp)
target_compile_features(decorator_after PRIVATE cxx_std_14) 


add_executable(decorator_demo_1)
target_sources(decorator_demo_1 PRIVATE decorator_demo_1.cpp)
target_compile_features(decorator_demo_1 PRIVATE cxx_std_14) 


add_executable(decorator_demo_2)
target_sources(decorator_demo_2 PRIVATE decorator_demo_2.cpp)
target_compile_features(decorator_demo_2 PRIVATE cxx_std_14) 
