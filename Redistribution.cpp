//
// Created by ACER on 10.10.2021.
//

#include "Redistribution.h"
#include <iostream>
#include "Account.h"
using namespace std;
void Redistribution::redistribute(double tenge) {
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
