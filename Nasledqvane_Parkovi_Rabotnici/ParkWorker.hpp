//
//  ParkWorker.hpp
//  Nasledqvane_Parkovi_Rabotnici
//
//  Created by Pepi on 4/27/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef ParkWorker_hpp
#define ParkWorker_hpp
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class ParkWorker{
public:
    ParkWorker();
    ParkWorker(string , string , string ,int,int);
    ~ParkWorker();
    
    void setFName(string);
    void setLname(string);
    void setAddress(string);
    void setEgn(int);
    void setTel(int);
    
    string getFName();
    string getLName();
    string getAddress();
    int   getEgn();
    int   getTel();
    
    virtual   void workerInfo();
    void addParkWorker();
    virtual double parkWorkerSalary()=0;
    
    
    
    
    
    
    
    
private:
    string m_fName;
    string m_lName;
    string m_address;
    int    m_egn;
    int    m_tel;
    vector<ParkWorker>park_v;
};





#endif /* ParkWorker_hpp */
