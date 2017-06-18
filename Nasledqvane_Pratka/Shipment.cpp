//
//  Shipment.cpp
//  Nasledqvane_Pratka
//
//  Created by Pepi on 4/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Shipment.hpp"
#include <stdio.h>
#include "Reciver.hpp"
#include <iostream>
#include <string>
using namespace std;




Shipment::Shipment(){}

Shipment::Shipment(int weight , int price , class Reciver& reciver):Reciver(reciver){
    
    this -> weight = weight;
    this -> price  = price;
    
}

void Shipment::setWeight(int){}
void Shipment::setPrice(int){}

int Shipment::getWeight(){
    return this -> weight;
}
int Shipment::getPrice(){
    
    return this -> price;
}


void Shipment::shipInfo(){
    
    cout << weight<< endl ;
    cout <<price<< endl ;
    Reciver.printReciverInfo();
    
    
}







