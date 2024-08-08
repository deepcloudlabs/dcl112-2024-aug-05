//
// Created by dcl on 8/8/2024.
//

#ifndef LABS_BANK_H
#define LABS_BANK_H
#include <vector>
#include <memory>
#include "Customer.h"

namespace banking {

class Bank {
    vector<shared_ptr<banking::Customer>> customers;
public:
    Bank (){}
    shared_ptr<Customer> addCustomer(string first_name,string last_name);

    int getNumberOfCustomers() const {
        return customers.size();
    }

    shared_ptr<Customer> getCustomer(const int index) const {
        return customers[index];
    }

    double get_total_balance() const {
        auto total_balance = 0.0;
        for (auto customer : customers){
            auto account = customer->getAccount();
            cout << typeid(*account).name() << endl;
            if (account != nullptr){
                total_balance += account->getBalance();
            }
        }
        return total_balance;
    }

};

}

#endif //LABS_BANK_H
