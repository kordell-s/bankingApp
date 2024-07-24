cmake_minimum_required(VERSION 3.27)
project(bankingApp)

set(CMAKE_CXX_STANDARD 17)

add_executable(bankingApp main.cpp
        account.cpp
        account.h)
