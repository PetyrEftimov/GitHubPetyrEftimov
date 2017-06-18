//
//  Pizza.cpp
//  Nasledqvane_Dostavka_na_Pica
//
//  Created by Pepi on 4/20/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Pizza.hpp"
#include "Delivery.hpp"
#include <iostream>
#include <string>
#include <vector>

Pizza::Pizza(){}
Pizza::Pizza(string pizzaName , int pizzaPrice ){
    this->pizzaName  = pizzaName;
    this->pizzaPrice = pizzaPrice;
    
}

void Pizza::setPizzaName(string){}
void Pizza::setPizzaPrice(int){}

string Pizza::getPizzaName(){
    return this->pizzaName;
}
int  Pizza::getPizzPrice(){
    return this->pizzaPrice;
}

void Pizza::pizzaInfo(){
    cout <<"Pizza name is : " << getPizzaName();
    cout << endl;
    cout <<"Pizza Price is : " << getPizzPrice();
    cout << endl;
}

