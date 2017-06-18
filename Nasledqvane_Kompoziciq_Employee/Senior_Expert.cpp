//
//  Senior_Expert.cpp
//  Nasledqvane_Kompoziciq_Employee
//
//  Created by Pepi on 4/25/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Senior_Expert.hpp"
#include <vector>
#include <iostream>
#include <string>
#include "Expert.hpp"
#include "Address.hpp"

Senior_Expert::Senior_Expert(){}
Senior_Expert::Senior_Expert(string firstName , string lastName , string department , double salaryPerHour , int hours , Address& addr , int bonus ,string tehnologies , int mBonus):Expert(firstName,lastName,department,salaryPerHour,hours,addr,bonus){
    
    this -> tehnologies = tehnologies;
    this -> mBonus = mBonus;
    
}

void Senior_Expert::setTehnologies(string tehnologies){
    this -> tehnologies = tehnologies;
}
string Senior_Expert::getTehnologies(){
    return this -> tehnologies;
}



double Senior_Expert::seniorEexpertCalculateSalary(){
 double   seniorSalary = 0 ;
    
    seniorSalary = Expert::EexpertCalculateSalary()+mBonus;
   
    return seniorSalary;
}


