//
//  Teacher.hpp
//  Nasledqvane_Kompoziciq_Univecity
//
//  Created by Pepi on 4/23/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Teacher_hpp
#define Teacher_hpp
#include <string>
#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

class Teacher{
public:
    Teacher();
    Teacher(string,string,string,long,int);
    
    void setFirstName(string);
    void setLastName(string);
    void setSubject(string);
    void setEgn(long);
    void setInternship(int);
    
    string getFirstName();
    string getLastName();
    string getSubject();
    long   getEgn();
    int    getInternship();
    
    
    
    void printInfo();
    void addTeacher();

    



    
    
    
    
    
private:
    string firstName ;
    string lastName ;
    string subject;
    long   egn;
    int    internship ;
 
    
    
    
};






















#endif /* Teacher_hpp */
