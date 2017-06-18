//
//  Drob.cpp
//  Overlodet_Operator
//
//  Created by Pepi on 5/3/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Drob.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <istream>
#include <ostream>

Drob::Drob(int chislitel  , int znamenatel ){
    m_chislitel = chislitel;
    m_znamenatel = znamenatel;

}

Drob::~Drob(){}
void Drob::setChislitel(int chislitel){
    m_chislitel = chislitel;
}
void Drob::setZnamenate(int znamenatel){
    m_znamenatel = znamenatel;
}
int Drob::getChislitel(){
    return m_chislitel;
}
int Drob::getZnamenatel(){
    return m_znamenatel;
}

double Drob::deleteDrob(){
    
    return m_chislitel/m_znamenatel;
}


 istream &operator >> (istream& input , Drob& drobno){
    
     input >>setw(2)>>drobno.m_chislitel;
     input.ignore(1);
     input>>setw(3)>>drobno.m_znamenatel;
     
    
     return input;
}


ostream &operator << (ostream& output ,const Drob& drobno){
    output << drobno.m_chislitel <<"/"<<drobno.m_znamenatel<<endl;
    return output;
}

Drob& Drob::operator- (Drob&  right){
    int newNom = this -> m_chislitel - right.m_chislitel;
    int newDenom = this -> m_znamenatel - right.m_znamenatel;
    Drob *result = new Drob(newNom , newDenom);
    
    return *result;
    
}

Drob& Drob::operator+(Drob& right){
    int newNom = this -> m_chislitel + right.m_chislitel;
    int newDenom = this -> m_znamenatel + right.m_znamenatel;
    Drob *result = new Drob(newNom , newDenom);
    return *result;
}






