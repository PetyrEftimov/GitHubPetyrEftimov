//
//  Online.hpp
//  Kontrolno_Z3
//
//  Created by Pepi on 5/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Online_hpp
#define Online_hpp
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "Course.hpp"
using namespace std;

class Online : public Course{
public:
    Online();
    Online(string , int ,int ,int ,int ,int ,double);
    ~Online();
    void setLevel(int level);
    void setType(int type);
    void setHour(double hour);
    
    int getLevel();
    int getType();
    double getHour();
    
    virtual double coursePrice();
     void courseInfo();
    
    
    
    
private:
    int m_level;
    int m_type;
    double m_hour;
};


#endif /* Online_hpp */
