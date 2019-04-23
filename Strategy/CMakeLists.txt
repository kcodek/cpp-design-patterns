cmake_minimum_required(VERSION 3.12)

project(Strategy
        VERSION 1.0.0
        DESCRIPTION "Strategy Pattern")   

# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   

add_subdirectory(strategy_01)
