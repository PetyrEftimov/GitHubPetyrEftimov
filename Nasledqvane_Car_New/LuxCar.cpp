//
//  LuxCar.cpp
//  Nasledqvane_Car_New
//
//  Created by Pepi on 5/18/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "LuxCar.hpp"
#include <iostream>
#include <string>
#include <vector>
#include "Car.hpp"
using namespace std;

LuxCar::LuxCar(){}
LuxCar::LuxCar(string brand,string model,string color,string rama,string number,int fuel , int taxPerDay ,int km , int extry):Car(brand,model,color,rama,number,fuel){
    m_taxPerDay = taxPerDay;
    m_km = km;
    m_extry = extry;

}
LuxCar::~LuxCar(){}

void LuxCar:: setTaxPerDay(int taxPerDay){
    m_taxPerDay = taxPerDay;
}
void LuxCar:: setKm(int km){
    m_km = km;
}
int LuxCar:: getTaxPerDay(){
    return m_taxPerDay;
}
int LuxCar::  getKm(){
    return m_km;
}

void LuxCar::setExtry(int extry){
    m_extry = extry;
}

int LuxCar:: getExtry(){
    return m_extry;
}

void LuxCar::carInfo(){
    Car::carInfo();
}

void LuxCar::carPrice(){
    double a = 0.6;
    double b = 0.4;
    double tax = 0;
    if (getKm()  < 200) {
        tax = (m_taxPerDay*a)*m_extry;
    }
   if (m_km >= 200) {
       tax = (m_taxPerDay* b )*m_extry;
        
    }
    cout << "tax is :"<<tax<<endl;
    
}




