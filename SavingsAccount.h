//
// Created by ACER on 09.10.2021.
//

#ifndef UNTITLED1_SAVINGSACCOUNT_H
#define UNTITLED1_SAVINGSACCOUNT_H
#include "Account.h"

using namespace std;

class SavingsAccount: public Account{
private:
    double interest=0;
    double deposit=0;
public:
    double Interest(double deposit);
    void Deposit(double deposit);
    double getBalance();
    void withdraw(double money);
    void Print();

};


#endif //UNTITLED1_SAVINGSACCOUNT_H
