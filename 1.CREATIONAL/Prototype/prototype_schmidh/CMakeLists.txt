cmake_minimum_required(VERSION 3.12)
project(prototype_schmidh
        VERSION 1.0.0
        DESCRIPTION "Prototype Pattern by Schmid")


add_executable(Prototype)
target_sources(Prototype PRIVATE Prototype.cpp)
target_compile_features(Prototype PRIVATE cxx_std_14) 


# add_executable(Serialization)
# target_sources(Serialization PRIVATE Serialization.cpp)
# target_compile_features(Serialization PRIVATE cxx_std_14) 
