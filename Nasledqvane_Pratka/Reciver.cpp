//
//  Reciver.cpp
//  Nasledqvane_Pratka
//
//  Created by Pepi on 4/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Reciver.hpp"
#include "adress.hpp"
#include <iostream>
#include <string>
using namespace std;




Reciver::Reciver(){
    
}

Reciver::Reciver(string name , string methodOfPayment,class Adress& adress):Adress(adress){
    
    this -> name = name;
    this -> methodOfPayment = methodOfPayment;
  //  this -> Adress1 = adress;
    
    
    
}


void Reciver::setName(string){}
void Reciver::setMethodOfPayment(string){}
//void Reciver::setAderss(adress){}



string Reciver::getName(){
    return this-> name;
}
string Reciver::getMethodOfPayment(){
    return this -> methodOfPayment;
}



void Reciver::printReciverInfo(){
    
    cout << name<<endl;
    cout << methodOfPayment<<endl;
    Adress.printInfo();
    
}








