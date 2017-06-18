//
//  Car.cpp
//  Nasledqvane_Car_New
//
//  Created by Pepi on 5/18/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Car.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Car::Car(){}
Car::Car(string brand,string model,string color,string rama,string number,int fuel){
    m_brand = brand;
    m_model = model;
    m_color = color;
    m_rama  = rama;
    m_number = number;
    m_fuel = fuel;
    

}

void Car:: setBrand(string brand){
    m_brand = brand;
}
void Car:: setModel(string model){
    m_model = m_model;
}
void Car:: setColor(string color){
    m_color = color;
}
void Car:: setRama(string rama){
    m_rama = rama;
}
void Car:: setNumber(string number){
    m_number = number;
}
void Car:: setKm(int fuel){
    m_fuel = fuel;
}

string Car:: getBrand(){
    return m_brand;
}
string Car:: getModel(){
    return m_model;
}
string Car:: getColor(){
    return m_color;
}
string Car:: getRama(){
    return  m_rama;
}
string Car:: getNumber(){
    return m_number;
}
int  Car::  getFuel(){
    return m_fuel;
}

Car::~Car(){}


void Car::carInfo(){
    cout<<Car::getBrand()<<"-"<<Car::getModel()<<"-"<<Car::getColor()<<"-"<<Car::getRama()<<"-"<<Car::getNumber()<<"-"<<Car::getFuel();
    
}

