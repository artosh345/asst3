//
// Created by ACER on 09.10.2021.
//

#include "Account.h"
#include <iostream>
#include <string>

using namespace std;
Account::Account() {
    name="Unnamed account";
    balance=0;
}
Account::Account(string name, double balance, int currency) {
    this->name=name;
    this->balance=balance;
    this->currency=currency;
}
string Account::getName() {
    return  name;
}
double  Account::getBalance() {
    return balance;
}
void Account::setName(string name) {
    this->name=name;
}
void Account::setBalance(double balance) {
    this->balance-balance;
}
void Account::Deposit(double deposit) {
    balance=deposit;
}
void Account::withdraw(double money) {
    if(money<balance){
    balance=balance-money;}
}
void Account::setCurrency(int currency) {
    this->currency=currency;
}
int Account::getCurrency() {
    return currency;
}
void Account::redistribution(double tenge) {
    switch (currency){
        case 0:
        {
            balance=balance+tenge;
            break;
        }
        case 1:
        {

            balance=balance+tenge/520;

            break;
        }
        case 2:
        {
            balance=balance+tenge/425;
            break;
        }}
}
/*void Account::to_string() {
    cout<<"Account holder:  "<<name<<endl<<"Balance:  "<<get;
}*/