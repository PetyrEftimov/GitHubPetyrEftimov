//
//  Delivery.cpp
//  Nasledqvane_Dostavka_na_Pica
//
//  Created by Pepi on 4/20/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Delivery.hpp"
#include "Client.hpp"
#include "Pizza.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;

double Delivery::deliveryTax = 2;

Delivery::Delivery(){}
Delivery::Delivery(string name , class Client&,vector<Pizza>):client1(){
    this -> name = name;
    
}
Delivery::Delivery(string name , class Client&):client1(){
    
    this -> name =name;
}


void Delivery::showClient(class Client & ){
    
    cout<< client1.getFirstName();
    cout << client1.getLastName();
  
}

void Delivery::setName(string){}
string Delivery::getName(){
    return this -> name;
}

void Delivery::deliveryinfo(){
    cout<<"Provider Name " <<getName();
    cout<<endl;
    
}


void Delivery::addPizza(string name, int price ){
    Pizza pizzas1(name,price);
    pizzes.push_back(pizzas1);
    
}




void Delivery::calculatePrice(){
    int sum = 0;
  //  for (size_t = 0 ; size_t < 3 ; size_t++) {
        
      //  sum+=manyPizzas[i].getPizzPrice();
 //   }
    
    for (size_t i = 0 ; i < pizzes.size() ; i++) {
        sum += pizzes.at(i).getPizzPrice();
    }
    sum = sum+deliveryTax;
    cout <<"Delivery Sum is :"<<sum;
    cout << endl ;



}

void Delivery::showPizzes(){
    for(int i = 0;(int) i< pizzes.size(); i++){
        cout << pizzes.at(i).getPizzaName() <<endl;
        cout << pizzes.at(i).getPizzPrice() <<endl;
       
        
    }
}

void Delivery::showClientInfo(){
    cout <<client1.getFirstName();
    
       cout <<client1.getLastName();
    
}



