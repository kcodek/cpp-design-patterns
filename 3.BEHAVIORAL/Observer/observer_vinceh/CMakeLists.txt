cmake_minimum_required(VERSION 3.12)
project(observer_vinceh
        VERSION 1.0.0
        DESCRIPTION "Observer Pattern by Vince Houston")


add_executable(observer_before)
target_sources(observer_before PRIVATE observer_before.cpp)
target_compile_features(observer_before PRIVATE cxx_std_14) 

add_executable(observer_after)
target_sources(observer_after PRIVATE observer_after.cpp)
target_compile_features(observer_after PRIVATE cxx_std_14) 

add_executable(observer_demo_1)
target_sources(observer_demo_1 PRIVATE observer_demo_1.cpp)
target_compile_features(observer_demo_1 PRIVATE cxx_std_14) 
        
add_executable(observer_demo_2)
target_sources(observer_demo_2 PRIVATE observer_demo_2.cpp)
target_compile_features(observer_demo_2 PRIVATE cxx_std_14) 

add_executable(observer_demo_3)
target_sources(observer_demo_3 PRIVATE observer_demo_3.cpp)
target_compile_features(observer_demo_3 PRIVATE cxx_std_14) 


# add_executable(observer_demo_4)
# target_sources(observer_demo_4 PRIVATE observer_demo_4.cpp)
# target_compile_features(observer_demo_4 PRIVATE cxx_std_14) 
