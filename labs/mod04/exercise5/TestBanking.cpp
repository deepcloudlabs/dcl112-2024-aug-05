/* 
 * File:   TestBanking.cpp
 * Author: Binnur Kurt
 *
 * Created on November 7, 2008, 3:49 PM
 */
#include "Account.h"
#include "Customer.h"
#include "CheckingAccount.h"

using namespace banking;
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    Customer *customer;
    Account account(0.0);

    // Create an account that can has a 500.00 balance.
    cout << endl << "Creating the customer Jane Smith.";
    customer = new Customer("Jane", "Smith");
    cout << endl << "Creating her account with a 500.00 balance.";
    customer->setAccount(Account(500.00));
    account = customer->getAccount();
    // account.balance -= 10'000'000;
    cout << endl << "Withdraw 150.00";
    account.withdraw(150.00);

    cout << endl << "Deposit 22.50";
    account.deposit(22.50);

    cout << endl << "Withdraw 47.62";
    account.withdraw(47.62);
    cout << account ;
    // Print out the final account balance
    cout  << endl 
          << "Customer [" 
          << customer->getLastName()
	  << ", " 
          << customer->getFirstName()
	  << "] has a balance of " 
          << account.getBalance() 
          << endl;     
    delete customer;
    CheckingAccount acc2(1'000,1'000);
    acc2.deposit(500);
    cout << acc2 ;
    acc2.withdraw(2'500);
    cout << acc2 ;
    /*
    Account acc1(100),acc2(200);
    Account sumAcc= acc1+acc2;
    cout << "Balance of sumAcc is " << sumAcc.getBalance() << endl;
    */
    return 0;
}

