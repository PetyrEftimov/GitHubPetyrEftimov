//
//  Senior_Expert.hpp
//  Nasledqvane_Kompoziciq_Employee
//
//  Created by Pepi on 4/25/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Senior_Expert_hpp
#define Senior_Expert_hpp

#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>
#include "Expert.hpp"
#include "Address.hpp"
using namespace std;

class Senior_Expert: public Expert {
public:
    Senior_Expert();
    Senior_Expert(string , string , string , double , int , Address&, int ,string , int);
    void setTehnologies(string);
    void setMBonus(int);
    string getTehnologies();
    int  getMBonus();
    double seniorEexpertCalculateSalary();
    
    
    
private:
    string tehnologies;
    int mBonus;
};



#endif /* Senior_Expert_hpp */
