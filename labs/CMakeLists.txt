cmake_minimum_required(VERSION 3.28)
project(labs)


set(CMAKE_CXX_STANDARD 23)

add_executable(exercise4 mod04/exercise4/TestBanking.cpp mod04/exercise4/Account.cpp mod04/exercise4/Account.h)
add_executable(exercise5 mod04/exercise5/TestBanking.cpp mod04/exercise5/BasicAccount.cpp mod04/exercise5/BasicAccount.h mod04/exercise5/Customer.cpp mod04/exercise5/Customer.h mod04/exercise5/CheckingAccount.cpp mod04/exercise5/CheckingAccount.h mod04/exercise5/Account.h)
add_executable(exercise7 mod05/exercise7/TestBanking.cpp mod05/exercise7/BasicAccount.cpp mod05/exercise7/BasicAccount.h mod05/exercise7/Customer.cpp mod05/exercise7/Customer.h mod05/exercise7/CheckingAccount.cpp mod05/exercise7/CheckingAccount.h mod05/exercise7/Account.h mod05/exercise7/Bank.h mod05/exercise7/Bank.cpp)
