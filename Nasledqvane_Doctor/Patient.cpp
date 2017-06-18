//
//  Patient.cpp
//  Nasledqvane_Doctor
//
//  Created by Pepi on 4/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Patient.hpp"
#include <iostream>
#include <string>
using namespace std;


Patient::Patient(){}
Patient::Patient(string firsName , string lastName ,int year , string sex){
    
    this -> firstName = firsName;
    this -> lastName = lastName;
    this -> year = year;
    this -> sex = sex;
    
}

void Patient::setFirstName(string){}
void Patient::setLastName(string){}
void Patient::setYear(int){}
void Patient::setSex(string){}

string Patient::getFirstName(){
    return this -> firstName;
}
string Patient::getLastName(){
    return  this -> lastName;
}
int  Patient::getYear(){
    return this -> year;
}
string Patient::getSex(){
    return this -> sex;
    
}

void Patient::patientsInfo(Patient patients [2])
{
    for (int i = 0; i< 2; i++)
    {
        cout << patients[i].getFirstName() << " "<< patients[i].getLastName()<< " " << patients[i].getSex() << " " << patients[i].getYear()<< endl;
    }
    
}
