//
// Created by ACER on 09.10.2021.
//

#ifndef UNTITLED1_TRUSTACCOUNT_H
#define UNTITLED1_TRUSTACCOUNT_H
#include "Account.h"

class TrustAccount: public Account{
public:
    void withdraw(double money);
    void Deposit(double deposit);
};


#endif //UNTITLED1_TRUSTACCOUNT_H
