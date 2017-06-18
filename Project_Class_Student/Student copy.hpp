//
//  Student.hpp
//  Project_Class_Student
//
//  Created by Pepi on 4/4/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp
#include <string>
#include <stdio.h>

#endif /* Student_hpp */
using namespace std;


class Student{
    
    public :
    
    Student();
    Student(string,string,int,string ,string,long);
    
    
    void setFirsName(string);
    void setLastName(string);
    void setYear(int);
    void setNameUniver(string);
    void setMail(string);
    void setPhone(long);
    
    
    
    
    
    
    string firsName ;
    string lastName ;
    string specialty;
    int year ;
    string nameUniver;
    string mail ;
    long phone ;
    
    
    string getFirsName();
    string getLastName();
    int getYear();
    string getNameUniver();
    string getMail();
    long getTel();
    
    void showInfo();
    
    
    
    
    
    
    
};
