//
//  Accaunt.hpp
//  Bank
//
//  Created by Pepi on 4/5/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Accaunt_hpp
#define Accaunt_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

#endif /* Accaunt_hpp */

class Accaunt{
   
    
public:
    Accaunt();
    
    Accaunt(int initionBalanace);
    
    
    void ceredit(int amount );
    void debit(int amount);
     int getBalance();
    
    
private:
    
        
    int balance ;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};
