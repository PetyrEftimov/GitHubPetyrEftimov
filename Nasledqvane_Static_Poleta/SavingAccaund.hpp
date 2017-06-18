//
//  SavingAccaund.hpp
//  Nasledqvane_Static_Poleta
//
//  Created by Pepi on 4/20/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef SavingAccaund_hpp
#define SavingAccaund_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;



class SavingAccaund{
    
    
public:
    
    SavingAccaund();
    SavingAccaund(string,double);
    
    void setClient(string);
    void setSavingBalance(double);
    string getClient();
    double getSavingBalance();
    
    
    
    
    
    
    
    
    
    
    void calvulate();
    static void modifyInterest();
    
    
    
    
    
private:
    string client;
    double savingBalance ;
    static double annualInterestRate;
    
    
    
    
    
};




































#endif /* SavingAccaund_hpp */
