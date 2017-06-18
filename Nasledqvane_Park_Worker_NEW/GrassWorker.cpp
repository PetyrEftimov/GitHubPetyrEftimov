//
//  GrassWorker.cpp
//  Nasledqvane_Park_Worker_NEW
//
//  Created by Pepi on 5/16/17.
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



void GrassWorker::workerInfo(){
    cout <<"****************"<<endl;
    cout << ParkWorker::getFName()<<endl;
    cout << ParkWorker::getLName()<<endl;
    cout << ParkWorker::getAddress()<<endl;
    cout << ParkWorker::getEgn()<<endl;
    cout << ParkWorker::getTel()<<endl;
    cout << getSquareMeter()<<endl;
    cout << getTreatedArea()<<endl;
   
    
    
}

double GrassWorker::parkWorkerSalary(){
    double salary = 0;
    salary = m_squareMeter*m_treatedArea;
    if (m_treatedArea < 500) {
        cout << "you are Fined"<<endl;
        salary = salary - 200;
    }
    
    if (m_treatedArea > 1000) {
        cout << "you get bonus "<<endl;
        salary = salary+500;
    }
    return salary;
    
}
