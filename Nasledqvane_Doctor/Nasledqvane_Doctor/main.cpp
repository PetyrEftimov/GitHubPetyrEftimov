//
//  main.cpp
//  Nasledqvane_Doctor
//
//  Created by Pepi on 4/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include "Doctor.hpp"
using namespace std;

int main(){
    
    
    Patient patient1("pepi" , "petrov" ,23, " m");
    Patient patient2(" viki" , "peneva" , 22, "f");

    //create array of Patients
    Patient patients[2]={patient1, patient2};
    
    //Class Doctor contains an array of Patients
    Doctor doc1("Doctor", "Hirurg", patients[1]);

    doc1.printInfo();
    
    patients[0].patientsInfo(patients);
    
    return 0;
}
