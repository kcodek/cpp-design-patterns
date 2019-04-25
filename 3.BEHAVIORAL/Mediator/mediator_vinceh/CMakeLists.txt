cmake_minimum_required(VERSION 3.12)
project(mediator_vinceh
        VERSION 1.0.0
        DESCRIPTION "Mediator Pattern by Vince Houston")


add_executable(mediator_before)
target_sources(mediator_before PRIVATE mediator_before.cpp)
target_compile_features(mediator_before PRIVATE cxx_std_14) 

add_executable(mediator_after)
target_sources(mediator_after PRIVATE mediator_after.cpp)
target_compile_features(mediator_after PRIVATE cxx_std_14) 


add_executable(mediator_demo)
target_sources(mediator_demo PRIVATE mediator_demo.cpp)
target_compile_features(mediator_demo PRIVATE cxx_std_14) 
