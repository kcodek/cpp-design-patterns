cmake_minimum_required(VERSION 3.12)
project(template_schmidh
        VERSION 1.0.0
        DESCRIPTION "Template Method Pattern by by Hans-J. Schmid")


add_executable(template_method_chess)
target_sources(template_method_chess PRIVATE template_method_chess.cpp)
target_compile_features(template_method_chess PRIVATE cxx_std_14) 