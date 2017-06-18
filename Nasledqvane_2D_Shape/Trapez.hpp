//
//  Trapez.hpp
//  Nasledqvane_2D_Shape
//
//  Created by Pepi on 4/22/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Trapez_hpp
#define Trapez_hpp
#include <stdio.h>
#include "Shape_2D.hpp"
#include <iostream>
#include <string>
using namespace std;

class Trapez : public Shape_2D {
public:
    Trapez();
    Trapez(int , int ,string , int ,int );
    
    
    void setD(int);
    void setF(int);
    int  getD();
    int  getF();
    
    
    
   
    void printInfo();
  virtual  int  calculateArrea();

private:
    int d;
    int f;
    
    
    
    
};


#endif /* Trapez_hpp */
