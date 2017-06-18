//
//  Trapez.cpp
//  Nasledqvane_2D_Shape
//
//  Created by Pepi on 4/22/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Trapez.hpp"
#include <iostream>
#include <string>
using namespace std;

Trapez::Trapez(){}

Trapez::Trapez(int a , int b , string color , int d , int f ):Shape_2D(a,b,color){
    this-> d = d;
    this-> f = f;
    
}

void Trapez::setD(int d){
    this -> d = d ;
}
void Trapez::setF(int f){
    this  -> f = f ;
}
int Trapez::getD(){
    return this -> d ;
}
int Trapez::getF(){
    return  this -> f ;
}

void Trapez::printInfo(){
    cout <<" info Trapez is : ";
    cout << getA();
    cout << getB();
    cout << getColor();
    cout << getD();
    cout << getF();
    
    
    
}

int Trapez::calculateArrea(){
    int arrea1 = 0 ;
    
    arrea1 = getA()+getB()+getD()+getF();
    
    return arrea1;
}




