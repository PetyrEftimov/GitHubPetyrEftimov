//
//  Operation.hpp
//  Nasledqvane_Parkovi_Rabotnici
//
//  Created by Pepi on 5/10/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Operation_hpp
#define Operation_hpp
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "TreeWorker.hpp"
#include "GrassWorker.hpp"

class Operation  {
public:
    Operation();
    ~Operation();
    
    
    void   addTreeWorker(string fName,string lName,string address,int egn,int tel,int taxPerTree,int treatedTrees,int additional);
    void   addGrasWorker(string fName,string lName,string address,int egn,int tel, int squareMeter ,int treatedArea);
 
private:
    vector<ParkWorker> m_parks;
};

extern Operation opration1;


#endif /* Operation_hpp */
