//
//  RationalNumber.hpp
//  Predefinirani_Operatori_Racionalni_Chisla
//
//  Created by Pepi on 5/7/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef RationalNumber_hpp
#define RationalNumber_hpp
#include <stdio.h>
#include <iostream>
#include <ostream>
#include <istream>
using namespace std;

class RationalNumber{
    
    friend istream &operator >> (istream&  , RationalNumber&);
    friend ostream &operator << (ostream& ,const RationalNumber&);
    
public:
    RationalNumber();
    RationalNumber(int chislitel , int znamenatel );
    virtual~RationalNumber();
    void setChislitel(int chislitel);
    void setZnamenatel(int Znamenatel);
    int getChislitel();
    int getZnamenatel();
    
    
    
    RationalNumber& operator+(RationalNumber&);
    bool operator==( const RationalNumber & ) const;
    bool operator!=( const RationalNumber & ) const;
    RationalNumber& operator*(RationalNumber&);
    RationalNumber& operator/(RationalNumber&);
    RationalNumber& operator-(RationalNumber&);
    
    
private:
    
    int m_chislitel;
    int m_znamenatel;
    
};



#endif /* RationalNumber_hpp */
