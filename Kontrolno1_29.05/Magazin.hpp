//
//  Magazin1.hpp
//  Kontrolno_29.05
//
//  Created by Pepi on 5/29/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Magazin1_hpp
#define Magazin1_hpp
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <iterator>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <ostream>
#include <cctype>
#include <array>
using namespace std;

class Magazin{
    
public:
    Magazin();
    Magazin(string , string , string ,int ,int);
    ~Magazin();
    void setName(string name);
    void setBrand(string brand);
    void setModel(string model);
    void setQuantity(int Quantity);
    void setPrice(int price);
    
    string getName();
    string getBrand();
    string getModel();
    int    getQuantity();
    int    getPrice();
    
    
    void printInfo();
    
    
    
private:
    string m_name ;
    string m_brand ;
    string m_model ;
    int    m_quantity;
    int    m_price;
    
    
};



#endif /* Magazin1_hpp */
