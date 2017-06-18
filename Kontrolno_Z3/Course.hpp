//
//  Course.hpp
//  Kontrolno_Z3
//
//  Created by Pepi on 5/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Course_hpp
#define Course_hpp
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Course{
    
public:
    Course();
    Course(string , int ,int ,int );
    ~Course();
    
    void setName(string name);
    void setNumber(int number);
    void setTime(int time);
    void setBasePrice(int basePrice);
    string getName();
    int getNumber();
    int getTime();
    int getBasePrice();
    
 virtual      void courseInfo();
    void addCourse();
    double coursePrice();
    
    

private:
    string m_name;
    int    m_number;
    int    m_time;
    int    m_basePrice;
};





#endif /* Course_hpp */
