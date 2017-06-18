//
//  Function.hpp
//  class_Function
//
//  Created by Pepi on 4/15/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Function1_hpp
#define Function1_hpp
#include <iostream>
#include <string>

#include <stdio.h>

#endif /* Function1_hpp */
using namespace std;

class Function1{
    
public:
    
    Function1();
    
    Function1(int , int , string  , double);
    
    void setA(int);
    void setB(int);
    void setC(string);
    void setD(double);
    
    
    
    int getA();
    int getB();
    string getC();
    double getD();
    
    
    
    
    int showProduckt(int a , int b , double d );
    void showString();
    bool isAisBig(int a , int b );
    double arrayOfCircle(int a , double d);
  
    template <class produ>
    produ Produkt(produ a , produ b ){
        
        produ produkt ;
        
        produkt = a* b ;
        
        cout <<produkt<< ":)" << endl ;
        
        return produkt;
        
        
        
    };
    
    
    
    
    
    
    private :
    
    int a ;
    int b ;
    string c ;
    double d ;
   
    
    
};

