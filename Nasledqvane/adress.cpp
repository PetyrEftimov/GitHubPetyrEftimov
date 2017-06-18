//
//  adres.cpp
//  Nasledqvane
//
//  Created by Pepi on 4/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
#include <iostream>
#include "adress.hpp"
using namespace std;


Adress::Adress(){
    
}

Adress::Adress(int poust ,string town,string country){
    
    this -> poust = poust;
    this -> town = town;
    this -> country = country;
    
}



void Adress::setPoust(int){
}
void Adress::setTown(string){}
void Adress::setCountry(string){}



int Adress::getPoust(){
    return this -> poust;
    
}
string Adress::getTown(){
    return this -> town;
}
string Adress::getCountry(){
    return this-> country;
}


void Adress::printInfo(){
    
    cout<< getPoust();
    cout << getTown();
    cout << getCountry();
    
    
}


