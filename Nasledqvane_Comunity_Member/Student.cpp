//
//  Student.cpp
//  Nasledqvane_Comunity_Member
//
//  Created by Pepi on 4/22/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Student.hpp"
#include <iostream>
#include <string>
using namespace std;

Student::Student(){}
Student::Student(string firsName , string lastName , int year , string faculty , int yearOfStudy):ComunityMember(){
    
    this -> faculty = faculty;
    this -> yearOfStudy = yearOfStudy;
    
}
void Student::setFaculty(string faculty){
    this -> faculty =faculty;
}
void Student::setYearOfStudy(int yearOfStudy){
    this -> yearOfStudy = yearOfStudy;
}
string Student::getFaculty(){
    return this -> faculty;
}
int  Student:: getYearOfStudy(){
    return this -> yearOfStudy;
}

void Student::printInfo(){
    cout << getFirsName();
    cout <<endl;
    cout << getLastName();
    cout <<endl;
    
}



