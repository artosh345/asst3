cmake_minimum_required(VERSION 3.20)
project(untitled1)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled1 main.cpp Account.cpp Account.h SavingsAccount.cpp SavingsAccount.h TrustAccount.cpp TrustAccount.h CheckingAccount.cpp CheckingAccount.h Redistribution.cpp Redistribution.h)
