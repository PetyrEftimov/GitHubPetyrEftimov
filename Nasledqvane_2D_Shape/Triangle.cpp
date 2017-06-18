//
//  Triangle.cpp
//  Nasledqvane_2D_Shape
//
//  Created by Pepi on 4/21/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Triangle.hpp"
#include "Shape_2D.hpp"
#include <iostream>
#include <string>
using namespace std;

Triangle::Triangle(){};
Triangle::Triangle( int a , int b,string color , int c ):Shape_2D(a,b,color){
    
   // setA(a);
   /// setB(b);
   // setColor(color);
    setC(c);
    
}


//void Triangle::setA(int){}
//void Triangle::setB(int){}
//void Triangle::setColor(string){}
void Triangle::setC(int c){
    this ->c = c;
}

int Triangle::getC(){
    return this-> c;
}


//int Triangle::calculatePerimeter(){
    
    
 //   return Shape_2D::getA()+Shape_2D::getB()+getC();

    
//    }



void Triangle::printInfo(){
    cout << Shape_2D::getA()<<endl;
    cout << getB()<<endl;
    cout << getColor()<<endl;
    cout <<getC()<<endl;
}

    int Triangle::calculateArrea(){
    int  arrea = 0 ;
     arrea = getA() + getB() + getC() ;
     
     return arrea;
    
 
    
}
