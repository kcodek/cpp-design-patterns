cmake_minimum_required(VERSION 3.12)

project(singleton
        VERSION 1.0.0
        DESCRIPTION "Singleton Pattern by Vince Houston")   

# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   

# add_subdirectory(singleton_schmidh)
add_subdirectory(singleton_vinceh)
add_subdirectory(singleton_schmidh)
