


#ifndef Student_hpp
#define Student_hpp
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "pugixml.hpp"
using namespace std;


class Student
{
public:
    Student();
    
    void setFName(string fName);
    void setLName(string lName);
    void setTel(int tel);
    
    string getFName();
    string getLName();
    int    getTel();
    
private:
    string m_fName;
    string m_lName;
    int    m_tel;
    
};


#endif /* Student_hpp */
