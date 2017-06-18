//
//  FamilyCar.hpp
//  Nasledqvane_Car
//
//  Created by Pepi on 4/26/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef FamilyCar_hpp
#define FamilyCar_hpp
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "Car.hpp"
using namespace std;


class FamilyCar{
public:
    FamilyCar();
    FamilyCar(int , int,Car&);
    
    void setKm(int);
    void setTaxPerDay(int);
    int  getKm();
    int  getTaxPerDay();
    void familyCarInfo();
    
  virtual  double finalPrice();
    
    
private:
    
    int km;
    int taxPerDay;
    Car cars;
    
    
    
};







#endif /* FamilyCar_hpp */
