cmake_minimum_required(VERSION 3.12)
project(memento_vinceh
        VERSION 1.0.0
        DESCRIPTION "Memento Pattern by Vince Houston")

add_executable(memento_demo_1)
target_sources(memento_demo_1 PRIVATE memento_demo_1.cpp)
target_compile_features(memento_demo_1 PRIVATE cxx_std_14) 

add_executable(memento_demo_2)
target_sources(memento_demo_2 PRIVATE memento_demo_2.cpp)
target_compile_features(memento_demo_2 PRIVATE cxx_std_14) 

# add_executable(memento_demo_3)
# target_sources(memento_demo_3 PRIVATE memento_demo_3.cpp)
# target_compile_features(memento_demo_3 PRIVATE cxx_std_14) 


# add_executable(memento_demo_4)
# target_sources(memento_demo_4 PRIVATE memento_demo_4.cpp)
# target_compile_features(memento_demo_4 PRIVATE cxx_std_14) 

# add_executable(memento_demo_5)
# target_sources(memento_demo_5 PRIVATE memento_demo_5.cpp)
# target_compile_features(memento_demo_5 PRIVATE cxx_std_14) 
