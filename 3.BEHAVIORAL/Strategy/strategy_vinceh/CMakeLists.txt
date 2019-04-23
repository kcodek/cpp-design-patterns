cmake_minimum_required(VERSION 3.12)
project(strategy_vinceh
        VERSION 1.0.0
        DESCRIPTION "Strategy Pattern by Vince Houston")


add_executable(strategy_before)
target_sources(strategy_before PRIVATE strategy_before.cpp)
target_compile_features(strategy_before PRIVATE cxx_std_14) 


add_executable(strategy_after)
target_sources(strategy_after PRIVATE strategy_after.cpp)
target_compile_features(strategy_after PRIVATE cxx_std_14)


add_executable(strategy_template_approach)
target_sources(strategy_template_approach PRIVATE strategy_template_approach.cpp)
target_compile_features(strategy_template_approach PRIVATE cxx_std_14) 


add_executable(strategy_demo)
target_sources(strategy_demo PRIVATE strategy_demo.cpp)
target_compile_features(strategy_demo PRIVATE cxx_std_14)