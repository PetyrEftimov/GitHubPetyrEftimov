//
//  TreeWorker.cpp
//  Nasledqvane_Parkovi_Rabotnici
//
//  Created by Pepi on 4/27/17.
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





void TreeWorker::treeWorkerIfo(){
    cout << ParkWorker::getFName()<<endl;
    cout << ParkWorker::getLName()<<endl;
    cout << ParkWorker::getAddress()<<endl;
    cout << ParkWorker::getEgn()<<endl;
    cout << ParkWorker::getTel();
    
}
//int TreeWorker::treeWorkerSalary(){
//    int salary = 0 ;
//    salary = taxPerTree*treatedTrees*additional;
//    return salary;
//}


double TreeWorker::parkWorkerSalary(){
    cout << "++++++++++++++++"<<endl;
    int salary = 0 ;
    salary = m_taxPerTree*m_treatedTrees*m_additional;
    return salary;
    
}

void TreeWorker::workerInfo(){
   // cout <<":)):):):):"<<endl;
    cout << getFName();
    
}


