cmake_minimum_required(VERSION 3.28)
project(labs)

set(CMAKE_CXX_STANDARD 23)

add_executable(exercise4 mod04/exercise4/TestBanking.cpp mod04/exercise4/Account.cpp mod04/exercise4/Account.h)
add_executable(exercise5 mod04/exercise5/TestBanking.cpp mod04/exercise5/BasicAccount.cpp mod04/exercise5/BasicAccount.h mod04/exercise5/Customer.cpp mod04/exercise5/Customer.h mod04/exercise5/CheckingAccount.cpp mod04/exercise5/CheckingAccount.h mod04/exercise5/Account.h)
