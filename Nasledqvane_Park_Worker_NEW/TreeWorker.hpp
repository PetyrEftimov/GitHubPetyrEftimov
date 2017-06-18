//
//  TreeWorker.hpp
//  Nasledqvane_Park_Worker_NEW
//
//  Created by Pepi on 5/16/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef TreeWorker_hpp
#define TreeWorker_hpp
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "ParkWorker.hpp"
using namespace std;
class TreeWorker:public ParkWorker {
public:
    TreeWorker();
    TreeWorker(string,string,string,int,int,int,int,int);
    ~TreeWorker();
    
    void setTaxPerTree(int);
    void setTreatedTrees(int);
    void setAdditional(int);
    
    int getTaxPerTree();
    int getTreatedTrees();
    int getAddtional();
    
   
    virtual double parkWorkerSalary();
    virtual void workerInfo();
    
    
    
private:
    int m_taxPerTree;
    int m_treatedTrees;
    int m_additional;
    
    
};

#endif /* TreeWorker_hpp */
