//
//  Packaje.hpp
//  Nasledqvane_Pratki
//
//  Created by Pepi on 4/28/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Packaje_hpp
#define Packaje_hpp
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "Client.hpp"
using namespace std;

class Packaje{
public:
    Packaje();
    Packaje(double , double ,  Client& ,  Client&);
    void setWeight(double);
    void setCost(double);
    
    double getWeight();
    double getCost();
    Client getSender();
    Client getReciver();
    
    
    void packajeInfo();
    int packajeZipCodeReciver();
    void searchByZipCode(vector<Packaje> , int);
    void searchByFName(vector<Packaje> , string);
    void serachByLName(vector<Packaje> , string);
    void senderReciverAtSameTime(vector<Packaje> , string , string);
    virtual double calculateTwoDayPackageCost();

    
private:
    double weight;
    double cost;
    Client sender;
    Client reciver;
};




#endif /* Packaje_hpp */
