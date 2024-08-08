#include <iostream>
using namespace std;

#ifndef ACCOUNT_H
#define ACCOUNT_H

namespace banking {
    class Account {
    private:
    protected:
        double balance;
    public:
        Account(double init_balance);

        double getBalance() const;

        virtual bool deposit(double amount);

        virtual bool withdraw(double amount);
    };
}
ostream& operator<<(ostream& os,banking::Account account);
#endif //ACCOUNT_H
