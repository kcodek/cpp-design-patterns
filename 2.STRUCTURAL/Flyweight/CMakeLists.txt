cmake_minimum_required(VERSION 3.12)

project(Flyweight
        VERSION 1.0.0
        DESCRIPTION "Factory Patterns")   

# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   


add_subdirectory(flyweight_vinceh)
# add_subdirectory(flyweight_schmidh)
