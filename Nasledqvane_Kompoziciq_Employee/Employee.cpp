//
//  Employee.cpp
//  Nasledqvane_Kompoziciq_Employee
//
//  Created by Pepi on 4/24/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Employee.hpp"
#include <string>
#include <vector>
#include <iostream>
#include "Address.hpp"
using namespace std;

Employee::Employee(){}

Employee::Employee(string firstName, string lastName , string department , double salaryPerHour, int hours, class Address& addr):addr(addr){
    this -> firstName = firstName;
    this -> lastName = lastName;
    this -> department = department;
    this -> salaryPerHour = salaryPerHour;
    this -> hours = hours;
    
}
 

void Employee::setFirstName(string firstName){
    this -> firstName = firstName;
}
void Employee::setLastName(string lastName){
    this -> lastName = lastName;
}
void Employee::setDepartment(string department){
    this -> department = department;
}

void Employee::setSalaryPerHour(double salaryPerHour){
    this -> salaryPerHour = salaryPerHour;
}

void Employee:: setHours(int hours){
    this -> hours = hours;
}

string Employee::getFirstName(){
    return  this -> firstName;
}

string Employee::getLastName(){
    return  this -> lastName;
}

string Employee::getDepartment(){
    return  this -> department;
}
double Employee::getSalaryPerHour(){
    return this -> salaryPerHour;
}

int Employee::getHours(){
    return this-> hours;
}


void Employee::printEmployees(){
    cout << getFirstName()<<endl;
    cout << getLastName()<<endl;
    cout << getDepartment()<<endl;
    cout << getSalaryPerHour()<<endl;
    cout << getHours()<<endl;
    cout << addr.getTown()<<endl;
    cout << addr.getStreet()<<endl;
    cout << addr.getNumber()<<endl;
    
}

double Employee::calcSalary(){
    double montSalary = 0 ;
    montSalary = hours * salaryPerHour;
    
    return montSalary;
}






