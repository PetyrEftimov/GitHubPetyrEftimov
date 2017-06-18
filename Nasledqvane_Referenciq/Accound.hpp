//
//  Accound.hpp
//  Nasledqvane_Referenciq
//
//  Created by Pepi on 5/1/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Accound_hpp
#define Accound_hpp
#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Accound{
public:
    Accound();
    Accound(double );
    
    void setAccoundBalance(double);
    double getAccoundBalance();
    
    void credit(double);
  virtual  void debit(double);
private:
    double accoundBalance;
};







#endif /* Accound_hpp */
