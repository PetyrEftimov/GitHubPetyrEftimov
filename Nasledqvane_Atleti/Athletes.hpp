//
//  Athletes.hpp
//  Nasledqvane_Atleti
//
//  Created by Pepi on 5/2/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Athletes_hpp
#define Athletes_hpp
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Athletes{
public:
    Athletes(string fName = "",string lName="",string country="", double bestOf= 0);
    virtual ~Athletes();
    
    void setFName(string);
    void setLName(string);
    void setCountry(string);
    void setBestOf(double);
    
    string getFName();
    string getLName();
    string getCountry();
    double    getBestOf();
    void  printInfo();
    
private:
    string m_fName;
    string m_lName;
    string m_country;
    double    m_bestOf;
};


#endif /* Athletes_hpp */
