//
//  adres.hpp
//  Nasledqvane
//
//  Created by Pepi on 4/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
#include <iostream>
#ifndef adress_hpp
#define adress_hpp
#include <string>

#include <stdio.h>
using namespace std;

class Adress{
    public :
    
    Adress();
    Adress(int , string , string, string , int);
    
    //   virtual ~ Adress();
    
    
    void setPoust(int);
    void setTown(string);
    void setCountry(string);
    void setStreet(string);
    void setFloor(int);
    
    
    
    int getPoust();
    string getTown();
    string getCountry();
    string getStreet();
    int    getFloor();
    
    
    void printInfo();
    
    
    
    
    
    
    
    
private:
    
    int     poust ;
    string  town;
    string  country;
    string  street;
    int     floor;
    
    
    
    

    
    
};






#endif /* adres_hpp */
