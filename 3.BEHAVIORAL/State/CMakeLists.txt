cmake_minimum_required(VERSION 3.12)

project(state
        VERSION 1.0.0
        DESCRIPTION "State Design Pattern")   

# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   


add_subdirectory(state_vinceh)
# add_subdirectory(state_schmidh)
