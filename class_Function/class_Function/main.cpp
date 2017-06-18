//
//  main.cpp
//  class_Function
//
//  Created by Pepi on 4/15/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include "Function1.hpp"
using namespace std;
int main(){
    
    
    
        int a = 4;
        int b = 5;
        string c = " :)";
const   double d = 3.14;
        double produckt ;
    
    
    
    Function1 ob1(   a , b  , c,  d);
    Function1 ob2(a,b, c ,d );
    Function1 ob3(a,b,c,d);
    Function1 ob4(a,b,c,d);
    produckt = ob1.showProduckt(a, b , d );
    
    cout << produckt<< endl ;
    
    
    bool isBig  = ob2.isAisBig(a, b);
    
    
    cout << isBig<< endl ;
  //  return true;
    
    produckt = ob3.arrayOfCircle(a, d);
    
    cout << produckt<<endl ;
    
   produckt = ob4.Produkt(a, b);
    
   cout << produckt;

    return 0;
}
