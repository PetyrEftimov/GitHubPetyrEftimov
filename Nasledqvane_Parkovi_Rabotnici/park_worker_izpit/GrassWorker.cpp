//
//  GrassWorker.cpp
//  Nasledqvane_Parkovi_Rabotnici
//
//  Created by Pepi on 4/27/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "GrassWorker.hpp"
#include <iostream>
#include <vector>
#include <string>
#include "ParkWorker.hpp"
using namespace std;

GrassWorker::GrassWorker(){}
GrassWorker::GrassWorker(string fName,string lName,string address,int egn,int tel, int squareMeter ,int treatedArea):ParkWorker(fName,lName,address,egn,tel){
    m_squareMeter = squareMeter;
    m_treatedArea = treatedArea;
}

GrassWorker::~GrassWorker(){
    
}
void GrassWorker::setSquareMeter(int squareMeter){
    m_squareMeter = squareMeter;
}
void GrassWorker::setTreatedArea(int treatedArea){
    m_treatedArea = treatedArea;
}
int GrassWorker::getSquareMeter(){
    return m_squareMeter;
}
int  GrassWorker::getTreatedArea(){
    return m_treatedArea;
}
void GrassWorker::grassWorkerInfo(){
    
    cout << ParkWorker::getFName()<<endl;
    cout << ParkWorker::getLName()<<endl;
    cout << ParkWorker::getAddress()<<endl;
    cout << ParkWorker::getEgn()<<endl;
    cout << ParkWorker::getTel()<<endl;
    
}
//double GrassWorker::grassWorkerSalary(){
//    double salary = 0;
//    salary = m_squareMeter*m_treatedArea;
//    return salary;
//}

void GrassWorker::workerInfo(){
    cout <<"****************"<<endl;
    cout << ParkWorker::getFName()<<endl;
    
    
}

double GrassWorker::parkWorkerSalary(){
    double salary = 0;
    salary = m_squareMeter*m_treatedArea;
    return salary;
    
}





