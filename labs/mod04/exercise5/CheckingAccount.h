#include "BasicAccount.h"

#ifndef LABS_CHECKINGACCOUNT_H
#define LABS_CHECKINGACCOUNT_H

namespace banking {
    // inheritance
    // BasicAccount          : base class     super-class
    // CheckingAccount  : derived class  subclass
    class CheckingAccount : public Account {
        double balance;
        double overdraft_amount;
    public:
        CheckingAccount(double to_balance, double to_overdraft_amount) {
            this->balance = balance;
            this->overdraft_amount = to_overdraft_amount;
        }

        // overriding vs overloading
        // overloading: i. within the same class
        //             ii. same method
        //            iii. different signature
        // overriding: i. inherited classes
        //            ii. same method
        //           iii. same signature
        bool withdraw(double amount) override;
        bool deposit(double amount) override;

        double getBalance() const override {
            return this->balance;
        }

        double getOverdraftAmount() const {
            return this->overdraft_amount;
        }
    };
}

// overloading
ostream &operator<<(ostream &os, banking::CheckingAccount account);


#endif //LABS_CHECKINGACCOUNT_H
