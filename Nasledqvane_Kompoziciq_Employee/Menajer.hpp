//
//  Menajer.hpp
//  Nasledqvane_Kompoziciq_Employee
//
//  Created by Pepi on 4/24/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Menajer_hpp
#define Menajer_hpp
#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>
#include "Employee.hpp"
#include "Address.hpp"
using namespace std;

class Menajer:public Employee{
public:
    Menajer();
    Menajer(string , string , string , double , int , Address&, int);
    void setYearOfExpirience(int);
    int  getYearOfExpirience();
    virtual  double calcSalary();
    void menajerAddress();
    
    
    
private:
    int  yearOfExpirience ;
    
};









#endif /* Menajer_hpp */
