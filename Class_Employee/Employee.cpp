//
//  Employee.cpp
//  Class_Employee
//
//  Created by Pepi on 4/6/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
#include <iostream>
#include "Employee.hpp"
using namespace std;



Employee::Employee(){
    

}

Employee::Employee(string  firstName , string lastName , float monthSell){
    
    this -> firstName = firstName;
    this -> lastName = lastName;
    this -> monthSell = monthSell;
    
    

    
    
}

void Employee::setFirstName(string firstName){
    
    this -> firstName = firstName;
}

void Employee::setLastName(string lastName){
    this -> lastName = lastName;
}

void Employee::setMonthSell(float monthSell){
    
    this -> monthSell = monthSell;
    
    
    
}

string Employee::getFirstName(){
    return this -> firstName;
}



string Employee::getLastName(){
    return this-> lastName;
}


float Employee::getMonthSell(){
    return this -> monthSell;
}




void Employee::ShowInfo(){
    
    cout << "first name is  " << this -> firstName<< endl ;
    cout << " last name is  " << this -> lastName << endl ;
    cout << "monthley Sellary is : " << this -> monthSell << endl ; 
    
    
}

float Employee::ShowRaise(){
    
    float month = monthSell ;
    month = ((month*10)/100) + month;
    cout  << month << endl ;
    
    
    return month;
}


float Employee::ShowYearSell(){
    
    float yearSell;
    yearSell = monthSell * 12;
    cout << yearSell<< endl;
    
    return  yearSell;
}




