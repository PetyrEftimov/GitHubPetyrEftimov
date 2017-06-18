//
//  InOffice.cpp
//  Kontrolno_Z3
//
//  Created by Pepi on 5/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "InOffice.hpp"
#include <string>
#include <vector>
#include <iostream>
#include "Course.hpp"

InOffice::InOffice(){}
InOffice::InOffice(string name , int number  ,int time,int basePrice , string type ,string address , int zala):Course(name,number,time,basePrice){
    m_type = type;
    m_address = address;
    m_zala = zala;
}
InOffice::~InOffice(){}

void InOffice:: setType(string type){
    m_type = type;
}
void InOffice:: setAddress(string address){
    m_address = address;
}
void InOffice:: setZala(int zala){
    m_type = m_type;
}

string InOffice:: getType(){
    return m_type;
}
string InOffice:: getAddress(){
    return m_address;
}
int InOffice:: getZala(){
    return m_zala;
}



void InOffice:: courseInfo(){
    cout << getName()<<";"<<getNumber()<<";"<<getTime()<<";"<<getType()<<";"<<getAddress()<<";"<<getZala()<<endl;
}
