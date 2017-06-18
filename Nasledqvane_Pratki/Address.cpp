//
//  Address.cpp
//  Nasledqvane_Pratki
//
//  Created by Pepi on 4/28/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Address.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

Address::Address(){}
Address::Address(string country,string city,string street,int zip){
    this -> country = country;
    this -> city    = city;
    this -> street  = street;
    this -> zip     = zip;
}


void Address::setCountry(string country){
    this -> country = country;
}
void  Address::setCity(string city){
    this -> city = city;
}
void Address::setStreet(string street){
    this -> street = street;
}
void Address::setZip(int zip){
    this -> zip = zip;
}

string Address::getCountry(){
    return this -> country;
}
string Address::getCity(){
    return this -> city;
}
string Address::getStreet(){
    return this -> street;
}
int  Address::getZip(){
    return this -> zip;
}

void Address::printAddress(){
    cout << getCountry()<<endl;
}

istream& operator >>(istream &input , Address& adr){
    // bg - sofia : lulin   #1324
    input>>setw(2) >> adr.country;
    input.ignore(1);
    input>>setw(5)>>adr.city;
    input.ignore(3);
    input>>setw(5)>>adr.street;
    input.ignore(2);
    input>>setw(4)>>adr.zip;
    
    
    
    return input;
    
}

ostream& operator << (ostream& output , const Address& adr){
 //   sofia : bg : 1324 - lulin
    
    output <<adr.zip << ":"<<adr.city << ":" <<adr.country<<"-"<<adr.street;
    
    return output;
}


