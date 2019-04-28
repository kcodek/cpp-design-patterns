cmake_minimum_required(VERSION 3.12)
project(state_vinceh
        VERSION 1.0.0
        DESCRIPTION "State Pattern by Vince Houston")


add_executable(state_before)
target_sources(state_before PRIVATE state_before.cpp)
target_compile_features(state_before PRIVATE cxx_std_14) 

add_executable(state_after)
target_sources(state_after PRIVATE state_after.cpp)
target_compile_features(state_after PRIVATE cxx_std_14) 


add_executable(state_demo_1)
target_sources(state_demo_1 PRIVATE state_demo_1.cpp)
target_compile_features(state_demo_1 PRIVATE cxx_std_14) 

add_executable(state_demo_2)
target_sources(state_demo_2 PRIVATE state_demo_2.cpp)
target_compile_features(state_demo_2 PRIVATE cxx_std_14) 

add_executable(state_demo_3)
target_sources(state_demo_3 PRIVATE state_demo_3.cpp)
target_compile_features(state_demo_3 PRIVATE cxx_std_14) 