//
//  TwoDayPackage.hpp
//  Nasledqvane_Pratki
//
//  Created by Pepi on 4/30/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef TwoDayPackage_hpp
#define TwoDayPackage_hpp
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "Packaje.hpp"
using namespace std;

class TwoDayPackage : public Packaje{
public:
    TwoDayPackage();
    TwoDayPackage( double , double ,  Client& ,  Client& , double );
    
    void setTwoDayPackage(double);
    double getTwoDayPackage();
    
 double calculateTwoDayPackageCost();
    
    
private:
    double twoDayDelivery;
    
};




#endif /* TwoDayPackage_hpp */
