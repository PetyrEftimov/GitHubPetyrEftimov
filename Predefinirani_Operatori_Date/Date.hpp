//
//  Date.hpp
//  Predefinirani_Operatori_Date
//
//  Created by Pepi on 5/7/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Date_hpp
#define Date_hpp
#include <stdio.h>
#include <iostream>
using std::ostream;
using namespace std;

class Date
{
    friend ostream &operator<<( ostream &, const Date & );
public:
    Date( int m = 1, int d = 1, int y = 1900 );
    void setDate( int, int, int );
    Date &operator++();
    Date operator++( int );
    const Date &operator+=( int );
    bool leapYear( int ) const;
    bool endOfMonth( int ) const;
private:
    int month;
    int day;
    int year;
    
    static const int days[];
    void helpIncrement();
};





#endif /* Date_hpp */
