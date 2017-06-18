//
//  Employee.hpp
//  Nasledqvane_Comunity_Member
//
//  Created by Pepi on 4/22/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp
#include "ComunityMember.hpp"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Employee: public ComunityMember{
public:
    Employee();
    Employee(string,string,int,int,int,class Adress& );
    
    
    void setId(int);
    int  getId();
    
     void employeePrintInfo();
    
    
    
private:
    int id ;
    
    
    
};
























#endif /* Employee_hpp */
