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

Adress::Adress(int poust ,string town,string country,string street, int floor){
    
    this -> poust = poust;
    this -> town = town;
    this -> country = country;
    this -> street = street;
    this -> floor = floor;
    
    
}



void Adress::setPoust(int){}
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

string Adress::getStreet(){
    return this -> street;
}
int Adress::getFloor(){
    return this -> floor;
}


void Adress::printInfo(){
    
    cout<< getPoust()<< endl;
    
    cout << getTown()<<endl;
    cout << getCountry()<<endl;
    cout << getStreet()<< endl;
    cout << getFloor()<< endl;
    
}


