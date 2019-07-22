cmake_minimum_required(VERSION 3.12)
project(builder_schmidh
        VERSION 1.0.0
        DESCRIPTION "Builder Pattern by Schimd")


add_executable(GroovyStyle)
target_sources(GroovyStyle PRIVATE GroovyStyle.cpp)
target_compile_features(GroovyStyle PRIVATE cxx_std_14) 


add_executable(FluentBuilder)
target_sources(FluentBuilder PRIVATE FluentBuilder.cpp)
target_compile_features(FluentBuilder PRIVATE cxx_std_14) 

add_executable(LifeWithoutBuilder)
target_sources(LifeWithoutBuilder PRIVATE LifeWithoutBuilder.cpp)
target_compile_features(LifeWithoutBuilder PRIVATE cxx_std_14) 

add_executable(Builder)
target_sources(Builder PRIVATE Builder.cpp)
target_compile_features(Builder PRIVATE cxx_std_14) 


add_subdirectory(BuilderFacets)