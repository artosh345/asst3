//
// Created by ACER on 09.10.2021.
//

#ifndef UNTITLED1_ACCOUNT_H
#define UNTITLED1_ACCOUNT_H

#include <iostream>
#include <string>


using namespace std;
class Account {
private:

protected:
    string name;
    double balance;
    int currency;
public:
    Account();
    Account(string name,double balance,int currency);
    void setName(string name);
    void setBalance(double balance);
    void setCurrency(int currency);
    int getCurrency();
    string getName();
    double getBalance();
    virtual void Deposit(double deposit)=0;
    void to_string();
    virtual void withdraw(double money)=0;
    virtual void Print()=0;
    void redistribution(double tenge);
};


#endif //UNTITLED1_ACCOUNT_H
