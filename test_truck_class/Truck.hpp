//
//  TruckClass.hpp
//  Truck
//
//  Created by Pepi on 4/4/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef TruckClass_hpp
#define TruckClass_hpp
#include <string>
#include <stdio.h>
using namespace std ;
#endif /* TruckClass_hpp */


class Truck{
    
public :
    
    Truck();
    Truck(string,string ,int,int ,int ,int );
    
    void setBrand(string);
    void setModel(string);
    void setYear(int );
    void setWheelBase(int);
    void setCarrying(int);
    void setFuel(int distance);
   
    
    
    string brand ;
    string model ;
    int year ;
    int wheelBase ;
    int carrying ;
    int fuel ;
    
    
    
    string getBrand() ;
    string getModel() ;
    int getYear() ;
    int getWheelBase() ;
    int getCarrying() ;
    int getFuel() ;

    
    void showInfo();
    
    
};
