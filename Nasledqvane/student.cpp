//
//  student.cpp
//  Nasledqvane
//
//  Created by Pepi on 4/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
#include <string>
#include <iostream>
#include "student.hpp"
#include "adress.hpp"

using namespace std;




Student::Student(){}

Student::Student(string firstName , string lastName  , class Adress& adress ): Adress(adress){
    
    this -> firstName = firstName;
    this -> lastName = lastName;
   
  
}



void Student::setFirsName(string){
}
void Student::setLastName(string){}



string Student::getFirstName(){
    return this -> firstName;
}
string Student::getLastName(){
    return this -> lastName;
}



 void Student::printStudentInfo(){
    
     cout<< getLastName();
     cout << getFirstName();
     Adress.printInfo();
    
}












