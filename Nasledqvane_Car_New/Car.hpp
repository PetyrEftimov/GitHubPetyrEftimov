//
//  Car.hpp
//  Nasledqvane_Car_New
//
//  Created by Pepi on 5/18/17.
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
    Car();
    Car(string,string,string,string,string,int);
    
    void setBrand(string brand);
    void setModel(string model);
    void setColor(string color);
    void setRama(string rama);
    void setNumber(string number);
    void setKm(int fuel);
    
    string getBrand();
    string getModel();
    string getColor();
    string getRama();
    string getNumber();
    int    getFuel();
    
  virtual  void carInfo();
    void carPrice();
    
    
    
    ~Car();
    
private:
    string m_brand;
    string m_model;
    string m_color;
    string m_rama;
    string m_number;
    int    m_fuel;
    
    
};

#endif /* Car_hpp */
