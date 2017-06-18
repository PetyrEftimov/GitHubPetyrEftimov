//
//  Truck.cpp
//  test_truck_class
//
//  Created by Pepi on 4/4/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Truck.hpp"
#include <iostream>
using namespace std;



Truck::Truck(){

};


 
Truck::Truck(string brand,string model,int year,int wheelBase,int carrying,int fuel ){
    
    this -> brand=brand;
    this -> model=model;
    this -> year = year;
    this -> wheelBase=wheelBase;
    this -> carrying=carrying;
    this -> fuel=fuel;
    
    
    
}


void Truck::setBrand(string brand){
    this -> brand = brand;
}

void Truck::setModel(string model){
    this -> model = model;
}

void Truck::setYear(int year){
    this -> year = year;
}

void Truck::setWheelBase(int wheelBase){
    this -> wheelBase = wheelBase;
}

void Truck::setCarrying(int carrying){
    this -> carrying = carrying;
}
void Truck::setFuel(int fuel){
    this -> fuel = fuel;
}



 string Truck::getBrand(){
 return this->brand ;
 
 }
 string Truck::getModel(){
 return this -> model ;
 }

 int Truck::getYear(){
 return this -> year;
 }
 
 int Truck::getWheelBase(){
 return this -> wheelBase;
 
 }
 
 int Truck::getCarrying(){
 return this -> carrying;
 }
 
 int Truck::getFuel(){
 return this -> fuel;
    
 }




 int  Truck::fuel(){
    return (fuel *  carring )/100; //// kolko harchi na 100 da se nameri 
    
}




 void Truck::showInfo(){
    cout << " truck brand is : " << this -> brand << endl ;
    cout << " truck model is : " << this -> model << endl ;
    cout << " truch year is  : " << this -> year << endl ;
    cout << " truck wheelBase is : " <<  this -> wheelBase << endl ;
    cout << " truck carrying  is : " << this -> carrying << endl ;
    cout << " truck fuel consumtion is : "<< this -> fuel << endl ;
   
    
 }

