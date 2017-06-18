//
//  Competition.hpp
//  Nasledqvane_Atleti_new
//
//  Created by Pepi on 5/9/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Competition_hpp
#define Competition_hpp
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "Start.hpp"
using namespace std;

class Competition : public Start {
    
public:
    Competition();
    virtual ~Competition();
    void addStart(string data = "" , string hour = "" , string type = "");
    
    
    
    
private:
    vector<Start> m_starts;
    
    
};


extern Competition competition1;


#endif /* Competition_hpp */
