//
// Created by dcl on 8/7/2024.
//

#include "CheckingAccount.h"

bool banking::CheckingAccount::withdraw(double amount) {
    // validation
    if (amount <= 0.0) return false;
    // business rule
    if (amount > (this->balance + this->overdraft_amount))
        return false;
    this->balance -= amount;
    return true;
}

bool banking::CheckingAccount::deposit(double amount) {
    // validation
    if (amount <= 0.0) return false;
    this->balance += amount;
    return true;
}

ostream &operator<<(ostream &os, banking::CheckingAccount account) {
    os << "\nCheckingAccount[ balance: "
       << account.getBalance()
       << ", overdraft amount: "
       << account.getOverdraftAmount()
       << " ]";
    return os;
}