//
//  RationalNumbers.cpp
//  Predefinirane_Rational_Numbers
//
//  Created by Pepi on 5/18/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "RationalNumbers.hpp"
#include<iostream>
#include <iomanip>

using namespace std;

RationalNumbers::RationalNumbers(){}
RationalNumbers::RationalNumbers(int chislitel , int znamenatel){
    m_chislitel = chislitel;
    m_znamenatel = znamenatel;
}
RationalNumbers::~RationalNumbers(){}


void RationalNumbers:: setChislitel(int chislitel){
    m_chislitel = chislitel;
}
void RationalNumbers:: setZnamenatel(int znamenatel){
    m_znamenatel = znamenatel;
}
int RationalNumbers:: getChislitel(){
    return m_chislitel;
}
int RationalNumbers:: getZnamenatel(){
    return m_znamenatel;
}


istream &operator >> (istream& input, RationalNumbers& drobi){
    
    
    input >> setw(2) >> drobi.m_chislitel;
    input.ignore(1);
    input >> setw(2) >> drobi.m_znamenatel;
   
    
    
    return input;
}

ostream &operator << (ostream& output, const RationalNumbers& drobi){
    
    output << "=>" << drobi.m_chislitel << "/" << drobi.m_znamenatel;
    
    return output;
}

bool RationalNumbers::operator!=(const RationalNumbers &right) {
    return this->m_chislitel != right.m_chislitel || this-> m_znamenatel!= right.m_znamenatel;
}



RationalNumbers&  RationalNumbers::operator*(RationalNumbers& right){
    int newNom = this -> m_chislitel * right.m_chislitel;
    int newDenom = this -> m_znamenatel * right.m_znamenatel;
    RationalNumbers *result = new RationalNumbers(newNom , newDenom);
    return *result;
}

RationalNumbers& RationalNumbers::operator+(RationalNumbers& right){
    int newNom = this-> m_chislitel + right.m_chislitel;
    int newDenom = this -> m_znamenatel + right.m_znamenatel;
    RationalNumbers *result = new RationalNumbers(newNom , newDenom);
    
    return *result;
}

bool RationalNumbers::operator==(const RationalNumbers &right) {
    return this->m_chislitel == right.m_chislitel && this-> m_znamenatel== right.m_znamenatel;
}


bool RationalNumbers::operator>(const RationalNumbers &right){
    
    return this -> m_znamenatel > right.m_chislitel && this -> m_znamenatel > right.m_znamenatel;
}




