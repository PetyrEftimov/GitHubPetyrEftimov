//
//  ParkWorker.cpp
//  Nasledqvane_Parkovi_Rabotnici
//
//  Created by Pepi on 4/27/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "ParkWorker.hpp"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

ParkWorker::ParkWorker(){}
ParkWorker::ParkWorker(string fName,string lName,string address, int egn , int tel){
     m_fName = fName;
     m_lName = lName;
     m_address = address;
     m_egn = egn;
     m_tel = tel;
    
    
}

void ParkWorker::setFName(string fName ){
    m_fName = fName;
}
void ParkWorker::setLname(string lName){
    m_lName = lName;
}
void ParkWorker::setAddress(string address){
    m_address = address;
}
void ParkWorker::setEgn(int egn){
    m_egn = egn;
}
void ParkWorker::setTel(int tel){
     m_tel = tel;
}

string ParkWorker::getFName(){
    return  m_fName;
}
string ParkWorker::getLName(){
    return m_lName;
}
string ParkWorker::getAddress(){
    return m_address;
}
int  ParkWorker::getEgn(){
    return m_egn;
}
int  ParkWorker::getTel(){
    return  m_tel;
}
ParkWorker::~ParkWorker(){}

void ParkWorker:: workerInfo(){
//    cout <<"------------------"<<endl;
//    cout << fName<<"-"<<lName<<"-"<<address<<"-"<<egn<<"-"<<tel<<endl;
//        cout << lName<<endl;
//        cout << address<<endl;
//        cout << egn<<endl;
//        cout << tel<<endl;
}

// double ParkWorker::parkWorkerSalary(){
//  
//     return 0;
//}

