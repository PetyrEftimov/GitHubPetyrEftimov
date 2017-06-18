//
//  main.cpp
//  Bank
//
//  Created by Pepi on 4/5/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include "Accaunt.hpp"
using namespace std;

int main(){
    
    Accaunt acaund1(300);
    Accaunt acaund2(460);
    
    
    
    acaund1.ceredit(200);
    cout << acaund1.getBalance()<< endl ;
    
    acaund2.debit(200);
    cout << acaund2.getBalance()<<endl ;
    
    
    
    
    

    return 0;
}
