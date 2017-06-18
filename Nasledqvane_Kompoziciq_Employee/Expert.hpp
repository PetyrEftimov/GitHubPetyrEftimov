//
//  Expert.hpp
//  Nasledqvane_Kompoziciq_Employee
//
//  Created by Pepi on 4/24/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Expert_hpp
#define Expert_hpp
#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>
#include "Employee.hpp"
#include "Address.hpp"
using namespace std;
class Expert : public Employee{
    
public:
    Expert();
    Expert(string , string , string , double , int , Address&, int );
    void setBonus(int);
    int  getBonus();
    
    double EexpertCalculateSalary();
    
    
    
    
    
private:
    int bonus ;
};










#endif /* Expert_hpp */
