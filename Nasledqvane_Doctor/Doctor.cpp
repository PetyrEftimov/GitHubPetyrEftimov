//
//  Doctor.cpp
//  Nasledqvane_Doctor
//
//  Created by Pepi on 4/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Doctor.hpp"
#include "Patient.hpp"

#include <stdio.h>
#include <iostream>
using namespace std;




Doctor::Doctor(){}

Doctor::Doctor(string name , string speciality , class Patient& patients):patients()
{
    
    this -> name =name;
    this -> speciality = speciality;
    

    
}

void Doctor::setName(string){}
void Doctor::setSpeciality(string){}

string Doctor::getName(){
    return this -> name;
}
string Doctor::getSpeciality(){
    return this -> speciality;
}

void Doctor::printInfo(){
    cout <<"Doctors name:" << getName() << endl;
    cout <<"Doctors specialty: "<<  getSpeciality()<< endl;
    
}


