//
//  Client.cpp
//  Nasledqvane_Pratki
//
//  Created by Pepi on 4/28/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Client.hpp"
#include <iostream>
#include <vector>
#include <string>
#include "Address.hpp"
using namespace std;


Client::Client(){}
Client::Client(string fName , string lName , class Address& addr):addr(addr){
    this -> fName = fName;
    this -> lName = lName;
}


void Client::setFName(string fName){
    this -> fName = fName;
}
void Client::setLName(string lName){
    this -> lName = lName;
}

string Client::getFName(){
    return  this -> fName;
}
string Client::getLName(){
    return  this -> lName;
}

void Client::clientPrintName(){
    cout << getFName()<<endl;
    cout << getLName()<<endl;
}
void Client::clientAddress(){
    cout<<addr.getCountry()<<endl;
    cout<<addr.getCity()<<endl;
    cout<<addr.getStreet()<<endl;
    cout<<addr.getZip()<<endl;
}
int Client::clientZipCode(){
    cout<<addr.getZip()<<endl;
    return addr.getZip();
}

string Client::clientName(){
    cout << getFName()<<endl;
    return fName;
}




