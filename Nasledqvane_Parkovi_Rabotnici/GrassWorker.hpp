//
//  GrassWorker.hpp
//  Nasledqvane_Parkovi_Rabotnici
//
//  Created by Pepi on 4/27/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef GrassWorker_hpp
#define GrassWorker_hpp
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "ParkWorker.hpp"
using namespace std;

class GrassWorker:public ParkWorker{
public:
      GrassWorker();
      GrassWorker(string,string,string,int,int,int,int);
    ~GrassWorker();
    void setSquareMeter(int);
    void setTreatedArea(int);
    int  getSquareMeter();
    int  getTreatedArea();
    void grassWorkerInfo();
  //  double grassWorkerSalary();
    virtual void workerInfo();
    virtual double parkWorkerSalary();
    
private:
    int m_squareMeter;
    int m_treatedArea;

    
  };


#endif /* GrassWorker_hpp */
