cmake_minimum_required(VERSION 3.12)
project(visitor_schmidh
        VERSION 1.0.0
        DESCRIPTION "Observer Pattern by Hans-J. Schmid")


# Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )   

# add_subdirectory(template_schmidh)
add_subdirectory(1-BoostSignal2Observer)
add_subdirectory(2-ThreadSafetyObserver)

