//
//  FamilyCar.hpp
//  Nasledqvane_Car_New
//
//  Created by Pepi on 5/18/17.
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

class FamilyCar:public Car{
    
public:
    FamilyCar();
    FamilyCar(string,string,string,string,string,int,int,int);
    ~FamilyCar();
    
    void setTaxPerDay(int);
    void setKm(int);
    int  getTaxPerDay();
    int  getKm();
    
      void carInfo();
    
    
private:
    int m_taxPerDay;
    int m_km;
};


#endif /* FamilyCar_hpp */
