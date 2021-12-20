cmake_minimum_required(VERSION 3.21)
project(CreditCardValidator)

set(CMAKE_CXX_STANDARD 20)

add_executable(CreditCardValidator main.cpp CreditCard.cpp CreditCard.h)
