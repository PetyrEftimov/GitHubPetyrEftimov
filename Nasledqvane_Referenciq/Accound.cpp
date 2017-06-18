//
//  Accound.cpp
//  Nasledqvane_Referenciq
//
//  Created by Pepi on 5/1/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Accound.hpp"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

Accound::Accound(){}
Accound::Accound(double  accoundBalance){
    this -> accoundBalance = accoundBalance;
}

void Accound::setAccoundBalance(double  accoundBalance ){
    accoundBalance = ( accoundBalance < 0.0 ) ? 0.0 : accoundBalance;     //proverka ako e < 0
    this -> accoundBalance = accoundBalance;
}
double Accound::getAccoundBalance(){
    return this ->  accoundBalance;
}

void Accound::credit(double amount){
    accoundBalance+=amount;
}

void Accound::debit(double amount){
    accoundBalance-=amount;
    if (accoundBalance < 0 ) {
        cout << "Debit amount exceeded account balance.";
    }
}

