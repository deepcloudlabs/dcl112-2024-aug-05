#ifndef ACCOUNT_H
#define ACCOUNT_H

namespace banking {
    class Account {
        double balance;

    public:
        Account(double init_balance);

        double getBalance() const;

        bool deposit(double amount);

        bool withdraw(double amount);
        Account operator+(const Account& other);
    };
}

#endif //ACCOUNT_H
