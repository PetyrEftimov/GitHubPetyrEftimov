//
//  Shop.hpp
//  Kontrolno_Magazin
//
//  Created by Pepi on 5/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Shop_hpp
#define Shop_hpp
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "Produckt.hpp"
using namespace std;
class Shop{
public:
    Shop();
    
   
    
    void serachByPrice(int price);
    void statisticByType();
    void showProduckt();
    void addObjektProduckt(Produckt&);
   // void addManifacturer(Manufacturer&);
    void addProduckt(Produckt&);
    
    
private:
    
    vector<Produckt> produckts;
  //  vector<Manufacturer> manifacturers;
    
};

#endif /* Shop_hpp */
