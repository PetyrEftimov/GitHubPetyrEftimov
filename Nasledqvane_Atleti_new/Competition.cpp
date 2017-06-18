//
//  Competition.cpp
//  Nasledqvane_Atleti_new
//
//  Created by Pepi on 5/9/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Competition.hpp"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

Competition::Competition(){}
Competition::~Competition(){}
void Competition::addStart(string data,string hour , string type){
    
    Start temp(data ,hour , type);
    m_starts.push_back(temp);
    
}

Competition competition1;
