cmake_minimum_required(VERSION 3.12)
project(flyweight_vinceh
        VERSION 1.0.0
        DESCRIPTION "Flyweight Pattern by Vince Houston")


add_executable(flyweight_before)
target_sources(flyweight_before PRIVATE flyweight_before.cpp)
target_compile_features(flyweight_before PRIVATE cxx_std_14) 

add_executable(flyweight_after)
target_sources(flyweight_after PRIVATE flyweight_after.cpp)
target_compile_features(flyweight_after PRIVATE cxx_std_14) 


add_executable(flyweight_demo)
target_sources(flyweight_demo PRIVATE flyweight_demo.cpp)
target_compile_features(flyweight_demo PRIVATE cxx_std_14) 
