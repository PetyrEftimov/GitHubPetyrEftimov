//
//  Pizza.hpp
//  Nasledqvane_Dostavka_na_Pica
//
//  Created by Pepi on 4/20/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Pizza_hpp
#define Pizza_hpp
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;

class Pizza{
    
public:
    Pizza();
    Pizza(string , int );
    void setPizzaName(string);
    void setPizzaPrice(int);
    
    string getPizzaName();
    int    getPizzPrice();
    
    void pizzaInfo();
    
    
    
    
private:
    string pizzaName;
    int    pizzaPrice;

    
};





#endif /* Pizza_hpp */
