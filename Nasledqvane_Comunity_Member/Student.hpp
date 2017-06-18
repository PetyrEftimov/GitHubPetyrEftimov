//
//  Student.hpp
//  Nasledqvane_Comunity_Member
//
//  Created by Pepi on 4/22/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp
#include "ComunityMember.hpp"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Student:ComunityMember{
public:
    Student();
    Student(string,string,int,string,int);
    
    void setFaculty(string);
    void setYearOfStudy(int);
    string getFaculty();
    int    getYearOfStudy();
    
     void printInfo();
    
private:
    string faculty;
    int    yearOfStudy;
    
};












#endif /* Student_hpp */
