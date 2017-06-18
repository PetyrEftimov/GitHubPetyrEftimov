//
//  Doctor.hpp
//  Nasledqvane_Doctor
//
//  Created by Pepi on 4/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Doctor_hpp
#define Doctor_hpp
#include "Patient.hpp"

#include <stdio.h>
#include <iostream>
using namespace std;

class Doctor{
    
public:
    Doctor();
    Doctor(string , string , Patient&);
    
    void setName(string);
    void setSpeciality(string);
    
    string getName();
    string getSpeciality();
    
    
    void printInfo();
    
    
private:
    string name;
    string speciality;
    
   // Patient Patient;
    
    Patient patients[2];
    
    
    
    
    
};



























#endif /* Doctor_hpp */
