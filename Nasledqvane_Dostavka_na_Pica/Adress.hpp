//
//  Adress.hpp
//  Nasledqvane_Dostavka_na_Pica
//
//  Created by Pepi on 4/20/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Adress_hpp
#define Adress_hpp
#include <iostream>
using namespace std;

#include <stdio.h>



class Adress{
    
public:
    Adress();
    Adress(int , string , int );
    
    
    void setId(int);
    void setStreet(string);
    void setNumber(int);
    
    
    int getId();
    string getStreet();
    int getNumber();
    
    void showAdress();
    
    
    
    
private:
    int id;
    string street;
    int number;
    
    
    
    
    
};


















#endif /* Adress_hpp */
