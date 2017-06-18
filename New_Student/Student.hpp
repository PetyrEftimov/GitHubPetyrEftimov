//
//  Student.hpp
//  New_Student
//
//  Created by Pepi on 4/6/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp
#include <iostream>
using namespace std;


#include <stdio.h>
#include <string>
#include <iostream>

#endif /* Student_hpp */


class Student {

public:
    Student();
    Student(string,string,long,int,string);
    
    
    void setFirstName(string);
    void setLastName(string);
    void setEgn(long);
    void setYear(int);
    void setSpecial(string);
    
    
    
    
    string getFirstName();
    string getLastName();
    long   getEgn();
    int    getYear();
    string getSprcial();
    
    
    
    void showInfo();
    float showOcenki();
    int ShowMax();
    
private:
    
    string firstName;
    string lastName;
    long egn;
    int year;
    string special;
    

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};
