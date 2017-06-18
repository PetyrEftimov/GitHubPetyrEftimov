//
//  FamilyCar.hpp
//  Nasledqvane_Car_Inheritance
//
//  Created by Pepi on 5/8/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef FamilyCar_hpp
#define FamilyCar_hpp
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "Car.hpp"
using namespace std;

class FamilyCar : public Car{
public:
    
    FamilyCar(string ,string ,string , string ,string ,string , int ,int, int);
    ~FamilyCar();
    void setTaxPerday(int taxPerDay);
    void setKm(int km);
    int  getTaxPerDay();
    int  getKm();
    
    virtual void carInfo();
    virtual void carTax();
    
    
    
    
private:
    int m_taxPerDay;
    int m_km;
};





#endif /* FamilyCar_hpp */
