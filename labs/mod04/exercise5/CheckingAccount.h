#include "Account.h"

#ifndef LABS_CHECKINGACCOUNT_H
#define LABS_CHECKINGACCOUNT_H

namespace banking {
    // inheritance
    // Account          : base class     super-class
    // CheckingAccount  : derived class  subclass
    class CheckingAccount : public Account {
       double overdraft_amount;
    public:
        CheckingAccount(double to_balance, double to_overdraft_amount)
          : Account(to_balance){
            this->overdraft_amount = to_overdraft_amount;
        }
        // overriding vs overloading
    };
}


#endif //LABS_CHECKINGACCOUNT_H
