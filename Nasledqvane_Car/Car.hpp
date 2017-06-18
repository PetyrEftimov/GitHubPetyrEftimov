//
//  Car.hpp
//  Nasledqvane_Car
//
//  Created by Pepi on 4/26/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Car_hpp
#define Car_hpp
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Car{
public:
    Car();
    Car(string , string);
    
    void setBrand(string);
    void setModel(string);
    string getBrand();
    string getModel();
    
    
    void printInfo();
    
private:
    string brand;
    string model;
 //   vector<Car*> cars_v;
    
};















#endif /* Car_hpp */
