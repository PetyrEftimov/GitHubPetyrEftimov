//
//  Online.cpp
//  Kontrolno_Z3
//
//  Created by Pepi on 5/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Online.hpp"
#include <string>
#include <vector>
#include <iostream>
#include "Course.hpp"
using namespace std;

Online::Online(){}
Online::Online(string name , int number  ,int time,int basePrice ,int level ,int type ,double hour):
Course(name,number,time,basePrice){
    m_level = level;
    m_type = type;
    m_hour = hour;
}

void Online::setLevel(int level){
    m_level = level;
}
void Online:: setType(int type){
    m_type = type;
}
void Online:: setHour(double hour){
    m_hour = hour;
}

int Online:: getLevel(){
    return m_level;
}
int Online:: getType(){
    return m_type;
}
double Online:: getHour(){
    return m_hour;
}


double Online:: coursePrice(){
    double price = 0 ;
//    double beginer = 5;
//    double medium = 10 ;
//    double expert = 15 ;
//    double individual = 6 ;
//    double smalGrup = 4 ;
//    double bigGrup = 2 ;
//    
    if (m_type == 5 && m_level ==  2  ) {
        price = Course::getBasePrice()*5*2;
    }
    if (m_type == 5 && m_level == 4) {
        price = Course::getBasePrice()*5*2;


    }
    if (m_type == 10 && m_level == 4) {
        price = Course::getBasePrice()*10*4;

    }
    
    if (m_type == 10 && m_level == 6) {
        price = Course::getBasePrice()*10*6;

    }
    
    if (m_type == 15 && m_level == 6 ) {
        price = Course::getBasePrice()*15*6;

    }
    if (m_type == 15 && m_level == 4) {
        price = Course::getBasePrice()*15*4;

    }
    
    
    
    
    return  price;
    
}

void Online::courseInfo(){
    Course::courseInfo();
}


