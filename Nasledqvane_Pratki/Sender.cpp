//
//  Sender.cpp
//  Nasledqvane_Pratki
//
//  Created by Pepi on 5/2/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Sender.hpp"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

Sender::Sender(){}
Sender::Sender( string fName , string lName , class Address& addr , string bulstat):Client(fName,lName,addr){
    this -> bulstat = bulstat;
}


void Sender::setBulstat(string bulstat){
    this -> bulstat = bulstat;
}
string Sender::getBulstat(){
    return this -> bulstat;
}




void Sender::printInvoice(){
    cout << Client::getFName();
    
   
    cout << bulstat;
    cout<<"()()()()()";
    
    
    
}










