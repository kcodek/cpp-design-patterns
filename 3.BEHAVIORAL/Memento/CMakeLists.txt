cmake_minimum_required(VERSION 3.12)

project(Memento
        VERSION 1.0.0
        DESCRIPTION "Memento Design Pattern")   

# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   


add_subdirectory(memento_vinceh)
# add_subdirectory(memento_schmidh)
