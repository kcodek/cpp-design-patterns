cmake_minimum_required(VERSION 3.12)
project(visitor_vinceh
        VERSION 1.0.0
        DESCRIPTION "Visitor Pattern by Vince Houston")


add_executable(visitor_before)
target_sources(visitor_before PRIVATE visitor_before.cpp)
target_compile_features(visitor_before PRIVATE cxx_std_14) 
        
add_executable(visitor_after)
target_sources(visitor_after PRIVATE visitor_after.cpp)
target_compile_features(visitor_after PRIVATE cxx_std_14) 


add_executable(visitor_demo_1)
target_sources(visitor_demo_1 PRIVATE visitor_demo_1.cpp)
target_compile_features(visitor_demo_1 PRIVATE cxx_std_14) 

add_executable(visitor_demo_2)
target_sources(visitor_demo_2 PRIVATE visitor_demo_2.cpp)
target_compile_features(visitor_demo_2 PRIVATE cxx_std_14) 

add_executable(visitor_demo_3)
target_sources(visitor_demo_3 PRIVATE visitor_demo_3.cpp)
target_compile_features(visitor_demo_3 PRIVATE cxx_std_14) 


add_executable(visitor_demo_4)
target_sources(visitor_demo_4 PRIVATE visitor_demo_4.cpp)
target_compile_features(visitor_demo_4 PRIVATE cxx_std_14) 

add_executable(visitor_demo_5)
target_sources(visitor_demo_5 PRIVATE visitor_demo_5.cpp)
target_compile_features(visitor_demo_5 PRIVATE cxx_std_14) 

add_executable(visitor_demo_6)
target_sources(visitor_demo_6 PRIVATE visitor_demo_6.cpp)
target_compile_features(visitor_demo_6 PRIVATE cxx_std_14) 

add_executable(visitor_demo_7)
target_sources(visitor_demo_7 PRIVATE visitor_demo_7.cpp)
target_compile_features(visitor_demo_7 PRIVATE cxx_std_14) 

add_executable(visitor_demo_8)
target_sources(visitor_demo_8 PRIVATE visitor_demo_8.cpp)
target_compile_features(visitor_demo_8 PRIVATE cxx_std_14) 


add_executable(visitor_demo_9)
target_sources(visitor_demo_9 PRIVATE visitor_demo_9.cpp)
target_compile_features(visitor_demo_4 PRIVATE cxx_std_14) 

add_executable(visitor_demo_10)
target_sources(visitor_demo_10 PRIVATE visitor_demo_10.cpp)
target_compile_features(visitor_demo_10 PRIVATE cxx_std_14) 