#include <iostream>
#include "Account.h"

using namespace std;

#ifndef ACCOUNT_H
#define ACCOUNT_H

namespace banking {
    class BasicAccount : public Account {
    private:
    protected:
        double balance;
    public:
        BasicAccount(double init_balance);

        double getBalance() const override;

        bool deposit(double amount)  override;

        bool withdraw(double amount)  override;
    };
}
ostream& operator<<(ostream& os,banking::BasicAccount account);
#endif //ACCOUNT_H
