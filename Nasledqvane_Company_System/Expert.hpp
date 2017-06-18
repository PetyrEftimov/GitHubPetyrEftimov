//
//  Expert.hpp
//  Nasledqvane_Company_System
//
//  Created by Pepi on 4/21/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Expert_hpp
#define Expert_hpp

#include <stdio.h>
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;


class Expert{
public:
    Expert();
    Expert(string,string,string,strng,int,int,int);
    
    void setFirstName(string);
    void setLastName(string);
    void setDepartment(string);
    void setSalary(int);
    void setHour(int);
    void setBonus(int;)
    
    
    
    
    
    
    
    
    void print();
    int earnings();
    
    
private:
    string firstName;
    string lastName;
    string department;
    int salary;
    int hours;
    int bonus;
};



#endif /* Expert_hpp */






