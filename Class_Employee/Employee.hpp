//
//  Employee.hpp
//  Class_Employee
//
//  Created by Pepi on 4/6/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <stdio.h>
#include <iostream>
using namespace std;
#endif /* Employee_hpp */



class Employee{
    
public:
    
    
    Employee();
    
    Employee(string , string ,float);
    
    
    void setFirstName(string);
    void setLastName(string);
    void setMonthSell(float);
    
    
    string getFirstName();
    string getLastName();
    float getMonthSell();
    
    void ShowInfo();
    float ShowRaise();
    float ShowYearSell();
    

    
private:
    
    string firstName;
    string lastName;
    float monthSell;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};
