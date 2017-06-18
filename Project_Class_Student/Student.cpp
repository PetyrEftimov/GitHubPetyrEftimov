//
//  Student.cpp
//  Project_Class_Student
//
//  Created by Pepi on 4/4/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Student.hpp"
#include <string>
#include <iostream>
using namespace std;

Student::Student(){
    
}

Student::Student(string firstName,string lastName,int year,string nameUniver,string mail,long phone){
    
  
    this -> firstName=firstName;
    this -> lastName=lastName;
    this -> year=year;
    this -> nameUniver=nameUniver;
    this -> mail = mail;
    this -> phone=phone;
}

void Student::setFirstName(string firstName){
   this -> firstName = firstName;
}

void Student::setLastName(string lastName){
    this -> lastName=lastName;
    
}

void Student::setYear(int year){
    
    this -> year = year ;
}

void Student::setNameUniver(string nameUniver){
    this -> nameUniver = nameUniver;
}

void Student::setMail(string mail){
    
    this -> mail = mail ;
    
}

void Student::setPhone(long phone){
    this -> phone = phone ;
}

string Student::getFirstName(){
    return this -> firstName;
}

string Student::getLastName(){
    return this -> lastName;
}
int Student::getYear(){
    return this -> year;
}

string Student::getNameUniver(){
    return this -> nameUniver;
}

string Student::getMail(){
    return this -> mail;
}

long Student:: getTel(){
    
    return this -> phone;
}


void Student::showInfo(){
    cout << "Firs Name is : " << this -> firstName << endl ;
    cout << "Last Name is : " << this -> lastName<< endl ;
    cout << " Year of study : " << this -> year << endl ;
    cout << " university  Name : " << this -> nameUniver << endl ;
    cout << " e-mail " << this -> mail << endl ;
    cout << " phone  number : " << this -> phone << endl ;



}



