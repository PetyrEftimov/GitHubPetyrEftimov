//
//  TwoDayPackage.cpp
//  Nasledqvane_Pratki
//
//  Created by Pepi on 4/30/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "TwoDayPackage.hpp"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

TwoDayPackage::TwoDayPackage(){}
TwoDayPackage::TwoDayPackage(double weight , double cost,  class Client& sender ,class Client& reciver , double twoDayDelivery ):Packaje(weight,cost,sender,reciver){
    this -> twoDayDelivery = twoDayDelivery;
    }

void TwoDayPackage::setTwoDayPackage(double twoDayDelivery){
    this -> twoDayDelivery = twoDayDelivery;
}
double TwoDayPackage::getTwoDayPackage(){
    return this -> twoDayDelivery;
}


double TwoDayPackage::calculateTwoDayPackageCost(){
    
    
    return Packaje::getWeight()*Packaje::getCost()*twoDayDelivery;
}
