//
//  HugeInteger.cpp
//  HugeInteger_Domashno_18.04
//
//  Created by Pepi on 4/18/17.

//
//

#include "HugeInteger.hpp"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

hugeInteger::hugeInteger(){
    
    
}



hugeInteger::~hugeInteger(){
    
}

void  hugeInteger::inputIneger(){
    
    for (int i = 0 ; i < arrSize; i++) {
        cout << "Enter digit " << i+1 << " of " << arrSize << " : ";
        cin >> arrInteger[i];
        
    }
    
}

void hugeInteger::outputInteger()
{
    for (int i = 0 ; i < arrSize; i++) {
        cout << arrInteger[i];
    }
    cout << endl;
    
}

void hugeInteger::addInteger( int index ,int add){
    arrInteger[index] +=add;
    
}

void hugeInteger::substractInteger(int index, int substract){
    
    arrInteger[index] -= substract;
}


bool hugeInteger::isEqualTo(int index , int equal){
    
    return    arrInteger[index]==equal;
    
    
    
    
    
}


bool hugeInteger::isNotEqualTo(int index , int equal){
    
    return    arrInteger[index]!=equal;
    
    
    
    
    
}

bool hugeInteger::isGreaterThan(int index , int equal){
    
    return    arrInteger[index] > equal;
    
    
    
    
    
}
bool hugeInteger::isLessThan(int index , int equal){
    
    return    arrInteger[index]  < equal;
    
    
    
    
    
}
bool hugeInteger::isGreaterThanOrEqualTo(int index , int equal){
    
    return    arrInteger[index] >= equal;
    
    
    
    
    
}
bool hugeInteger::isLessThanOrEqualTo(int index , int equal){
    
    return    arrInteger[index]  <=  equal;
    
    
    
    
    
}
bool hugeInteger::isZero(int index){
    
    return    arrInteger[index]  == 0;
    
    
    
    
    
}
void hugeInteger::multiply(int index, int multi){
    
    arrInteger[index] *=multi;
    
   // cout << arrInteger[index];
    
    
    
}
void hugeInteger::divide(int index, int multi){
    
    arrInteger[index] /= multi;
    
  //  cout << arrInteger[index];
    
    
    
    
    
}
void hugeInteger::modul( int index, int  modul){
    
    arrInteger[index] %= modul;
    
      cout << arrInteger[index];
    
    
    
    
    
}










