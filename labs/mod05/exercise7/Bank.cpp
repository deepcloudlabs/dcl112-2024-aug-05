//
// Created by dcl on 8/8/2024.
//

#include "Bank.h"

shared_ptr<banking::Customer> banking::Bank::addCustomer(string first_name, string last_name) {
    auto customer = make_shared<banking::Customer>(first_name, last_name);
    cout << customer->getLastName() << ","
         << customer->getFirstName()
         << endl;
    this->customers.push_back(customer);
    return customer;
}