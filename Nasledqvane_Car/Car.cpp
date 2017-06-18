//
//  Car.cpp
//  Nasledqvane_Car
//
//  Created by Pepi on 4/26/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Car.hpp"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

Car::Car(){}
Car::Car(string brand , string model){
    this -> brand = brand;
    this -> model = model;
}

void Car::setBrand(string){
    this -> brand = brand;
}
void Car::setModel(string){
    this -> model = model;
}
string Car::getBrand(){
    return this -> brand;
}
string Car::getModel(){
    return this -> model;
}


void Car::printInfo(){
    cout << getBrand()<<endl;
    cout << getModel()<<endl;
    
}

