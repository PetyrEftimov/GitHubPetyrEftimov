//
//  main.cpp
//  Reshenie_Class_z3
//
//  Created by Pepi on 4/8/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include "TaxPayer.hpp"
using namespace std;

int main(){
    
     TaxPayer ob1("deca" , 1000, 30001, 5);
    TaxPayer ob2( "deca" , 6000, 50000, 5);
/*
    TaxPayer*p;
    
    p = &ob1;
    
//   ob1.TaxOff();
   // ob1.ShowInfo();
    
    cout << ob1.getSallary();
    cout << p->getSallary();
    
    
   // ob2.TaxOff();
*/
    
    TaxPayer*p;
    p = &ob1;
    
    
    cout << p->getTax();
    
    
    

    return 0;
}
