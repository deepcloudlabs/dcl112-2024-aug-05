cmake_minimum_required(VERSION 3.28)
project(module08)

set(CMAKE_CXX_STANDARD 23)

add_executable(module08 main.cpp
        Animal.cpp
        Animal.h
        Pet.h
        Spider.cpp
        Spider.h
        Cat.cpp
        Cat.h
        Fish.cpp
        Fish.h)
