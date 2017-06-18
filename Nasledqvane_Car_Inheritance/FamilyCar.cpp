//
//  FamilyCar.cpp
//  Nasledqvane_Car_Inheritance
//
//  Created by Pepi on 5/8/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "FamilyCar.hpp"
#include <iostream>
#include <string>
#include <vector>
#include "Car.hpp"
using namespace std;

FamilyCar::FamilyCar(string brand ,string model  ,string type, string color ,string rama ,string number , int fuelConsumption , int taxPerDay , int km ) : Car(brand,model,type,color,rama,number,fuelConsumption){
    m_taxPerDay = taxPerDay;
    m_km        = km;

}
FamilyCar:: ~FamilyCar(){}
void FamilyCar::setTaxPerday(int taxPerDay){
    m_taxPerDay =taxPerDay;
}
void FamilyCar::setKm(int km){
    m_km = km;
}
int FamilyCar::getTaxPerDay(){
    return this -> m_taxPerDay;
}
int FamilyCar::getKm(){
    return this -> m_km;
}

void FamilyCar::carInfo(){
     cout << Car::getBrand()<<endl;
     cout << Car::getModel()<<endl;
     
}

void FamilyCar::carTax(){
    double price = 0 ;
   
    if (m_km < 500) {
        price = m_taxPerDay*0.7;
    }
    
    else{
        price = m_taxPerDay*0.4;
    }
    
    cout << price << endl;
}
