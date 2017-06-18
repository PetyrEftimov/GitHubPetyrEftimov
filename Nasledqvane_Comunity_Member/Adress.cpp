//
//  Adress.cpp
//  Nasledqvane_Comunity_Member
//
//  Created by Pepi on 4/24/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Adress.hpp"
#include <iostream>
#include <string>
using namespace std;


Adress::Adress(){}
Adress::Adress(int id, string street,int number){
    
    this -> id = id;
    this -> street = street;
    this -> number = number;
    
    
}


void Adress::setId(int){}
void Adress::setStreet(string){}
void Adress::setNumber(int){}


int Adress::getId(){
    return this-> id;
}
string Adress::getStreet(){
    return this->street;
}
int Adress::getNumber(){
    return this-> number;
}

void Adress::showAdress(){
    
    cout<<"Id is : "<<getId();
    cout<<endl;
    cout<<"Street is : "<<getStreet();
    cout<<endl;
    cout <<"Street num is : "<<getNumber();
    cout<<endl;
}


