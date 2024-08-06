/* 
 * File:   TestBanking.cpp
 * Author: binnur.kurt
 *
 * Created on November 7, 2008, 3:16 PM
 */
#include "Account.h"
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Account  *account;

    // Create an account that can has a 500.00 balance.
    cout << endl << "Creating an account with a 500.00 balance.";
    account = new Account(500.00);

    cout << endl << "Withdraw 150.00";
    account->withdraw(150.00);

    cout << endl << "Deposit 22.50";
    account->deposit(22.50);

    cout << endl << "Withdraw 47.62";
    account->withdraw(47.62);

    // Print out the final account balance
    cout << endl << "The account has a balance of " << account->getBalance(); 
    cout << endl ;    
    delete account;
    return (EXIT_SUCCESS);
}
