//
//  Item.hpp
//  Store_Kontrolno
//
//  Created by Pepi on 6/2/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Item_hpp
#define Item_hpp
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
#include "pugixml.hpp"
using namespace std;

class   Item{
    
public:
    Item();
    Item(string name , string brand , string model , int quantity , double price );
    
    
    void setName(string name);
    void setBrand(string brand);
    void setModel(string model);
    void setQuantity(int quantity);
    void setPrice(double price);
    
    
    string getName();
    string getBrand();
    string getModel();
    int    getQuantity();
    double getPrice();
    
    void ReadFromFilePushInVectors();
    
    ~Item();
    
    
private:
    string m_name ;
    string m_brand ;
    string m_model ;
    int    m_quantity;
    double m_price ;
    
};


extern Item shop1;

#endif /* Item_hpp */
