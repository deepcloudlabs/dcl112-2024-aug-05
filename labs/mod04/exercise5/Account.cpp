#include "Account.h"

banking::Account::Account(double init_balance) : balance(init_balance) {
}

double banking::Account::getBalance() const {
    return this->balance;
}



bool banking::Account::deposit(double amount) {
    // validation
    if (amount <= 0.0) return false;
    this->balance += amount;
    return true;
}

bool banking::Account::withdraw(double amount) {
    // validation
    if (amount <= 0.0) return false;
    // business rule
    if (amount > this->balance)
        return false;
    this->balance -= amount;
    return true;
}

ostream& operator<<(ostream& os,banking::Account account){
    os << "\nAccount[ balance: " << account.getBalance() << "]";
    return os;
}