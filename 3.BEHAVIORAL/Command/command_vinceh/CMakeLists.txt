cmake_minimum_required(VERSION 3.12)
project(command_vinceh
        VERSION 1.0.0
        DESCRIPTION "Command Pattern by Vince Houston")


add_executable(command_before)
target_sources(command_before PRIVATE command_before.cpp)
target_compile_features(command_before PRIVATE cxx_std_14) 

add_executable(command_after)
target_sources(command_after PRIVATE command_after.cpp)
target_compile_features(command_after PRIVATE cxx_std_14) 


add_executable(command_demo_1)
target_sources(command_demo_1 PRIVATE command_demo_1.cpp)
target_compile_features(command_demo_1 PRIVATE cxx_std_14) 

# add_executable(command_demo_2)
# target_sources(command_demo_2 PRIVATE command_demo_2.cpp)
# target_compile_features(command_demo_2 PRIVATE cxx_std_14) 

# add_executable(command_demo_3)
# target_sources(command_demo_3 PRIVATE command_demo_3.cpp)
# target_compile_features(command_demo_3 PRIVATE cxx_std_14) 


# add_executable(command_demo_4)
# target_sources(command_demo_4 PRIVATE command_demo_4.cpp)
# target_compile_features(command_demo_4 PRIVATE cxx_std_14) 

add_executable(command_demo_5)
target_sources(command_demo_5 PRIVATE command_demo_5.cpp)
target_compile_features(command_demo_5 PRIVATE cxx_std_14) 

add_executable(command_demo_6)
target_sources(command_demo_6 PRIVATE command_demo_6.cpp)
target_compile_features(command_demo_6 PRIVATE cxx_std_14) 