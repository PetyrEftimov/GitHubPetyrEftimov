//
//  Address.hpp
//  Nasledqvane_Kompoziciq_Employee
//
//  Created by Pepi on 4/24/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Address_hpp
#define Address_hpp
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Address{
public:
    Address();
    Address(string , string ,int);
    
    void setTown(string);
    void setStreet(string);
    void setNumber(int);
    
    string getTown();
    string getStreet();
    int    getNumber();
    
    void printAddress();
    
private:
    string town;
    string street;
    int    number;
    
    
    
};




#endif /* Address_hpp */
