//
//  LuxoryCar.cpp
//  Nasledqvane_Car
//
//  Created by Pepi on 4/26/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "LuxoryCar.hpp"
#include <iostream>
#include <vector>
#include <string>
#include "FamilyCar.hpp"
#include "Car.hpp"
using namespace std;


LuxoryCar::LuxoryCar(){}
LuxoryCar::LuxoryCar(int km , int taxPerDay ,Car& cars,int extry):FamilyCar(km,taxPerDay,cars){
    this -> extry = extry;
}

void LuxoryCar::setExtry(int extry){
    this -> extry = extry;
}

int LuxoryCar::getExtry(){
    return this -> extry;
}

double LuxoryCar::luxFinalPrice(){
    double z = 0.6;
    double w = 0.4;
    int finalSal = 0;
    
    if (FamilyCar::getKm() <= 200) {
         finalSal = (FamilyCar::getTaxPerDay()*z)*extry;
    }
    else{
         finalSal = (FamilyCar::getTaxPerDay()*w)*extry;
    }
    
    return finalSal;
}

void LuxoryCar::luxInfo(){
    
    familyCarInfo();
    
    
    
    
}



