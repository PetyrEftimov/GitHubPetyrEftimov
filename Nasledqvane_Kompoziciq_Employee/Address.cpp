//
//  Address.cpp
//  Nasledqvane_Kompoziciq_Employee
//
//  Created by Pepi on 4/24/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Address.hpp"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

Address::Address(){}
Address::Address(string town , string street ,int number){
    this -> town = town;
    this -> street = street;
    this -> number = number;
    }

void Address::setTown(string town){
    this -> town = town;
}
void Address::setStreet(string street){
    this -> street = street;
}

void Address::setNumber(int number){
    this -> number = number;
}

string Address::getTown(){
    return  this -> town;
}

string Address::getStreet(){
    return this -> street;
}

int Address::getNumber(){
    return this -> number;
}

void Address::printAddress(){
    cout << getTown()<<endl;
    cout << getStreet()<<endl;
    cout << getNumber()<<endl;
    
    
}
