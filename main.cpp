#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "TrustAccount.h"
#include "CheckingAccount.h"
using namespace std;
int main() {

    CheckingAccount acc1;
    acc1.setName("Arna");
    acc1.Deposit(1000);
    acc1.setCurrency(0);
    cout<<acc1.getName()<<"   "<<acc1.getBalance()<<endl;
    acc1.withdraw(501);
    cout<<acc1.getName()<<"   "<<acc1.getBalance()<<endl;
    acc1.Print();

    SavingsAccount acc2;
    acc2.setName("Artosh");
    acc2.setCurrency(2);
    acc2.Deposit(10000);
    cout<<acc2.getName()<<"   "<<acc2.getBalance()<<endl;
    acc2.Print();

    TrustAccount acc3;
    acc3.setName("arti");
    acc3.setCurrency(1);
    acc3.Deposit(2000);
    acc3.Deposit(1000);
    acc3.withdraw(200);
    acc3.withdraw(1300);
    cout<<acc3.getName()<<"   "<<acc3.getBalance()<<endl;
    acc3.Print();
    acc1.red
}
