cmake_minimum_required(VERSION 3.12)
project(observer_schmidh
        VERSION 1.0.0
        DESCRIPTION "Boost Signal observer Pattern by Schmid H")


# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   

add_executable(boost_signal_observer)
target_sources(boost_signal_observer PRIVATE observer.cpp)
target_compile_features(boost_signal_observer PRIVATE cxx_std_14) 
