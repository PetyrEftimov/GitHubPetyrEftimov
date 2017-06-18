//
//  main.cpp
//  Predfinirani_Operatori_Box_New
//
//  Created by Pepi on 5/17/17.
//  Copyright © 2017 Pepi. All rights reserved.
//


#include <iostream>
#include "Box.hpp"
using namespace std;

int main() {
    
    Box a;
    Box b;
    Box c;
    cin >> a;
    cin >> b;

    
    if(a == b){
        cout << "equals";
    }else{
        
        cout << "not equals";
    }
    
 
    if (a != b) {
        cout << "is not equals";
    }
    else{
        cout << "is equals";
    }
  
    
    c = a+b;
    cout << c;
    
    if (a > b) {
        cout << "A is bigger";
    }
    else{
       cout <<"B is bigger";
    }
    
    
    return 0;
}
