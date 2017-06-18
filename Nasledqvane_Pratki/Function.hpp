//
//  Function.hpp
//  Nasledqvane_Pratki
//
//  Created by Pepi on 4/30/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Function_hpp
#define Function_hpp
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "Packaje.hpp"
using namespace std;
class Function:public Packaje{
    
public:
    Function();
     void searchByZipCode1(vector<Packaje> , int);
     void searchBySenderFName(vector<Packaje> , string);
     void searchByReciverFname(vector<Packaje> , string);
     void senderReciverAtSameTime(vector<Packaje> , string , string);
     double priceOfAllPakajes(vector<Packaje>);
    

   
    
};


#endif /* Function_hpp */
