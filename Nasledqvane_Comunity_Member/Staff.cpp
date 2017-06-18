//
//  Staff.cpp
//  Nasledqvane_Comunity_Member
//
//  Created by Pepi on 4/23/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Staff.hpp"
#include <iostream>
#include <string>
#include "Employee.hpp"
#include "ComunityMember.hpp"
using namespace std;

Staff::Staff(){}
Staff::Staff(string firstName,string lastName,int year, int id, int salary,class Adress&):Employee(){
    this -> salary = salary;
}

void Staff::setSalary(int salary){
    this -> salary = salary;
}
int Staff::getSalary(){
    return this->salary;
}


void Staff::printInfo(){
    cout << getId();
    cout << getFirsName();
    cout << getLastName();
    cout << getYear();
    cout << getSalary();
    
    
    
    
}

