//
//  Drobi.cpp
//  Predefinirani_Operatori_Drobi
//
//  Created by Pepi on 5/8/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Drobi.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <istream>
#include <ostream>
using namespace std;

Drobi::Drobi(){}
Drobi::Drobi(int chislitel , int znamenatel){
    if (chislitel < 0 ) {
        cout << "Enter positive umber for chislitel : " << endl ;
    }
    else{
        
        m_chislitel  = chislitel;
    }
    if (znamenatel <= 0 ) {
        cout << "enter positive number for znamenatel : " << endl;
    }
    else{
        
        m_znamenatel = znamenatel;
    }
}

Drobi::~Drobi(){}

void Drobi::setChislitel(int chislitel){
    
    if (chislitel < 0 ) {
        cout << "Enter positive umber for chislitel : " << endl ;
    }
    else{
        
        m_chislitel  = chislitel;
    }
}
void Drobi::setZnamenatel(int znamenatel){
    if (znamenatel <= 0 ) {
        cout << "enter positive number for znamenatel : " << endl;
    }
    else{
        
        m_znamenatel = znamenatel;
    }
}

int Drobi::getChislitel(){
    return this -> m_chislitel;
}
int Drobi::getZnamenatel(){
    return this -> m_znamenatel;
}



istream &operator >> (istream& input , Drobi& drobno){
    
    input >>setw(2)>>drobno.m_chislitel;  
    input.ignore(1);
    input>>setw(3)>>drobno.m_znamenatel;
    
    
    return input;
}


ostream &operator << (ostream& output ,const Drobi& drobno){
    return    output << drobno.m_chislitel <<"/"<<drobno.m_znamenatel<<endl;
    //return output;
}


Drobi& Drobi::operator*(Drobi &  right){
    
    int newChislitel = this-> m_chislitel * right.m_chislitel;
    int newZnamenatel = this-> m_znamenatel * right.m_znamenatel;
    Drobi *result = new Drobi(newChislitel , newZnamenatel);
    return *result;
}

bool Drobi::operator!=( const Drobi & right ) const{
    
    return !(this -> m_chislitel == right.m_chislitel && this -> m_znamenatel == right.m_znamenatel);
}






