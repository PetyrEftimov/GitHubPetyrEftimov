//
//  LuxoryCar.hpp
//  Nasledqvane_Car
//
//  Created by Pepi on 4/26/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef LuxoryCar_hpp
#define LuxoryCar_hpp
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "FamilyCar.hpp"
using namespace std;
class LuxoryCar:public FamilyCar{
    
public:
    LuxoryCar(int , int,Car&,int);
    LuxoryCar();
    
    void setExtry(int);
    int  getExtry();
    
    double luxFinalPrice();
    void   luxInfo();
    
    
private:
    
    int extry ;
    
    
};

#endif /* LuxoryCar_hpp */
