cmake_minimum_required(VERSION 3.12)
project(builder_vinceh
        VERSION 1.0.0
        DESCRIPTION "Builder Pattern by Vince Houston")


add_executable(builder_before)
target_sources(builder_before PRIVATE builder_before.cpp)
target_compile_features(builder_before PRIVATE cxx_std_14) 


add_executable(builder_after)
target_sources(builder_after PRIVATE builder_after.cpp)
target_compile_features(builder_after PRIVATE cxx_std_14) 

add_executable(builder_demo_1)
target_sources(builder_demo_1 PRIVATE builder_demo_1.cpp)
target_compile_features(builder_demo_1 PRIVATE cxx_std_14) 