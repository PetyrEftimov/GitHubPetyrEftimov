//
//  Athletes.cpp
//  Nasledqvane_Atleti
//
//  Created by Pepi on 5/2/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Athletes.hpp"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

Athletes::Athletes(string fName,string lName,string country, double bestOf){
    m_fName   = fName;
    m_lName   = lName;
    m_country = country;
    m_bestOf  = bestOf;
}

Athletes::~Athletes()
{
    
}

void Athletes::setFName(string fName){
    m_fName = fName;
}
void Athletes::setLName(string lName){
    m_lName = lName;
}
void Athletes::setCountry(string country){
    m_country = country;
}
void Athletes::setBestOf(double bestOf){
    m_bestOf = bestOf;
}

string Athletes::getFName(){
    return  m_fName;
}
string Athletes::getLName(){
    return m_lName;
}
string Athletes::getCountry(){
    return  m_country;
    }
double Athletes::getBestOf(){
    return m_bestOf;
}

void Athletes::printInfo(){
    cout << m_fName << endl ;
    cout << m_lName << endl ;
    cout << m_country << endl ;
    cout << m_bestOf << endl ;
}
