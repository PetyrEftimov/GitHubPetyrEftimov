//
//  Shipment.hpp
//  Nasledqvane_Pratka
//
//  Created by Pepi on 4/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Shipment_hpp
#define Shipment_hpp

#include <stdio.h>
#include "Reciver.hpp"
#include <iostream>
#include <string>
using namespace std;




class Shipment{
    
public:
    Shipment();
    
    Shipment(  int , int , Reciver& );
    
    
    void setWeight(int);
    void setPrice(int);
    
    int getWeight();
    int getPrice();
    
        
        
        
    
    
    void shipInfo();
    
    
    
private:
    
    int weight;
    int price;
    Reciver Reciver;
    
    
    
    
    
};

















#endif /* Shipment_hpp */
