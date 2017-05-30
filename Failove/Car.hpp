//
//  Car.hpp
//  Chetene_Pisane_Car
//
//  Created by Pepi on 5/15/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Car_hpp
#define Car_hpp
#include <stdio.h>
#include <string>
using namespace std;

class Car{
public:
    static const int LENGHT = 30 ;
    Car(int = -1, string  = "" , int = 0 , double = 0.0);
    
    
    void setCarNumber(int);
    void setCarName(string);
    void setInStock(int);
    void setPrice(double);
    
    int getCarNumber();
    string getCarName();
    int getInStock();
    double getPrice();
    
private:
    int    m_carNumber;
    char   m_carName[LENGHT];
    int    m_inStock;
    double m_price;
};

#endif /* Car_hpp */
