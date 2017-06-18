//
//  main.cpp
//  Class_Rectangle
//
//  Created by Pepi on 4/18/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include "Rectangle.hpp"
using namespace std;

int main(){
    
    
    Rectangle rect1(2,12,2,12,2,2,16,16);
    Rectangle rect2 (2,14,2,14,2,2,18,18);
    cout << rect1.arrea();
    
    

   Rectangle &rectRef = rect1;
   cout << rectRef.perimeter()<<endl ;
    
    
    Rectangle *rectPtr = &rect1;
    
    cout <<rectPtr -> calculeteLenght();
    
    Rectangle arrRect[2] = {rect1,rect2};
    
    Rectangle *arrRectPtr[2];
    
    arrRectPtr[0] = &rect1;
    arrRectPtr[1] = &rect2;
    
    for (int i = 0 ; i < 2 ; i++) {
        cout << arrRectPtr[i] -> arrea()<< endl ;
    }
    
    

    return 0;
}
