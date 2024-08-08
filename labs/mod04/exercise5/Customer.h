//
// Created by binku on 8/6/2024.
//

#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "BasicAccount.h"
#include <string>


namespace banking {
    class Customer {
        const std::string firstName;
        const std::string lastName;
        BasicAccount account;

    public:
        Customer(const std::string &firstName, const std::string &lastName);

        std::string getFirstName() const {
            return this->firstName;
        }

        std::string getLastName() const {
            return this->lastName;
        }

        BasicAccount& getAccount();

        void setAccount(BasicAccount account);
    };
}


#endif //CUSTOMER_H
