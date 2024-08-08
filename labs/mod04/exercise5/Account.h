//
// Created by dcl on 8/8/2024.
//

#ifndef LABS_ACCOUNT_H
#define LABS_ACCOUNT_H


class Account { // abstract class
public:
    virtual double getBalance() const =0;

    virtual bool deposit(double amount)=0;

    virtual bool withdraw(double amount)=0;
};


#endif //LABS_ACCOUNT_H
