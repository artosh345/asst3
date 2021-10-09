//
// Created by ACER on 09.10.2021.
//

#include "SavingsAccount.h"
#include <iostream>
using namespace std;

double SavingsAccount::Interest(double deposit) {

    if(currency==0){ //tenge
        interest=1.15;
    }
    else if (currency==1){ //euros
        interest=1.03;
    }
    else if (currency==2){interest=1.05; //dollars
    }
    return interest;
}
void SavingsAccount::Deposit(double deposit) {
    this->deposit=deposit;
    balance=balance+deposit* Interest(deposit);
}
/*double SavingsAccount::getBalance() {
    return balance;
}
*/