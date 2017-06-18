//
//  Date.hpp
//  Date_Class
//
//  Created by Pepi on 4/5/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Date_hpp
#define Date_hpp
#include <iostream>
#include <stdio.h>
using namespace std;

#endif /* Date_hpp */

class date {
public:
    
    
    date();
    date(int , int , int );
    
    
    int month ;
    int day ;
    int year ;
    
    
    
    void setMonth(int);
    void setDay(int ) ;
    void setYear(int);
    
    
    int getMoth();
    int getDay();
    int getYear();
    
    
    
    
   void  showInfo();
    
    
    
    
};



