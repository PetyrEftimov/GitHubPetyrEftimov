//
//  main.cpp
//  Class_Employee
//
//  Created by Pepi on 4/6/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
#include "Employee.hpp"
#include <iostream>
using namespace std;

int main(){
    
    
    Employee myrlio("Lubomir" , "Petrov " , 1200);
    
    
    myrlio.ShowInfo();
    myrlio.ShowRaise();
    myrlio.ShowYearSell();
    

    return 0;
}
