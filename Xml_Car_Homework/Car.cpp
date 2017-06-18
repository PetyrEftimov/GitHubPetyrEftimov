//
//  Car.cpp
//  Xml_Car_Homework
//
//  Created by Pepi on 5/28/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Car.hpp"
Car:: Car(){}
Car:: Car(string brand , int price , int id ){
    setBrand( brand);
    setPrice(price);
    setId(id);
}

void Car:: setBrand(string brand)
{
    m_brand = brand;
}
void Car:: setPrice(int price)
{
    m_price = price;
}
void Car:: setId(int id)
{
    m_id = id;
}

string Car:: getBrand()
{
    return m_brand;
}
int Car:: getPrice(){
    return m_price;
}

int Car:: getId()
{
    return m_id;
}

Car:: ~Car()
{
    
}


void Car:: Info()
{
    cout << getBrand()<<" / "<<getPrice()<<" / "<<getId()<<endl;
    
}
