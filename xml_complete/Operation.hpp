//
//  Operation.hpp
//  XML_Chetene_Generirane
//
//  Created by Pepi on 5/25/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Operation_hpp
#define Operation_hpp
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "pugixml.hpp"
#include "CD.hpp"
#include <cstdlib>
#include <fstream>
#include <iomanip>
using namespace std;

class Operation{
public:
    
    Operation();
    
    void checkCdFile();
    void cheteneOtFileStudent();
    void workWithAttribute();
    void workWithAttributeValue();
    void findChildByAttribute();
    void changeModify();
    void saveToFile();
    void createNewXmlDocWithCode();
    void readFromVectorWriteToBinFile();
    void iteratorExample();
    
private:
    vector<Cd*>v_cds;
    
};

extern Operation operation1;



#endif /* Operation_hpp */
