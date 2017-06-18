//
//  Delivery.hpp
//  Nasledqvane_Dostavka_na_Pica
//
//  Created by Pepi on 4/20/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Delivery_hpp
#define Delivery_hpp
#include "Client.hpp"
#include "Pizza.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;


class Delivery{
    
    
public:
    Delivery();
    Delivery(string,Client&,vector<Pizza>);
    Delivery(string , Client&);
    
    void setName(string);
    string getName();
    void showClient(Client&);
    
    
   void showPizzes();
   void addPizza(string, int);
   void deliveryinfo();
   void calculatePrice();
   void showClientInfo();
   
   
    
private:
    string name;
    Client client1;
  //  Pizza  arrPizza[3];
    vector <Pizza> pizzes;

    static double deliveryTax;
    
 
};



#endif /* Delivery_hpp */
