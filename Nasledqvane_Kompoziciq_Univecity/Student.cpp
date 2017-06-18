//
//  Student.cpp
//  Nasledqvane_Kompoziciq_Univecity
//
//  Created by Pepi on 4/23/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Student.hpp"
#include <string>
#include <iostream>
#include <vector>
using namespace std;


Student::Student(){}
Student::Student(string firstName , string lastName,long egn){
    this -> firstName = firstName;
    this -> lastName = lastName;
    this -> egn = egn ;
    
}





void Student::setFirstName(string firstName ){
    this -> firstName = firstName;
}
void Student::setLastName(string lastName){
    this -> lastName = lastName;
}
void Student::setEgn(long egn){
    this ->egn =egn;
}

string Student::getFirstName(){
    return this -> firstName;
}
string Student::getLastName(){
    return this -> lastName;
}

long  Student::getEgn(){
    return  this -> egn;
}

void Student::addGrades(int grades_v){
    
    grades.push_back(grades_v);
}

void Student::printInfo(){
    cout<<getLastName();
    cout << endl;
    cout <<getLastName();
    cout << endl;
    cout<<getEgn();
    cout << endl ;
    for (size_t i = 0 ; i < grades.size(); i++) {
        cout<<grades.at(i);
        cout << endl;
    }
    cout << endl;
    
    
    
}

bool Student::AverageSuccess(){
    int sum = 0;
    double average = 0 ;
    
    for (size_t i = 0; i < grades.size(); i++) {
        sum += grades.at(i)++;
    }
    cout << sum << ":)"<<endl;
    average = sum / 3;
    if (average >= 5) {
        return true;
    }
    
    return false;
}




