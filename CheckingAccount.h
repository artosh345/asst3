//
// Created by ACER on 09.10.2021.
//

#ifndef UNTITLED1_CHECKINGACCOUNT_H
#define UNTITLED1_CHECKINGACCOUNT_H
#include "Account.h"


class CheckingAccount: public Account{
public:
    void withdraw(double money);
    void Deposit(double deposit);
    void Print();
};


#endif //UNTITLED1_CHECKINGACCOUNT_H
