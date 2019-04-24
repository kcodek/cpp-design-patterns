cmake_minimum_required(VERSION 3.12)

project(Bridge
        VERSION 1.0.0
        DESCRIPTION "Bridge Design Pattern")   

# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   


add_subdirectory(bridge_vinceh)
# add_subdirectory(bridge_schmidh)
