//
//  main.cpp
//  Overlodet_Operator
//
//  Created by Pepi on 5/3/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <istream>
#include <ostream>
#include "Drob.hpp"
using namespace std;

int main(){
    
    Drob predfDrob;
    Drob predfDrob1;
    Drob predfDrob2;
    cin>>predfDrob;
    cin >> predfDrob1;
    
    
    predfDrob2 = predfDrob - predfDrob1;
    predfDrob2=predfDrob + predfDrob1;
    
    
    
    cout<<predfDrob2;
    
  
    
    
  
    predfDrob.deleteDrob();
    
    

    return 0;
}
