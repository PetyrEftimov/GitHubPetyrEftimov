//
//  Operation.cpp
//  Nasledqvane_Park_Worker_NEW
//
//  Created by Pepi on 5/17/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Operation.hpp"
#include <iostream>
#include <vector>
#include <string>
#include "ParkWorker.hpp"
#include "GrassWorker.hpp"
#include "TreeWorker.hpp"

void Operation::initializeWriteReadFromVector(){
    GrassWorker grass1("muto" , "mutov" , "lulin" , 3,4,5,100);
    TreeWorker treework1("Hampi","Manolkov","lulin7",3,4,5,5,300);
    
    vector<ParkWorker*>park_v;
    GrassWorker  *ptrPW1;
    TreeWorker  *ptrPW2;
    
    ptrPW1 = &grass1;
    ptrPW2 = &treework1;
    
    park_v.push_back(ptrPW1);
    park_v.push_back(ptrPW2);
    
    for (size_t i = 0 ; i < park_v.size(); i++) {
        park_v.at(i) -> workerInfo();
        
        if (ptrPW1 == dynamic_cast<GrassWorker*>(park_v.at(i))) {
            ptrPW1 -> workerInfo();
            cout << "salary:"<<ptrPW1 -> parkWorkerSalary()<<endl;
        }
        
        if (ptrPW2 == dynamic_cast<TreeWorker*>(park_v.at(i))) {
            ptrPW2 -> workerInfo();
            cout <<"salary :" << ptrPW2 -> parkWorkerSalary()<<endl;
        }
    }
    
}

