//
//  ComunityMember.hpp
//  Nasledqvane_Comunity_Member
//
//  Created by Pepi on 4/22/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef ComunityMember_hpp
#define ComunityMember_hpp
#include <iostream>
#include <string>
#include <vector>
#include "Adress.hpp"
using namespace std;

#include <stdio.h>

class ComunityMember{
public:
    ComunityMember();
    ComunityMember(string , string ,int , int,Adress&);
    void setFirsName(string);
    void setLastName(string);
    void setYear(int);
    void setSalary2(int);
    string getFirsName();
    string getLastName();
    int    getYear();
    int    getSalary2();
    
    
    
    virtual  void printInfo();
    virtual  int calculateSalary();
private:
    string firstName ;
    string lastName ;
    int    year;
    int    salary2;
    Adress Adress;
    
};


#endif /* ComunityMember_hpp */
