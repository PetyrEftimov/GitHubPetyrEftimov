//
//  Expert.cpp
//  Nasledqvane_Company_System
//
//  Created by Pepi on 4/21/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Expert.hpp"
#include <stdio.h>
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

Expert::Expert(){}
Expert::Expert(string firstName, string lastName,string department,int salary ,int hours , int bonus ){
    
    setFirstName( firstName);
    setLastName(lastName);
    setDepartment(department);
    setSalary(salary);
    
    
    
    
}
