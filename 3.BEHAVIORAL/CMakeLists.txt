cmake_minimum_required(VERSION 3.12)

project(BEHAVIORAL 
            VERSION 1.0.0
            DESCRIPTION "BEHAVIORAL - Strategy, Template, Command, ChainOfResponsibility,Interpreter, Iterator, Memento, Observer, State, Visitor")

            
set(CMAKE_POSITION_INDEPENDENT_CODE ON)            

# Behavioral
add_subdirectory(Strategy)
add_subdirectory(Template)
add_subdirectory(Command)
add_subdirectory(ChainOfResponsibility)
add_subdirectory(Interpreter)
add_subdirectory(Mediator)
add_subdirectory(Iterator)
add_subdirectory(Memento)
add_subdirectory(Observer)
# add_subdirectory(State)
# add_subdirectory(Visitor)