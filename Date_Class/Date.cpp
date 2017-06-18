//
//  Date.cpp
//  Date_Class
//
//  Created by Pepi on 4/5/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Date.hpp"


date::date(){
    
};


date::date(int month , int day , int year){
    
    
    if (month < 1 || month > 12) {
        this-> month = 1 ;
    }
    else{
    this-> month = month ;
    }
    
    
    if (day < 1 || day > 31) {
        this-> day = 1;
    }
    else{
    this-> day = day ;
    }
    
    
    this-> year = year ;
    
    
    
    
    
};

void date::setMonth(int month){
    this -> month = month;
}

void date::setDay(int day){
    this -> day = day;
}

void date::setYear(int year){
    this -> year = year ;
}

void date::showInfo(){

    cout <<this->month<<"/"<<this->day<<"/"<<this->year<< endl ;
    
}

int date::getMoth(){
    return this->month;
}

int date::getDay(){
    return this->day;
}

int date::getYear(){
    return this -> year;
}





