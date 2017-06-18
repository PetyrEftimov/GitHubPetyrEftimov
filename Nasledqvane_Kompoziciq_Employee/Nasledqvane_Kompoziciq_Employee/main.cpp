//
//  main.cpp
//  Nasledqvane_Kompoziciq_Employee
//
//  Created by Pepi on 4/24/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include "Address.hpp"
#include "Employee.hpp"
#include "Menajer.hpp"
#include "Expert.hpp"
#include "Senior_Expert.hpp"
using namespace std;

int main(){
    

    Address adr1("Sofia","Lulin7",701);
    Address adr2("sofiq" , "nadejda" , 319);
    Address adr3("sofia" , "Lulin" , 621);
    Address adr4("sofia", "Lulin10" , 155);
    adr1.printAddress();
    Employee empl1("muto" , "mutov" ,"Gotvach" , 4.80, 200,adr1);
    empl1.printEmployees();
    double monthSalary = 0;
    monthSalary = empl1.calcSalary();
    cout << monthSalary;
    Menajer menaj1("lubolir" , "petov" , "shef na Muto" , 5.50, 220,adr2,10);
    adr2.printAddress();
    double luboSalary = 0;
    luboSalary = menaj1.calcSalary();
    cout << luboSalary<<endl;
    menaj1.printEmployees();
    Expert exp1("blagoi", "Gerov" , "shef na muto i lubo" , 6.50,250,adr3,650);
    exp1.printEmployees();
    double blagoSalary = 0 ;
    blagoSalary=exp1.EexpertCalculateSalary();
   
    cout << blagoSalary<<endl;
    Senior_Expert firstSinior("Atanas" , "Dimitrov" ,"Tehnicheski" , 7, 280,adr4 , 800 , "Telekomunication" , 250);
    double acySalary = 0;
    acySalary = firstSinior.seniorEexpertCalculateSalary();
    cout << acySalary<< endl;
    firstSinior.printEmployees();
    vector<Employee*> empoyes;
    empoyes.push_back(&empl1);
    empoyes.push_back(&menaj1);
    empoyes.push_back(&exp1);
    empoyes.push_back(&firstSinior);
    for (size_t i  = 0; i < empoyes.size(); i++) {
       // cout << empoyes.at(i).
        cout << empoyes.at(i) ->getFirstName()<<endl;
        cout << empoyes.at(i) ->getLastName() <<endl;
    }
    
    
    
    
    
    
    
   

    return 0;
}
