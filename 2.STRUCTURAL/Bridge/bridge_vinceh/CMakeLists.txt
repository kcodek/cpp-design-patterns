cmake_minimum_required(VERSION 3.12)
project(bridge_vinceh
        VERSION 1.0.0
        DESCRIPTION "bridge Pattern by Vince Houston")


# add_executable(bridge_before)
# target_sources(bridge_before PRIVATE bridge_before.cpp)
# target_compile_features(bridge_before PRIVATE cxx_std_14) 

# add_executable(bridge_after)
# target_sources(bridge_after PRIVATE bridge_after.cpp)
# target_compile_features(bridge_after PRIVATE cxx_std_14) 


add_executable(bridge_demo)
target_sources(bridge_demo PRIVATE bridge_demo.cpp)
# target_compile_features(bridge_demo PRIVATE cxx_std_14) 
