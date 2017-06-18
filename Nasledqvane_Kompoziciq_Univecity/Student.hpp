//
//  Student.hpp
//  Nasledqvane_Kompoziciq_Univecity
//
//  Created by Pepi on 4/23/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp
#include <string>
#include <iostream>
#include <vector>
using namespace std;

#include <stdio.h>

class Student{
public:
    
    Student();
    Student(string,string,long);
    
    void setFirstName(string);
    void setLastName(string);
    void setEgn(long);
    
    string getFirstName();
    string getLastName();
    long    getEgn();
    
    
    
    
    
    
    void addGrades(int grades);
    void printInfo();
    bool AverageSuccess();
    
    
private :
    string firstName ;
    string lastName ;
    long   egn;
    vector<int> grades;

    
};
















#endif /* Student_hpp */
