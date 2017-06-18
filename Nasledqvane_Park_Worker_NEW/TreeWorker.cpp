//
//  TreeWorker.cpp
//  Nasledqvane_Park_Worker_NEW
//
//  Created by Pepi on 5/16/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "TreeWorker.hpp"
#include <iostream>
#include <vector>
#include <string>
#include "ParkWorker.hpp"
using namespace std;

TreeWorker::TreeWorker(){}
TreeWorker::TreeWorker(string fName,string lName,string address,int egn,int tel,int taxPerTree,int treatedTrees,int additional):ParkWorker(fName,lName,address,egn,tel){
    m_taxPerTree = taxPerTree;
    m_treatedTrees = treatedTrees;
    m_additional = additional;
}
TreeWorker::~TreeWorker(){}

void TreeWorker::setTaxPerTree(int taxPerTree ){
    m_taxPerTree = taxPerTree;
}
void TreeWorker::setTreatedTrees(int treatedTrees ){
    m_treatedTrees =treatedTrees;
}

void TreeWorker::setAdditional(int additional){
    m_additional = additional;
}

int TreeWorker::getTaxPerTree(){
    return  m_taxPerTree;
}
int TreeWorker::getTreatedTrees(){
    return m_treatedTrees;
}
int TreeWorker::getAddtional(){
    return  m_additional;
}




double TreeWorker::parkWorkerSalary(){
    cout << "++++++++++++++++"<<endl;
    int salary = 0 ;
    salary = m_taxPerTree*m_treatedTrees*m_additional;
    if (m_treatedTrees < 150 ) {
        cout << "you are fined"<<endl;
        salary = salary - 250;
    }
    if (m_treatedTrees > 300) {
        cout << "you get bonus"<<endl;
        salary = salary + 650;
    }
    return salary;
    
}

void TreeWorker::workerInfo(){
      cout << getFName();
      cout << getLName();
      cout << getAddress();
      cout << getEgn();
      cout << getTel();
      cout << getTaxPerTree();
      cout << getTreatedTrees();
      cout << getAddtional();
    
    
    
}

