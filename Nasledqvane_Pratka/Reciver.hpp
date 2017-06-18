//
//  Reciver.hpp
//  Nasledqvane_Pratka
//
//  Created by Pepi on 4/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Reciver_hpp
#define Reciver_hpp
#include "adress.hpp"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


class Reciver {
public:
    Reciver();
    Reciver(string , string , Adress&);

    void setName(string);
    void setMethodOfPayment(string);
  //  void setAderss(Adress);
    
    
    string getName();
    string getMethodOfPayment();
    
    
    
    void printReciverInfo();
    

private:
    string name;
    string methodOfPayment;
    Adress Adress;

    
};


























#endif /* Reciver_hpp */
