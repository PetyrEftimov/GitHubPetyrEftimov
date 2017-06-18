//
//  TaxPayer.cpp
//  Reshenie_Class_z3
//
//  Created by Pepi on 4/8/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
#include <iostream>
using namespace std;


#include "TaxPayer.hpp"


TaxPayer::TaxPayer(){}
TaxPayer::TaxPayer(string name , int tax , int sallary  , int status){
    this-> name = name;
    this->tax= tax;
    this->sallary = sallary;
    this->status = status;
    
}


void TaxPayer::setName(string name){
    this -> name = name;
    
    
}
void TaxPayer::setTax(int tax){
    this -> tax = tax;
}

void TaxPayer::setSallary(int sallary){
    this-> sallary = sallary;
}

void TaxPayer::setStaytus(int status){
    this -> status = status;
}


string TaxPayer::getName(){
    return this -> name;
}
int TaxPayer::getTax(){
    return this -> tax;
}

int TaxPayer::getSallary(){
    return this->sallary;
}
int TaxPayer::getStatus(){
    return this -> status;
}


int TaxPayer::TaxOff(){
    
    int a = sallary;
    int b = tax;
    int c = status;
    int off;
    
    if (a > 30000 &&  c == 5) {
        off = tax* 0.03;
    }
    
    cout << "razmera na otstypkata e :" << off<< endl ;
    
    if (a < 12000 && c == 3) {
        off = tax * 0.02;
        cout << " razmera e : " << off << endl ;
    }

    
    
    return off;
    
    
}
void TaxPayer::ShowInfo(){
    
    cout << " Name tax :" << name<< endl ;
    cout << " Tax is : " << tax<< endl;
    cout << " Sallary is : " << sallary;
    
    
}














