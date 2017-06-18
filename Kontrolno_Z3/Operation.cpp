//
//  Operation.cpp
//  Kontrolno_Z3
//
//  Created by Pepi on 5/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Operation.hpp"
#include <iostream>
#include <vector>
#include <string>
#include "Course.hpp"
#include "Online.hpp"
#include "InOffice.hpp"
using namespace std;

void Operation:: oprationsWithVector(){
    Online on1( "informatica" , 2  ,13,500 ,4 ,5 ,2.40);
    Online on2( "angliiski" , 5  ,14,600 ,3 ,5 ,4.40);
    InOffice in1("inform" , 6  ,5,1000 , "medium" ,"sofia", 12 );
    InOffice in2("bylgarski" , 10,12,1000 , "medium" ,"sofia", 13 );
    
    vector<Course*> courses;
    Online *ptrOnl1;
    Online * ptrOn;
    InOffice *ptrIn;
    InOffice *ptrIn1;
    
    ptrOnl1  = &on1;
    ptrOn  = & on2;
    ptrIn = & in1;
    ptrIn1 = & in2;
    
    
    courses.push_back(ptrOnl1);
    courses.push_back(ptrOn);
    courses.push_back(ptrIn1);
    courses.push_back(ptrIn);
    for (size_t i = 0 ; i < courses.size(); i++) {
        courses.at(i) -> courseInfo();
    
        if (ptrOnl1 == dynamic_cast<Online*>(courses.at(i)) {
            ptrOnl1 -> courseInfo();
            cout << "price:" << ptrOn -> coursePrice();
       
        }
    }
    
    }
    

            }
