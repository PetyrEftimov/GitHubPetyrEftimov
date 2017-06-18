//
//  Autohouse.hpp
//  Xml_Car_Homework
//
//  Created by Pepi on 5/28/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Autohouse_hpp
#define Autohouse_hpp
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "pugixml.hpp"
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include "Car.hpp"
using namespace std;

class Autohouse
{
public:
    Autohouse();
    ~Autohouse();
    void ReadFromFileAndSetMembers();
    
    
    
    
};

extern Autohouse auto1;


#endif /* Autohouse_hpp */
