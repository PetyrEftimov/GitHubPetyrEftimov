//
//  TaxPayer.hpp
//  Reshenie_Class_z3
//
//  Created by Pepi on 4/8/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef TaxPayer_hpp
#define TaxPayer_hpp
#include <iostream>

#include <stdio.h>
using namespace std;

#endif /* TaxPayer_hpp */



class TaxPayer{
    
public:
    
    TaxPayer();
        
    
    
    
    
    
    TaxPayer( string , int , int , int  );
    

        void setName(string);
        void setTax(int);
        void setSallary(int);
        void setStaytus(int);
        
        string getName();
        int getTax();
        int getSallary();
        int getStatus();
        
        
        
        
   int  TaxOff();
    void  ShowInfo();
    
        
    
    
    
    
    
    
    
    
    
private:
    string name ;
    int tax;
    int sallary;
    int status;
    
    
    
    
    
    
};

