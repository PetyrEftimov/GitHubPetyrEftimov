//
//  Drob.hpp
//  Overlodet_Operator
//
//  Created by Pepi on 5/3/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Drob_hpp
#define Drob_hpp
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <istream>
#include <ostream>
using namespace std;
class Drob{
    friend istream &operator >> (istream&  , Drob&);
    friend ostream &operator << (ostream& ,const Drob&);
public:
   
    
    Drob(int chislitel = 0 , int znamenatel = 0);
    virtual~Drob();
    void setChislitel(int chislitel);
    void setZnamenate(int znamenatel);
    int getChislitel();
    int getZnamenatel();
    
    
    double deleteDrob();
    
    Drob& operator-(Drob&);
    Drob& operator+(Drob&);
    
    
    
    
    
    
    
private:
    
    int m_chislitel;
    int m_znamenatel;
    
    
};

#endif /* Drob_hpp */
