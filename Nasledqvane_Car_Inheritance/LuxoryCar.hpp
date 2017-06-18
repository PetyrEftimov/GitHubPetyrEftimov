//
//  LuxoryCar.hpp
//  Nasledqvane_Car_Inheritance
//
//  Created by Pepi on 5/8/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef LuxoryCar_hpp
#define LuxoryCar_hpp
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "Car.hpp"
using namespace std;

class LuxoryCar : public Car {
public:
    LuxoryCar(string brand = "",string model = "" ,string type = "", string color = "",string rama = "",string number = "", int fuelConsumption = 0 , int taxPerDay = 0, int km = 0,int extri = 0);
    ~LuxoryCar();
    
    void setTaxPerday(int taxPerDay);
    void setKm(int km);
    void setExtri(int extri);
    int  getTaxPerDay();
    int  getKm();
    int  getExtri();
    
    virtual void carInfo();
    virtual void carTax();
    void addLuxCar(string brand ,string model  ,string type, string color ,string rama ,string number , int fuelConsumption , int taxPerDay , int km ,int extri);
    
    void searchByBrand(string brand);
    
    
    
private:
    int m_taxPerDay;
    int m_km;
    int m_extri;
    vector<LuxoryCar> m_luxCar;
};



#endif /* LuxoryCar_hpp */
