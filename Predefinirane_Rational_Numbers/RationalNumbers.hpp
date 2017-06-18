//
//  RationalNumbers.hpp
//  Predefinirane_Rational_Numbers
//
//  Created by Pepi on 5/18/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef RationalNumbers_hpp
#define RationalNumbers_hpp
#include <stdio.h>
#include <iostream>
using namespace std;

class RationalNumbers{
    friend istream &operator >> (istream&, RationalNumbers&);
    friend ostream &operator << (ostream&, const RationalNumbers&);
 
    
public:
    RationalNumbers();
    RationalNumbers(int , int);
    ~RationalNumbers();
    
     bool operator!=(const RationalNumbers &);
     RationalNumbers& operator*(RationalNumbers&);
     RationalNumbers& operator+(RationalNumbers&);
     bool operator ==(const RationalNumbers &);
     bool operator >(const RationalNumbers &);
     
  
    
    void setChislitel(int);
    void setZnamenatel(int);
    int getChislitel();
    int getZnamenatel();
    
    
    
private:
    int m_chislitel;
    int m_znamenatel;
};

#endif /* RationalNumbers_hpp */
