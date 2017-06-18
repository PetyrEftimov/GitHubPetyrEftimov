//
//  main.cpp
//  Banka
//
//  Created by Pepi on 4/5/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
#include "AccoundNew.hpp"
#include <iostream>
using namespace std;

int main(){
    
    
    
    
    AccoundNew pepi(600);
    
       pepi.showInfo();
      pepi.Credit(400);
    pepi.Debit(500);
    cout <<pepi.getBallance()<< endl;
    
    
    

    return 0;
}
