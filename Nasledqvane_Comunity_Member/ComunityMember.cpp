//
//  ComunityMember.cpp
//  Nasledqvane_Comunity_Member
//
//  Created by Pepi on 4/22/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "ComunityMember.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;


ComunityMember::ComunityMember(){}
ComunityMember::ComunityMember(string firstName , string lastName , int year ,int salary2,class Adress& adress):Adress(adress){

    this -> firstName = firstName;
    this -> lastName  = lastName;
    this -> year      = year;
    this -> salary2    = salary2;

}

void ComunityMember::setFirsName(string firstName){
    this -> firstName = firstName;
}
void ComunityMember::setLastName(string lastName){
    this -> lastName = lastName;
}
void ComunityMember::setYear(int year){
    this -> year = year;
}
void ComunityMember::setSalary2(int salary2){
    this -> salary2 = salary2;
}

string ComunityMember::getFirsName(){
    return this -> firstName;
}
string  ComunityMember::getLastName(){
    return  this ->  lastName;
}
int  ComunityMember::getYear(){
    return this ->  year;
}
int ComunityMember::getSalary2(){
    return this -> salary2;
}

void ComunityMember::printInfo(){
    cout << getFirsName();
    cout << endl;
    cout << getLastName();
    cout << endl ;
    cout << getYear();
    cout << endl ;
    cout << Adress.getStreet();
}

int ComunityMember::calculateSalary(){
    int yearSalary = 0;
    
    
     yearSalary= salary2*12;
    return yearSalary;
}

