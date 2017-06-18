//
//  Director.hpp
//  Nasledqvane_Kompoziciq_Videoteka
//
//  Created by Pepi on 5/17/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Director_hpp
#define Director_hpp
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Director{
    
public:
    Director();
    Director(string  ,string  , string );
    ~Director();
    void setFName(string fName);
    void setLName(string lName);
    void setPopularity(string popularity);
    
    string getFName();
    string getLName();
    string getPopularity();
    
    void directorInfo();
    
private:
    string m_fName;
    string m_lName;
    string m_popularity;
    
};




#endif /* Director_hpp */
