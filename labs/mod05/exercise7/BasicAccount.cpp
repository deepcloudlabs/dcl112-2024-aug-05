#include "BasicAccount.h"

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

ostream& operator<<(ostream& os,banking::BasicAccount account){
    os << "\nAccount[ balance: " << account.getBalance() << "]";
    return os;
}