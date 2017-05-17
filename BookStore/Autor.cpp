//
//  Autor.cpp
//  Nasledqvane_Kompoziciq_BookStore_New
//
//  Created by Pepi on 5/16/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Autor.hpp"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

Autor::Autor(){}
Autor::Autor(string fName , string lName , string country){
    m_fName = fName;
    m_lName = lName;
    m_country = country;
    
    
}

Autor::~Autor(){}



void Autor::setFName(string fName){
    m_fName = fName;
}
void Autor::setLname(string lName){
    m_lName = lName;
}
void Autor::setCountry(string country){
    m_country = country;
}


string Autor::getFName(){
    return m_fName;
}
string Autor::getLName(){
    return m_lName;
}
string Autor::getCountry(){
    return m_country;
}

void Autor::printAutorInfo(){
    cout << getFName()<<endl;
    cout << getLName()<<endl;
    cout << getCountry()<<endl;
}
