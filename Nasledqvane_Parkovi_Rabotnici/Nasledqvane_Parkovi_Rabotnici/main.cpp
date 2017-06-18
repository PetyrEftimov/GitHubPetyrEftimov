//
//  main.cpp
//  Nasledqvane_Parkovi_Rabotnici
//
//  Created by Pepi on 4/27/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include "ParkWorker.hpp"
#include "GrassWorker.hpp"
#include "TreeWorker.hpp"
using namespace std;

int main(){
    
   // ParkWorker worker1("Lubomir " , "Petrov "," zaharna fabrika", 1234, 2345);
   // worker1.workerInfo();
    GrassWorker grass1("muto" , "mutov" , "lulin" , 1567,5678,23,10);
    grass1.grassWorkerInfo();
    
  //  double grassSalary = grass1.grassWorkerSalary();
 //   cout << "GrassWoorker Salary is : "<<grassSalary<<endl;
    TreeWorker treework1("Hampi","Manolkov","lulin7",5555,66666,25,50,40);
    treework1.treeWorkerIfo();
 //   int treeSalary = treework1.treeWorkerSalary();
 //   cout <<"treeWorker salary is : " << treeSalary<<endl;
    vector<ParkWorker*>park_v;
   // park_v.push_back(&worker1);
    park_v.push_back(&grass1);
    park_v.push_back(&treework1);
    
    for (size_t i = 0 ; i < park_v.size(); i++) {
        cout << park_v.at(i) -> getLName() << endl ;
        cout << park_v.at(i) -> getFName() << endl ;
    }
    grass1.ParkWorker::workerInfo();
    grass1.workerInfo();
    double grassSalar = 0;
    grassSalar = grass1.parkWorkerSalary();
    cout <<grassSalar<<"**"<<endl;
    
    treework1.TreeWorker::workerInfo();
    double treeSalar = 0 ;
    treeSalar = treework1.parkWorkerSalary();
    cout << treeSalar<<"$$$$"<<endl;
    
    
    
    
    
    
    
    
    return 0;
}
