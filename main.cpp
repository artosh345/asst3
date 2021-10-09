#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "TrustAccount.h"
using namespace std;
int main() {
    Account acc;
    acc.setName("Arna");
    acc.Deposit(1000);
    acc.setCurrency(0);
    cout<<acc.getName()<<"   "<<acc.getBalance()<<endl;
    acc.withdraw(501);
    cout<<acc.getName()<<"   "<<acc.getBalance()<<endl;
    SavingsAccount acc2;
    acc2.setName("Artosh");
    acc2.setCurrency(2);
    acc2.Deposit(10000);

    cout<<acc2.getName()<<"   "<<acc2.getBalance()<<endl;
    TrustAccount acc3;
    acc3.setName("arti");
    acc3.setCurrency(1);
    acc3.Deposit(2000);
    acc3.Deposit(1000);
    acc3.withdraw(200);
    acc3.withdraw(1300);
    cout<<acc3.getName()<<"   "<<acc3.getBalance()<<endl;
}
