//
//  Employee.hpp
//  Nasledqvane_Kompoziciq_Employee
//
//  Created by Pepi on 4/24/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "Address.hpp"
using namespace std;

class Employee{
public:
    
    Employee();
    Employee(string , string , string , double , int , Address&);
    
    void setFirstName(string);
    void setLastName(string);
    void setDepartment(string);
    void setSalaryPerHour(double);
    void setHours(int);
    string getFirstName();
    string getLastName();
    string getDepartment();
    double getSalaryPerHour();
    int    getHours();
    
    
     double calcSalary();
     void printEmployees();
    
    
private:
    string firstName;
    string lastName;
    string department;
    double salaryPerHour;
    int hours;
    Address  addr;
    
};


#endif /* Employee_hpp */
