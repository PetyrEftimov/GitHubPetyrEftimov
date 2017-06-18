//
//  Triangle.hpp
//  Nasledqvane_2D_Shape
//
//  Created by Pepi on 4/21/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Triangle_hpp
#define Triangle_hpp
#include "Shape_2D.hpp"
#include <iostream>
#include <string>
using namespace std;



#include <stdio.h>


class Triangle:public Shape_2D{
    
    
    public :
    Triangle();
    Triangle( int ,int , string , int  );
    
    
  //  void setA(int);
  //  void setB(int);
   // void setColor(string);
    void setC(int);
    
   // int getA();
  //  int getB();
  //  string getColor();
    int getC();
    
  //virtual int calculatePerimeter();
     virtual int calculateArrea();
    
   virtual void printInfo() ;
    
private:
    int c;
};


















#endif /* Triangle_hpp */
