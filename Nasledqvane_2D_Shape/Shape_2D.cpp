//
//  Shape_2D.cpp
//  Nasledqvane_2D_Shape
//
//  Created by Pepi on 4/21/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Shape_2D.hpp"
#include <iostream>
#include <string>
using namespace std;

Shape_2D::Shape_2D(){}
Shape_2D::Shape_2D(int a , int b ,string color){
    
    this -> a = a ;
    this -> b = b ;
    this -> color = color ;
    

    
    }


void Shape_2D::setA(int a){
    this -> a = a;
}
void Shape_2D::setB(int b){
    this -> b = b ;
}
void Shape_2D::setColor(string color){
    this -> color = color;

}


int Shape_2D::getA(){
    return this->a;
}
int Shape_2D::getB(){
    return this->b;
}
string Shape_2D::getColor(){
    return this-> color;
}


int Shape_2D::calculateArrea(){
    
    int area1 = 0;
    
    area1 = getA()+getB();
    
    return area1 ;
}
