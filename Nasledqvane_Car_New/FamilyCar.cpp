//
//  FamilyCar.cpp
//  Nasledqvane_Car_New
//
//  Created by Pepi on 5/18/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "FamilyCar.hpp"
#include <iostream>
#include <string>
#include <vector>
#include "Car.hpp"
using namespace std;

FamilyCar::FamilyCar(){}
FamilyCar::FamilyCar(string brand,string model,string color,string rama,string number,int fuel , int taxPerDay ,int km):Car(brand,model,color,rama,number,fuel){
    m_taxPerDay = taxPerDay;
    m_km = km;

}

void FamilyCar:: setTaxPerDay(int taxPerDay){
    m_taxPerDay = taxPerDay;
}
void FamilyCar:: setKm(int km){
    m_km = km;
}
int FamilyCar:: getTaxPerDay(){
    return m_taxPerDay;
}
int FamilyCar::  getKm(){
    return m_km;
}
FamilyCar::~FamilyCar(){}

 void FamilyCar:: carInfo(){
     Car::carInfo();
}




















