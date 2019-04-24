cmake_minimum_required(VERSION 3.12)
project(proxy_vinceh
        VERSION 1.0.0
        DESCRIPTION "proxy Pattern by Vince Houston")


add_executable(proxy_before)
target_sources(proxy_before PRIVATE proxy_before.cpp)
target_compile_features(proxy_before PRIVATE cxx_std_14) 

add_executable(proxy_after)
target_sources(proxy_after PRIVATE proxy_after.cpp)
target_compile_features(proxy_after PRIVATE cxx_std_14) 


add_executable(proxy_demo_1)
target_sources(proxy_demo_1 PRIVATE proxy_demo_1.cpp)
target_compile_features(proxy_demo_1 PRIVATE cxx_std_14) 

add_executable(proxy_demo_2)
target_sources(proxy_demo_2 PRIVATE proxy_demo_2.cpp)
target_compile_features(proxy_demo_2 PRIVATE cxx_std_14) 

add_executable(proxy_demo_3)
target_sources(proxy_demo_3 PRIVATE proxy_demo_3.cpp)
target_compile_features(proxy_demo_3 PRIVATE cxx_std_14) 