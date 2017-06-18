//
//  Address.hpp
//  Nasledqvane_Pratki
//
//  Created by Pepi on 4/28/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Address_hpp
#define Address_hpp
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Address{
    friend istream &operator >> (istream& , Address&);
    friend ostream &operator << (ostream& ,const Address&);
    
public:
    Address();
    Address(string , string , string , int );
    
    void setCountry(string);
    void setCity(string);
    void setStreet(string);
    void setZip(int);
    
    string getCountry();
    string getCity();
    string getStreet();
    int    getZip();
    
    void printAddress();
    
    
private:
    string country;  // bg
    string city;    // sofia
    string street;   // lulin
    int zip;        // 1324
    //  bg - sofia : lulin #1324
     // cin >> myAddress;
};


#endif /* Address_hpp */
