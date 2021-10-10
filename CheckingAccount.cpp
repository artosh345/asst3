//
// Created by ACER on 09.10.2021.
//

#include "CheckingAccount.h"
#include <iostream>
using namespace std;
void CheckingAccount::withdraw(double money) {
    balance=balance-money*1.015;
}
void CheckingAccount::Deposit(double deposit) {
    balance=balance+deposit;
}
void CheckingAccount::Print() {
    cout<<name<<" ";
    switch (currency){
        case 0:
        {
            cout<<balance<<"Tg ";
            cout<<balance*520<<"Eu ";
            cout<<balance*425<<"USD ";
            break;
        }
        case 1:
        {
            cout<<balance*520<<"Tg  ";
            cout<<balance<<"Eu ";
            cout<<balance/425*520<<"USD ";
            break;
        }
        case 2:
        {
            cout<<balance*425<<"Tg  ";
            cout<<balance*425/520<<"Eu ";
            cout<<balance<<"USD ";
            break;
        }}
}