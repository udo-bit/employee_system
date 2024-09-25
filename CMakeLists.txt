cmake_minimum_required(VERSION 3.29)
project(employer_system)

set(CMAKE_CXX_STANDARD 17)

add_executable(employer_system main.cpp
        WorkerManager.cpp
        WorkerManager.h
        Worker.cpp
        Worker.h
        Employee.cpp
        Employee.h
        Manager.cpp
        Manager.h
        Boss.cpp
        Boss.h)
