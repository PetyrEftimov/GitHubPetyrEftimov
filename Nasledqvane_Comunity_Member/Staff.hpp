//
//  Staff.hpp
//  Nasledqvane_Comunity_Member
//
//  Created by Pepi on 4/23/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Staff_hpp
#define Staff_hpp
#include <iostream>
#include <string>
#include "Adress.hpp"
using namespace std;
#include "Employee.hpp"
#include <stdio.h>

class Staff:public Employee{
public:
    
    Staff();
    Staff(string , string , int ,int ,int ,class Adress&);
    
    void setSalary(int);
    int  getSalary();
    
    void printInfo();
    int calculateYearSalary();
    
    
    
private:
    int salary;
    
    
};






#endif /* Staff_hpp */
