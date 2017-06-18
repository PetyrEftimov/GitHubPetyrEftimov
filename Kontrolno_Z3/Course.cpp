//
//  Course.cpp
//  Kontrolno_Z3
//
//  Created by Pepi on 5/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Course.hpp"
#include <string>
#include <vector>
#include <iostream>
using namespace std;


Course::Course(){}
Course::Course(string name , int number  ,int time,int basePrice){
    m_name = name;
    m_number = number ;
    m_time = time;
    m_basePrice = basePrice;
    
}
void Course::setName(string name){
    m_name = name;
}
void Course:: setNumber(int number){
    m_number = number;
}
void Course:: setTime(int time){
    m_time = time;
}
void Course:: setBasePrice(int basePrice){
    m_basePrice = basePrice;
}
string Course:: getName(){
    return m_name;
}
int Course:: getNumber(){
    return m_number;
}
int Course:: getTime(){
    return  m_time;
}
int Course:: getBasePrice(){
    return m_basePrice;
}
Course::~Course(){}

void Course::courseInfo(){
    cout << m_name <<";"<<m_number<<";"<<m_time;
}

