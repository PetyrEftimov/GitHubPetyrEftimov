//
//  SavingsAccount.cpp
//  Nasledqvane_Referenciq
//
//  Created by Pepi on 5/1/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "SavingsAccount.hpp"
#include <vector>
#include <string>
#include <iostream>
#include "Accound.hpp"
using namespace std;

SavingsAccount::SavingsAccount(){}
SavingsAccount::SavingsAccount(double  accoundBalance  , double  interestRate  ): Accound(accoundBalance){
    this -> interestRate = interestRate;
}

void SavingsAccount::setInterestRate(double  interestRate ){
    this -> interestRate = interestRate;
}
double SavingsAccount::getInterestRate(){
    return this -> interestRate;
}

double SavingsAccount::calculateInterest(){
    
    
    return interestRate*Accound::getAccoundBalance();
}

