//
//  Expert.cpp
//  Nasledqvane_Kompoziciq_Employee
//
//  Created by Pepi on 4/24/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Expert.hpp"
#include <vector>
#include <iostream>
#include <string>
#include "Employee.hpp"
#include "Address.hpp"

Expert::Expert(){}
Expert::Expert(string firstName , string lastName , string department , double salaryPerHour , int hours , class Address& addr, int bonus):Employee(firstName,lastName,department,salaryPerHour,hours,addr){
    this -> bonus = bonus;
}

void Expert::setBonus(int bonus){
    this -> bonus = bonus;
}
int Expert::getBonus(){
    return this -> bonus;
}

double Expert::EexpertCalculateSalary(){
    double salary = 0 ;
    
    salary = Employee::calcSalary()+ bonus;
    
    return salary;
}

