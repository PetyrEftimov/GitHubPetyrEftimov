//
//  FamilyCar.cpp
//  Nasledqvane_Car
//
//  Created by Pepi on 4/26/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "FamilyCar.hpp"
#include <iostream>
#include <vector>
#include <string>
#include "Car.hpp"
using namespace std;

FamilyCar::FamilyCar(){}
FamilyCar::FamilyCar(int km , int taxPerDay,class Car& cars):cars(cars){
    
    this -> km = km;
    this -> taxPerDay = taxPerDay;
}

void FamilyCar::setKm(int km){
    
}

void FamilyCar::setTaxPerDay(int taxPerDay){
    
}

int FamilyCar::getKm(){
    return this -> km;
}

int FamilyCar::getTaxPerDay(){
    return this -> taxPerDay;
}

void FamilyCar::familyCarInfo(){
    cout <<cars.getBrand()<<endl;
    cout <<cars.getModel()<<endl;
    cout <<getKm()<<endl;
    cout << getTaxPerDay()<<endl;
}

double FamilyCar::finalPrice(){
    double finalTax = 0 ;
    double x = 0.7;
    double y = 0.4;
  
    if  (km  >= 500) {
        finalTax = taxPerDay*x;
        if (km < 500 ) {                                  //finalTax = taxPerDay*x;
            finalTax = taxPerDay*y;
            
        }
    }
    
    
    return finalTax;
    
}


