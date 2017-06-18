//
//  Patient.hpp
//  Nasledqvane_Doctor
//
//  Created by Pepi on 4/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Patient_hpp
#define Patient_hpp
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Patient{
    
public:
    Patient();
    Patient(string , string, int , string);
    
    void setFirstName(string);
    void setLastName(string);
    void setYear(int);
    void setSex(string);
    
    string getFirstName();
    string getLastName();
    int    getYear();
    string getSex();
    
    void patientsInfo(Patient [2]);
    
private:
    
    string firstName;
    string lastName;
    int    year;
    string sex;
    
    
    
};
























#endif /* Patient_hpp */
