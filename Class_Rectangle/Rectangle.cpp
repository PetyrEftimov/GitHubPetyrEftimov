//
//  Rectangle.cpp
//  Class_Rectangle
//
//  Created by Pepi on 4/18/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
#include <cmath>
#include "Rectangle.hpp"
using namespace std;


Rectangle::Rectangle(){}

Rectangle::Rectangle(int pointx1 , int pointx2,int pointx3 , int pointx4,int pointy1 , int pointy2,int pointy3 , int pointy4){
    
    
    setRectangle(pointx1,pointx2 , pointx3, pointx4, pointy1, pointy2, pointy3, pointy4);
    
}


void Rectangle::setRectangle( int pointx1,  int pointx2,int  pointx3, int pointx4, int pointy1, int pointy2, int pointy3, int pointy4){
    
    
    
    this->pointx1 =(pointx1 > 0 && pointx1 < 20 ) ? pointx1 : 0 ;
    this->pointx2 =(pointx2 > 0 && pointx2 < 20 ) ? pointx2 : 0 ;
    this->pointx3 =(pointx3 > 0 && pointx3 < 20 ) ? pointx3 : 0 ;
    this->pointx4 =(pointx4 > 0 && pointx4 < 20 ) ? pointx4 : 0 ;
    this->pointy1 =(pointy1 > 0 && pointy1 < 20 ) ? pointy1 : 0 ;
    this->pointy2 =(pointy2 > 0 && pointy2 < 20 ) ? pointy2 : 0 ;
    this->pointy3 =(pointy3 > 0 && pointy3 < 20 ) ? pointy3 : 0 ;
    this->pointy4 =(pointy4 > 0 && pointy4 < 20 ) ? pointy4 : 0 ;
    
    
    
    
    
    
}

int  Rectangle::calculeteLenght(){
    
    
   return pointx2 - pointx1;
}

int Rectangle::calculateWidth(){
    
return (pointy3 - pointy1);
}

int Rectangle::perimeter(){
    return 2*(calculeteLenght()+ calculateWidth());
}

int Rectangle::arrea(){
    
    return (calculeteLenght()*calculateWidth());
}



Rectangle::~Rectangle(){
  // destructor
}

