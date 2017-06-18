//
//  Car.cpp
//  Nasledqvane_Car_Inheritance
//
//  Created by Pepi on 5/8/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Car.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Car::Car(string brand ,string model  ,string type, string color ,string rama ,string number , int fuelConsumption){
    
    m_brand = brand;
    m_model = model;
    m_type  = type;
    m_color = color;
    m_rama = rama;
    m_number = number;
    m_fuelConsumption = fuelConsumption;
}

Car::~Car(){}
void Car::setBrand(string brand){
    m_brand = brand;
}
void Car::setModel(string model){
    m_model = model;
}
void Car::setType(string type){
    m_type = type;
}
void Car::setColor(string color){
    m_color = color;
}
void Car::setRama(string rama){
    m_rama = rama;
}
void Car::setNumber(string number){
    m_number = number;
}
void  Car::setFuelConsumption(int fuelConsumption){
    m_fuelConsumption = fuelConsumption;
}

string Car::getBrand(){
    return m_brand;
}
string Car::getModel(){
    return m_model;
}
string Car::getType(){
    return m_type;
    }
string Car::getColor(){
    return m_color;
}
string Car::getRama(){
    return m_rama;
}
string Car::getNumber(){
    return m_number;
}
int Car::getFuelConsumption(){
    return m_fuelConsumption;
}





//void  Car::carInfo(){
//cout << "CarInfo";
//}
//void  Car::carTax() {
//    cout << "CarTax";
//}

