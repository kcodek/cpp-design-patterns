cmake_minimum_required(VERSION 3.12)
project(builder_schmidh
        VERSION 1.0.0
        DESCRIPTION "Builder Facets by Schimd")


add_executable(Facets)
target_sources(Facets PRIVATE Facets.cpp Person.cpp PersonBuilder.cpp)
target_compile_features(Facets PRIVATE cxx_std_14) 
