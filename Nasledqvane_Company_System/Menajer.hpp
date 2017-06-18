//
//  Menajer.hpp
//  Nasledqvane_Company_System
//
//  Created by Pepi on 4/21/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Menajer_hpp
#define Menajer_hpp

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class Menajer{

public:
    Menajer();
    Menajer(string ,string , string , int ,int);
    
    void setFirstName(string);
    void setLastName(string);
    void setDepartment(string);
    void setSalary(int);
    void setHour(int);
    
    
    
    



    
    
    void print();
    int earnings();


private:
string firstName;
string lastName;
string department;
int salary;
int hours;
};

#endif /* Menajer_hpp */
