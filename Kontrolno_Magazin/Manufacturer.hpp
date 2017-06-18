//
//  Manufacturer.hpp
//  Kontrolno_Magazin
//
//  Created by Pepi on 5/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Manufacturer_hpp
#define Manufacturer_hpp
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Manufacturer{
    
public:
    Manufacturer();
    Manufacturer(string , string ,string);
    ~Manufacturer();
    
    void setName(string name);
    void setCode(string Code);
    void setCountry(string country);
    
    
    string getName();
    string getCode();
    string getCountry();
    
    void printAutorInfo();
    
private:
    string m_name;
    string m_code;
    string m_country;
};


#endif /* Manufacturer_hpp */
