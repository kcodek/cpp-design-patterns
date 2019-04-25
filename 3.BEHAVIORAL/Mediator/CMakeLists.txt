cmake_minimum_required(VERSION 3.12)

project(Mediator
        VERSION 1.0.0
        DESCRIPTION "Mediator Design Pattern")   

# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   


add_subdirectory(mediator_vinceh)
# add_subdirectory(mediator_schmidh)
