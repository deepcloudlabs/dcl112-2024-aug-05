//
// Created by binku on 8/6/2024.
//

#include "Customer.h"

using namespace banking;

Customer::Customer(const std::string &firstName, const std::string &lastName)
    : firstName(firstName),
      lastName(lastName),
      account(1'000) {
}


BasicAccount& Customer::getAccount() {
    return this->account;
}

void Customer::setAccount(BasicAccount account) {
    this->account = account;
}
