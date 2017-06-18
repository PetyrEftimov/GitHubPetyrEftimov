//
//  Function.cpp
//  class_Function
//
//  Created by Pepi on 4/15/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include "Function1.hpp"
using namespace std;


Function1::Function1(){};

Function1::Function1(int a , int b , string c , double d ){
    
    this -> a = a ;
    this -> b = b ;
    this -> c = c ;
    this -> d = d ;
    
    
    
    
};


void  Function1::setA(int a ){
    this -> a = a ;
}
void Function1::setB(int b ){
    this-> b = b ;
}
void Function1::setC(string d ){
    this -> c = c ;
}

void Function1::setD(double d ){
    this-> d = d ;
}



int Function1::getA(){
    return this -> a ;
}

int Function1::getB(){
    return this -> b ;
}

string  Function1::getC(){
    return this -> c ;
}

double Function1::getD(){
    return  this -> d ;
}


int Function1::showProduckt(int a , int b , double  d ){
    int produkt;
    
    
    produkt = (a*b)*d;
    
    

    
    return produkt;
}

bool Function1::isAisBig(int a , int b  ){
    
    if (a > b) {
        return true;
    }
    
    
    
    return false;
}

double Function1::arrayOfCircle(int a, double d){
    
    double arrCircle;
    
    arrCircle=a*(d*d);
    
 
    
  
    return arrCircle;
}










