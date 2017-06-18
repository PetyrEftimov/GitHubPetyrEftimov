//
//  Produckt.cpp
//  Kontrolno_Magazin
//
//  Created by Pepi on 5/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Produckt.hpp"
#include <string>
#include <vector>
#include <iostream>
#include "Manufacturer.hpp"
using namespace std;

Produckt::Produckt(){}
Produckt::Produckt(string name , string type , int price ,int  quantity  , class Manufacturer& manufacturers):manufacturers(manufacturers){
    
    m_name = name;
    m_type = type;
    m_price = price;
    m_quantity = quantity;
    
    
}

Produckt::~Produckt(){}

void Produckt::setName(string name){
    m_name = name;
}
void Produckt::setType(string type){
    m_type = type;
}
void Produckt::setPrice(int price){
    m_price = price;
}
void Produckt::setQuantity(int quantity){
    m_quantity = quantity;
    
}

string Produckt::getName(){
    return m_name;
}
string Produckt::getType(){
    return m_type;
}
int Produckt::getPrice(){
    return m_price;
}
int Produckt::getQuantity(){
    return  m_quantity;
}


void Produckt::printInfo(){
    cout << getName()<< " "<< getType()<< " "<< getPrice()<<" "<<getQuantity()<<endl;
    
}
