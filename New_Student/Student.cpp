//
//  Student.cpp
//  New_Student
//
//  Created by Pepi on 4/6/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
#include <iostream>
#include <string>


#include "Student.hpp"

using namespace std;



Student::Student(){
    
}

Student::Student(string firstName,string lastName,long egn,int year,string special){
    
    this -> firstName = firstName;
    this -> lastName = lastName;
    this -> egn = egn;
  //  this -> year = year;
    if (year < 1 || year > 5) {
        this -> year = 1;
        cout << "invalid year  " << endl ;
    }
    else{
    this -> year = year;
    }
    
    this -> special = special;
}

void Student::setFirstName(string firstName){
    this -> firstName = firstName;
    
}

void Student::setLastName(string lastName){
    this -> lastName = lastName;
}


void Student::setEgn(long egn){
    this -> egn=egn;
}

void Student::setYear(int year){
    if (year < 1 || year > 5 ) {
        this -> year =1;
        cout << "invalid year  " << endl ;
    }
    else{
    this -> year = year;
    }
}
void Student::setSpecial(string special){
    this-> special=special;
    
}



string Student::getFirstName(){
    return this -> firstName;
}

string Student::getLastName(){
    return this -> lastName;
}

long Student::getEgn(){
    return this -> egn;
}
int Student::getYear(){
    
    
    
    return this -> year;
}

string Student::getSprcial(){
    return this -> special;
}


void Student::showInfo(){
    
    cout << " First name is : " << this -> firstName<< endl ;
    cout << " Last name is : "  << this -> lastName<< endl ;
    cout << " EGN is : " << this -> egn << endl ;
    cout << " Year of stud is : " << this -> year << endl ;
    cout << " Speciality is : " << this-> special << endl ;
}

float Student::showOcenki(){
    
    
    
    float ArrayOcenki[5]={3,4,6,5,5};
    float progres = 0 ;
    float sum = 0 ;
    
    for (int i = 0; i < 5 ; i++) {
        progres = progres + ArrayOcenki[i];
        // cout << ArrayOcenki[i];
    }
    //cout << progres;
    
    sum = progres/5;
    cout << sum << endl ;
    
    
    return sum;
}

int Student::ShowMax(){
    
    int ArrayMax[5]={6,4,6,5,3};
    
    int max = 0 ;
    for (int i = 0 ; i < 5 ; i++) {
        if (ArrayMax[i] == 6) {
            max++;
        }
        
       
    }
    cout << max<< endl ;

    
    
    return max ;
}


   
    
    

    
    
  











