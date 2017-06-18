//
//  Array.hpp
//  Predefinirani_Operatori_Array
//
//  Created by Pepi on 5/7/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp
#include <stdio.h>
//
//#ifndef ARRAY_H
//#define ARRAY_H

#include <iostream>
using std::ostream;
using std::istream;
using namespace std;

class Array
{
    friend ostream &operator<<( ostream &, const Array & );
    friend istream &operator>>( istream &, Array & );
public:
    Array( int = 10 );
    Array( const Array & );
    ~Array();
    int getSize() const;
    
    const Array &operator=( const Array & );
    bool operator==( const Array & ) const;
    
    
    bool operator!=( const Array &right ) const
    {
        return ! ( *this == right );
    }
    
    
    int &operator[]( int );
    
    
    int operator[]( int ) const;
private:
    int size;
    int *ptr;
};




#endif
