//
//  Shape_2D.hpp
//  Nasledqvane_2D_Shape
//
//  Created by Pepi on 4/21/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Shape_2D_hpp
#define Shape_2D_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;



class Shape_2D{
    
public:
    Shape_2D();
    Shape_2D(int , int ,string);
    
    
    void setA(int);
    void setB(int);
    void setColor(string);
    
    int getA();
    int getB();
    string getColor();
    
    
     virtual void printInfo() = 0;
    virtual  int calculateArrea() = 0;
  // virtual int calculatePerimeter();

    
private:
    int a ;
    int b ;
    string color ;
    
    
};
















#endif /* Shape_2D_hpp */
