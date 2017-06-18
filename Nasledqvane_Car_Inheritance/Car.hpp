//
//  Car.hpp
//  Nasledqvane_Car_Inheritance
//
//  Created by Pepi on 5/8/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Car_hpp
#define Car_hpp
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Car{
 
public:
    Car(string brand = "",string model = "" ,string type = "", string color = "" ,string rama = "",string number = "" , int fuelConsumption = 0);
    ~Car();
    void setBrand(string brand);
    void setModel(string model);
    void setType(string type);
    void setColor(string color);
    void setRama(string rama);
    void setNumber(string number);
    void  setFuelConsumption(int fuelConsumption);
    
    string getBrand();
    string getModel();
    string getType();
    string getColor();
    string getRama();
    string getNumber();
    int    getFuelConsumption();
   
    
    virtual void  carInfo()=0;
    virtual void  carTax()=0;
    
    
    
    
private:
    string m_brand;
    string m_model;
    string m_type;
    string m_color;
    string m_rama;
    string m_number;
    int    m_fuelConsumption;
   

    
};



#endif /* Car_hpp */
