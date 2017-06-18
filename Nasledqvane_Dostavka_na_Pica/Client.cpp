//
//  Client.cpp
//  Nasledqvane_Dostavka_na_Pica
//
//  Created by Pepi on 4/20/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
#include <iostream>
#include "Client.hpp"
#include <vector>
#include "Adress.hpp"
#include <string>
#include <stdio.h>
#include <string>
using namespace std;


Client::Client(){}
Client::Client(string firstName, string lastName, vector<Adress> adr){
  
    this -> firstName = firstName;
    this -> lastName  = lastName;
}


void Client::setFirstName(string){}
void Client::setLasName(string){}
string Client::getFirstName(){
    cout << this -> firstName;
    return this -> firstName;
}
string Client::getLastName(){
    cout<<this->lastName;
    return this -> lastName;
}

void Client::showName(){
    cout <<"Client Firs Name is : " <<getFirstName();
    cout <<endl;
    cout <<"Client Last Name is : " <<getLastName();
    cout <<endl;
}


void Client::addAdress(int id, string street, int number){
    Adress adres(id,street,number);
    adreses.push_back(adres);
}



void Client::showAddresses(){
    for(int i = 0;(int) i< adreses.size(); i++){
        cout << adreses.at(i).getId() <<endl;
        cout << adreses.at(i).getStreet()<<endl;
        cout << adreses.at(i).getNumber()<<endl;
        
    }
}















//void Client::addAdress(Adress & adr){
 //   adreses.push_back(adr);
    
