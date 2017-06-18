//
//  LuxCar.hpp
//  Nasledqvane_Car_New
//
//  Created by Pepi on 5/18/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef LuxCar_hpp
#define LuxCar_hpp
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "Car.hpp"
using namespace std;


class LuxCar : public Car{
    
    
public:
    LuxCar();
    LuxCar(string,string,string,string,string,int,int,int,int);
    ~LuxCar();
    void setTaxPerDay(int);
    void setKm(int);
    void setExtry(int);
    int  getTaxPerDay();
    int  getKm();
    int  getExtry();
    
    virtual void carInfo();
    virtual void carPrice();
    
    
    
private:
    int m_taxPerDay ;
    int m_km;
    int m_extry;
    
};







#endif /* LuxCar_hpp */
