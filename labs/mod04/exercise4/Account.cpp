#include "Account.h"
#include <iostream>

using namespace std;

banking::BasicAccount::BasicAccount(double init_balance) : balance(init_balance) {
}

double banking::BasicAccount::getBalance() const {
    return this->balance;
}

bool banking::BasicAccount::deposit(double amount) {
    // validation
    if (amount <= 0.0) return false;
    this->balance += amount;
    return true;
}

bool banking::BasicAccount::withdraw(double amount) {
    // validation
    if (amount <= 0.0) return false;
    // business rule
    if (amount > this->balance)
        return false;
    this->balance -= amount;
    return true;
}

banking::BasicAccount banking::BasicAccount::operator+(const BasicAccount &other) {
    return BasicAccount{this->balance + other.balance};
}
