//
//  HugeInteger.hpp
//  HugeInteger_Domashno_18.04
//
//  Created by Pepi on 4/18/17.
//
//

#ifndef HugeInteger_hpp
#define HugeInteger_hpp
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

static const int arrSize = 5;



class hugeInteger{
    
public:
    hugeInteger();
    virtual  ~ hugeInteger();
    
    void inputIneger();
    void outputInteger();
    void addInteger(int , int );
    void substractInteger(int , int );
    bool isEqualTo(int,int);
    bool isNotEqualTo(int , int );
    bool isGreaterThan(int , int );
    bool isLessThan(int , int );
    bool isGreaterThanOrEqualTo(int , int);
    bool isLessThanOrEqualTo(int , int);
    bool isZero(int);
    void multiply(int , int);
    void divide(int , int);
    void modul(int , int);
     
    

private:
    int arrInteger[arrSize];
    
    
   
};


















#endif /* HugeInteger_hpp */
