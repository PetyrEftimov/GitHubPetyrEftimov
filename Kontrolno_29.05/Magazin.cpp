//
//  Magazin1.cpp
//  Kontrolno_29.05
//
//  Created by Pepi on 5/29/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Magazin.hpp"
Magazin:: Magazin(){}
Magazin:: Magazin(string name , string brand  , string model ,int quantity ,int price){
    setName(name);
    setBrand(brand);
    setModel(model);
    setQuantity(quantity);
    setPrice(price);
}
Magazin:: ~Magazin(){}
void Magazin:: setName(string name){
    m_name = name;
}
void Magazin:: setBrand(string brand){
    m_brand = brand;
}
void Magazin::setModel(string model){
    m_model = model;
}
void Magazin:: setQuantity(int quantity){
    m_quantity = quantity;
}
void Magazin:: setPrice(int price){
    m_price = price;
}

string Magazin:: getName(){
    return m_name;
}
string Magazin:: getBrand(){
    return m_brand;
}
string Magazin:: getModel(){
    return m_model;
}
int  Magazin::  getQuantity(){
    return m_quantity;
}
int  Magazin::  getPrice(){
    return m_price;
}


void Magazin:: printInfo(){
    cout << getName()<<"/"<<getBrand()<<"/"<<getModel()<<"/"<<getPrice()<<"/"<< getQuantity()<< endl;
}

