//
//  SavingAccaund.cpp
//  Nasledqvane_Static_Poleta
//
//  Created by Pepi on 4/20/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "SavingAccaund.hpp"
#include <iostream>
using namespace std;

double SavingAccaund::annualInterestRate= 5 ;

SavingAccaund::SavingAccaund(){}
SavingAccaund::SavingAccaund(string client,double savingBalance){
    
    this -> client = client;
    this ->savingBalance = savingBalance;
    
    
    
}
void SavingAccaund::setClient(string){
    
}

void SavingAccaund::setSavingBalance(double){
    
}

string SavingAccaund::getClient(){
    return this -> client;
}

double SavingAccaund::getSavingBalance(){
    return this -> savingBalance;
}


void SavingAccaund::calvulate(){
    double mountlyInterest = (savingBalance * annualInterestRate ) / 12;
  //  savingBalance += getSavingBalance()*(annualInterestRate)/12;
  //  cout << getSavingBalance();
    
    cout << "mountlyInterest is " << mountlyInterest;
    cout  << endl;
    double newBalance;
    newBalance = savingBalance + mountlyInterest;
    cout << newBalance<< endl ;
    
    
    
}




