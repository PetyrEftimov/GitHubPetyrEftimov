//
//  Screening.cpp
//  Map_Cinema_Kontrolno
//
//  Created by Pepi on 6/3/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Screening.hpp"
Screening::Screening(){}
Screening::Screening(string filmName , string hall , int capacyty , int soldTiket , int price , int id)
{
    m_filmName=filmName;
    m_hall=hall;
    m_capacyty=capacyty;
    m_soldTicket=soldTiket;
    m_price=price;
    m_id=id;
}

Screening:: ~Screening()
{
    
}

void Screening:: setFilmName(string filmName)
{
    m_filmName = filmName;
}
void Screening:: setHall(string hall)
{
    m_hall = hall ;
}
void Screening:: setCapacyty(int capacyty)
{
    m_capacyty = capacyty;
}
void Screening:: setSoldTiket(int soldTiket)
{
    m_soldTicket = soldTiket;
}
void Screening:: setPrice(int price)
{
    m_price = price;
}
void Screening:: setId(int id)
{
    m_id = id ;
}

string Screening:: getFilmName()
{
    return m_filmName;
}
string Screening:: getHall()
{
  return   m_hall;
}
int  Screening::   getCapacyty()
{
    return m_capacyty;
}
int Screening::    getSoldTiket()
{
    return m_soldTicket;
}
int  Screening::   getPrice()
{
    return  m_price;
}
int Screening::    getId()
{
    return m_id;
}

void Screening:: ScreeningInfo()
{
    cout<<"Movie Name: " << getFilmName()<<", Price : "<<getPrice()<<"  :  "<<getSoldTiket()<<"  :  "<<getCapacyty()<<" : "<<getHall()<<endl;
}
