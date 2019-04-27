cmake_minimum_required(VERSION 3.12)

project(Command
        VERSION 1.0.0
        DESCRIPTION "Command Design Pattern")   

# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   


add_subdirectory(command_vinceh)
# add_subdirectory(command_schmidh)
