//
//  Manufacturer.cpp
//  Kontrolno_Magazin
//
//  Created by Pepi on 5/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Manufacturer.hpp"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

Manufacturer::Manufacturer(){}
Manufacturer::Manufacturer(string name , string code , string country){
    m_name = name;
    m_code = code;
    m_country = country;
    
    
}

Manufacturer::~Manufacturer(){}



void Manufacturer::setName(string name){
    m_name = name;
}
void Manufacturer::setCode(string code){
    m_code = code;
}
void Manufacturer::setCountry(string country){
    m_country = country;
}


string Manufacturer::getName(){
    return m_name;
}
string Manufacturer::getCode(){
    return m_code;
}
string Manufacturer::getCountry(){
    return m_country;
}

void Manufacturer::printAutorInfo(){
    cout << getName()<<endl;
    cout << getCode()<<endl;
    cout << getCountry()<<endl;
}
