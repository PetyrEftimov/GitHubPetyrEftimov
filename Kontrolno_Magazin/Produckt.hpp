//
//  Produckt.hpp
//  Kontrolno_Magazin
//
//  Created by Pepi on 5/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Produckt_hpp
#define Produckt_hpp
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "Manufacturer.hpp"
using namespace std;

class Produckt{
public:
    Produckt();
    Produckt(string , string , int ,int , Manufacturer&);
    ~Produckt();
    
    void setName(string name);
    void setType(string type);
    void setPrice(int price);
    void setQuantity(int quantity);
    
    string getName();
    string getType();
    int    getPrice();
    int    getQuantity();
    
    void printInfo();
    void searchByName(string name);
    
private:
    string m_name;
    string m_type;
    int    m_price;
    int    m_quantity;
    Manufacturer  manufacturers;
    
    
};

#endif /* Produckt_hpp */
