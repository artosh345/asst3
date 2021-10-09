//
// Created by ACER on 09.10.2021.
//

#include "TrustAccount.h"
#include <iostream>
using namespace std;
void TrustAccount::withdraw(double money) {
    if(money<0.2*balance){
        balance=balance-money;
    }
}
void TrustAccount::Deposit(double deposit) {
    if(deposit>1000){
        balance=balance+ deposit+10;
    }
}