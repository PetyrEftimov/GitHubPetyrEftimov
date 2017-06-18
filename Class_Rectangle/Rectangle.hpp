//
//  Rectangle.hpp
//  Class_Rectangle
//
//  Created by Pepi on 4/18/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp
#include <cmath>
#include <stdio.h>
using namespace std;

class Rectangle{
    
public:
    
    Rectangle();
    Rectangle(int,int,int,int,int,int,int,int);
    
    
    
/*
    void setPointx1(int);
    void setPointy1(int);
    void setPointx2(int);
    void setPointy2(int);
    void setPointx3(int);
    void setPointy3(int);
    void setPointx4(int);
    void setPointy4(int);
    
    
    
    int getPointx1();
    int getPointy1();
    int getPointx2();
    int getPointy2();
    int getPointx3();
    int getPointy3();
    int getPointx4();
    int getPointy4();
    
 */
    
    void setRectangle(int,int,int,int,int,int,int,int);
    
    
    int  calculeteLenght();
    int  calculateWidth();
    int  perimeter();
    int  arrea();
    
    
    
  virtual ~ Rectangle();
private:
    
    int pointx1;
    int pointy1;
    int pointx2;
    int pointy2;
    int pointx3;
    int pointy3;
    int pointx4;
    int pointy4;
    
    
    
};



















#endif /* Rectangle_hpp */
