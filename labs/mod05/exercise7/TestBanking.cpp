/* 
 * File:   TestBanking.cpp
 * Author: binnur.kurt
 *
 * Created on November 9, 2008, 7:39 PM
 */

#include <iostream>

using namespace std;

#include "Bank.h"
#include "Customer.h"
#include "CheckingAccount.h"

using namespace banking;

/*
 * 
 */
int main(int argc, char **argv) {
    Bank *bank = new Bank();

    auto jane = bank->addCustomer("Jane", "Simms");
    jane->setAccount(new BasicAccount(2'000'000));
    auto owen = bank->addCustomer("Owen", "Bryant");
    owen->setAccount(new CheckingAccount(2'000'000,10'000));
    auto tim = bank->addCustomer("Tim", "Soley");
    tim->setAccount(new CheckingAccount(5'000'000,50'000));
    auto maria = bank->addCustomer("Maria", "Soley");
    maria->setAccount(new BasicAccount(8'000'000));

    for (int i = 0; i < bank->getNumberOfCustomers(); i++) {
        auto customer = bank->getCustomer(i);

        cout << "Customer ["
             << (i + 1) << "] is "
             << customer->getLastName()
             << ", "
             << customer->getFirstName()
             << endl;
    }
    cout << "total balance of all customers is "
         << bank->get_total_balance()
         << endl;
    return 0;
}

