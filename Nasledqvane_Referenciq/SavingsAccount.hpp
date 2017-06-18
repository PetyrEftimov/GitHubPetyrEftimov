//
//  SavingsAccount.hpp
//  Nasledqvane_Referenciq
//
//  Created by Pepi on 5/1/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef SavingsAccount_hpp
#define SavingsAccount_hpp
#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
#include "Accound.hpp"
using namespace std;

class SavingsAccount : public Accound{
public:
    SavingsAccount();
    SavingsAccount(double    , double );
    void setInterestRate(double );
    double getInterestRate();
    
    double calculateInterest();
    
private:
    double interestRate;
};



#endif /* SavingsAccount_hpp */
