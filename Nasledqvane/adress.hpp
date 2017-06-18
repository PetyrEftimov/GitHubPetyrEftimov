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

#include <stdio.h>
using namespace std;

class Adress{
    public :
    
    Adress();
    Adress(int , string , string);
    
 //   virtual ~ Adress();
    
    
    void setPoust(int);
    void setTown(string);
    void setCountry(string);
    
    
    
    int getPoust();
    string getTown();
    string getCountry();
    
    
   void printInfo();
    
    
    
    
    
    
    
    
    
    
    
    
private:
    
    int poust ;
    string town;
    string country;
    
    
    
    
    
    
    
    
    
    
    
    
    
};













#endif /* adres_hpp */
