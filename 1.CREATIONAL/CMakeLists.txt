cmake_minimum_required(VERSION 3.12)

project(CREATIONAL 
            VERSION 1.0.0
            DESCRIPTION "CREATIONAL - Builder, Factories, Prototype, Singleton ")

            
set(CMAKE_POSITION_INDEPENDENT_CODE ON)            

# Creational
add_subdirectory(Builder)
add_subdirectory(Factories)
add_subdirectory(Prototype)
add_subdirectory(Singleton)