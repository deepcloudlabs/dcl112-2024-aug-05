#ifndef ACCOUNT_H
#define ACCOUNT_H

namespace banking {
    class BasicAccount {
        double balance;

    public:
        BasicAccount(double init_balance);

        double getBalance() const;

        bool deposit(double amount);

        bool withdraw(double amount);
        BasicAccount operator+(const BasicAccount& other);
    };
}

#endif //ACCOUNT_H
