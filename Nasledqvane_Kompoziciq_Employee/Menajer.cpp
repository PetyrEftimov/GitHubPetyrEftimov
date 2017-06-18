//
//  Menajer.cpp
//  Nasledqvane_Kompoziciq_Employee
//
//  Created by Pepi on 4/24/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Menajer.hpp"
#include <vector>
#include <iostream>
#include <string>
#include "Employee.hpp"

using namespace std;

Menajer::Menajer(){}
Menajer::Menajer(string firstName, string lastName , string department , double salaryPerHour, int hours, class Address& addr, int yearOfExpirience):Employee(firstName ,lastName,department,salaryPerHour,hours,addr){
    
    this -> yearOfExpirience = yearOfExpirience;
}

void Menajer::setYearOfExpirience(int yearOfExpirience ){
    this -> yearOfExpirience = yearOfExpirience;
}

int Menajer::getYearOfExpirience(){
    return this -> yearOfExpirience;
}

double Menajer::calcSalary(){
  int   montSal = 0 ;
    montSal = Employee::calcSalary();
    
    
    return montSal;
    
}

void Menajer::menajerAddress(){
   // cout <<
}
