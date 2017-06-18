//
//  Teacher.cpp
//  Nasledqvane_Kompoziciq_Univecity
//
//  Created by Pepi on 4/23/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Teacher.hpp"
#include <string>
#include <iostream>
#include <vector>
using namespace std;
Teacher::Teacher(){}
Teacher::Teacher(string firstName, string lastName,string subject , long egn, int internship  ){
    this -> firstName = firstName;
    this -> lastName  = lastName;
    this -> subject   = subject;
    this -> egn       = egn;
    this -> internship = internship;
    
}


void Teacher::setFirstName(string firstName){
    this -> firstName = firstName;
}
void Teacher::setLastName(string lastName){
    this -> lastName = lastName;
}
void Teacher::setSubject(string subject){
    this -> subject = subject;
}
void Teacher::setEgn(long egn){
    this -> egn = egn;
}
void Teacher::setInternship(int internship ){
    this -> internship =internship;
}

string Teacher:: getFirstName(){
    return this -> firstName;
}
string Teacher:: getLastName(){
    return this -> lastName;
}
string Teacher:: getSubject(){
    return this -> subject;
}
long  Teacher:: getEgn(){
    return this -> egn;
}
int  Teacher::getInternship(){
    return this -> internship;
}


void Teacher::printInfo(){
    cout << getFirstName();
    cout << endl ;
    cout << getLastName();
    cout << endl ;
    cout << getSubject();
    cout << endl ;
    cout << getEgn();
    cout << endl ;
    cout << getInternship();
    cout << endl ;
    
}



