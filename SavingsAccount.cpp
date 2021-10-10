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
void SavingsAccount::withdraw(double money) {
    balance=balance-money;
}
double SavingsAccount::getBalance() {
    return balance;
}
void SavingsAccount::Print() {
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
