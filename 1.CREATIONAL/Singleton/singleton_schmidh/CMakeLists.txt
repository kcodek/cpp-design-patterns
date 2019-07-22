cmake_minimum_required(VERSION 3.12)
project(singleton_schmidh
        VERSION 1.0.0
        DESCRIPTION "Singleton Pattern by by Hans-J. Schmid")


add_executable(SingletonDatabase.cpp)
target_sources(SingletonDatabase.cpp PRIVATE SingletonDatabase.cpp)
target_compile_features(SingletonDatabase.cpp PRIVATE cxx_std_14) 