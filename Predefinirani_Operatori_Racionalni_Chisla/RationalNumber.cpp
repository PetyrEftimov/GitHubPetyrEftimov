//
//  RationalNumber.cpp
//  Predefinirani_Operatori_Racionalni_Chisla
//
//  Created by Pepi on 5/7/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "RationalNumber.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <istream>
#include <ostream>
using namespace std;

RationalNumber::RationalNumber(){}
RationalNumber::RationalNumber(int chislitel  , int znamenatel ){
 
   
    
        if (chislitel < 0) {
            cout << "Please enter positive number for chislitel " << endl;
            
        }
        else{
            m_chislitel = chislitel;
        }

        if (znamenatel == 0) {
            cout << "enter pozitive number for znamenatel" << endl ;
            
        }
        else{
            m_znamenatel = znamenatel;
        }
        
}


        RationalNumber::~RationalNumber(){}
        void RationalNumber::setChislitel(int chislitel){
            m_chislitel = chislitel;
            if (chislitel == 0) {
                cout << "Please enter positive number " << endl;
            }
            
            
        }
        void RationalNumber::setZnamenatel(int znamenatel){
            m_znamenatel = znamenatel;
            if (znamenatel < 0) {
                cout << "Please enter positive number " << endl;
            }
            
        }
        int RationalNumber::getChislitel(){
            return m_chislitel;
        }
        int RationalNumber::getZnamenatel(){
            return m_znamenatel;
        }
        
        
        
        
        istream &operator >> (istream& input , RationalNumber& drobno){
            
            input >>setw(2)>>drobno.m_chislitel;
            input.ignore(1);
            input>>setw(3)>>drobno.m_znamenatel;
            
            
            return input;
        }
        
        
        ostream &operator << (ostream& output ,const RationalNumber& drobno){
         return    output << drobno.m_chislitel <<"/"<<drobno.m_znamenatel<<endl;
            //return output;
        }
        
        
        
        RationalNumber& RationalNumber::operator+(RationalNumber& right){
            int newChislitel = this -> m_chislitel * right.m_znamenatel + right.m_chislitel* this-> m_znamenatel;
            
            
            
            int newZnamenatel = this -> m_znamenatel * right.m_znamenatel;
            RationalNumber *result = new RationalNumber(newChislitel, newZnamenatel);
            return *result;
        }
        
        bool RationalNumber::operator==( const RationalNumber & right ) const {
            
            return this -> m_chislitel == right.m_chislitel && this -> m_znamenatel == right.m_znamenatel;
        }
        
        bool RationalNumber::operator!=( const RationalNumber & right ) const{
            
            return !(this -> m_chislitel == right.m_chislitel && this -> m_znamenatel == right.m_znamenatel);
        }


RationalNumber& RationalNumber::operator*(RationalNumber &  right){
    
    int newChislitel = this-> m_chislitel * right.m_chislitel;
    int newZnamenatel = this-> m_znamenatel * right.m_znamenatel;
    RationalNumber *result = new RationalNumber(newChislitel , newZnamenatel);
    return *result;
}

RationalNumber& RationalNumber::operator/(RationalNumber& right){
    int newChislitel = this -> m_chislitel * right.m_znamenatel;
    int newZnamenatel = this -> m_znamenatel * right.m_chislitel;
    
    RationalNumber *result = new RationalNumber(newChislitel , newZnamenatel);
    return *result;
}

RationalNumber& RationalNumber::operator-(RationalNumber& right){
    int newCislitel = this -> m_chislitel *  right.m_znamenatel - right.m_chislitel * this-> m_znamenatel;
    int newZnamenatel = m_znamenatel * right.m_znamenatel;
    RationalNumber *result = new RationalNumber(newCislitel , newZnamenatel);
    return *result;
}

        
        
        
        
        
