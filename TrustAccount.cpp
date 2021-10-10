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
double TrustAccount::getBalance() {
    return balance;
}
void TrustAccount::Print(){
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