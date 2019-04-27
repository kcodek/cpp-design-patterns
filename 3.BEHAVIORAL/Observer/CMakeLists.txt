cmake_minimum_required(VERSION 3.12)

project(Observer
        VERSION 1.0.0
        DESCRIPTION "Observer Design Pattern")   

# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   


add_subdirectory(observer_vinceh)
# add_subdirectory(0bserver_schmidh)
