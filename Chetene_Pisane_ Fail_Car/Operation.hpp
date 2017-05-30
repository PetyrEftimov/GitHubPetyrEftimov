//
//  Operation.hpp
//  Chetene_Pisane_Car
//
//  Created by Pepi on 5/25/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Operation_hpp
#define Operation_hpp
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cctype>
#include <cstdlib>
#include "Car.hpp"
using namespace std;

class Operation{
    
public:
    Operation();
    void initializeFile( fstream & );
    void inputData( fstream & );
    void listHardwares( fstream & );
    void updateRecord( fstream & );
    void insertRecord( fstream & );
    void deleteRecord( fstream & );
    int instructions( void );
   
    
    
};

extern Operation operation1;



#endif /* Operation_hpp */
