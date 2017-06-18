//
//  LuxoryCar.cpp
//  Nasledqvane_Car_Inheritance
//
//  Created by Pepi on 5/8/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "LuxoryCar.hpp"
#include <iostream>
#include <string>
#include <vector>
#include "Car.hpp"
using namespace std;

LuxoryCar::LuxoryCar(string brand ,string model  ,string type, string color ,string rama ,string number , int fuelConsumption , int taxPerDay , int km ,int extri) : Car(brand,model,type,color,rama,number,fuelConsumption){
    m_taxPerDay = taxPerDay;
    m_km = km;
    m_extri = extri;

}



LuxoryCar::~LuxoryCar(){}

void LuxoryCar::setTaxPerday(int taxPerDay){
    m_taxPerDay = taxPerDay;
}
void LuxoryCar::setKm(int km){
    m_km = km;
}
void LuxoryCar::setExtri(int extri){
    m_extri = extri;
}
int LuxoryCar::getTaxPerDay(){
    return this -> m_taxPerDay;
}
int LuxoryCar::getKm(){
    return  this -> m_km;
}
int LuxoryCar::getExtri(){
    return this -> m_extri;
}

void LuxoryCar:: carInfo(){
    cout << Car::getBrand()<< endl ;
    cout << Car::getFuelConsumption()<< endl;
    
}
void LuxoryCar::carTax(){
    double price = 0 ;
    if (m_km < 200) {
        price = (m_taxPerDay*0.6)*m_extri;
    }
    else{
        price = (m_taxPerDay*0.4)*m_extri;
    }
    
    cout << price;
}

void LuxoryCar::addLuxCar(string brand ,string model  ,string type, string color ,string rama ,string number , int fuelConsumption , int taxPerDay , int km ,int extri ){
    LuxoryCar temp1 ( brand , model  , type,  color , rama , number ,  fuelConsumption ,  taxPerDay ,  km , extri);
    m_luxCar.push_back(temp1);
    
//    for (size_t i = 0; i < m_luxCar.size(); i++) {
//        cout << m_luxCar.at(i)->getBrand()<<endl;
//        cout <<m_luxCar.at(i)->getModel()<<endl;
//    }
    
    
}
void LuxoryCar::searchByBrand(string brands ){
    
    bool found = false;
    
        for (size_t i = 0 ; i < m_luxCar.size(); i++) {
            if(m_luxCar.at(i).getBrand() == brands){
                
                m_luxCar.at(i).carInfo();
                found = true;
                
            }
        }
    
    if (!found)
    {
        cout << "Brand not found!" <<endl;
    }
    
}
