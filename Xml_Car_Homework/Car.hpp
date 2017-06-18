//
//  Car.hpp
//  Xml_Car_Homework
//
//  Created by Pepi on 5/28/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Car_hpp
#define Car_hpp
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "pugixml.hpp"
#include <cstdlib>
#include <fstream>
#include <iomanip>
using namespace std;
class Car {
    
public:
    
    Car();
    Car(string , int , int );
    
    void setBrand(string brand);
    void setPrice(int price);
    void setId(int id);
    
    string getBrand();
    int getPrice();
    int getId();
    
    void Info();
    
    ~Car();
 
    
private:
    string m_brand ;
    int    m_price ;
    int    m_id ;
    
};



#endif /* Car_hpp */
