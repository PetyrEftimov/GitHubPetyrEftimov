//
//  Function.cpp
//  Nasledqvane_Pratki
//
//  Created by Pepi on 4/30/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Function.hpp"
#include <iostream>
#include <vector>
#include <string>
using namespace std;


Function::Function():Packaje(){}

 void Function::searchByZipCode1(vector <Packaje> pakajes , int zip){
     
     for (size_t i = 0 ; i < pakajes.size(); i++) {
         if (pakajes.at(i).packajeZipCodeReciver() == zip ) {
             pakajes.at(i).packajeInfo();
         }
     }

}

void  Function::searchBySenderFName(vector<Packaje> pakajes , string fName){
    for (size_t i = 0 ; i < pakajes.size(); i++) {
        
        if   ( pakajes.at(i).getSender().getFName() == fName){
       // if (pakajes.at(i).reciver.getFName() == fName) {
            cout <<  pakajes.at(i).getSender().getFName();
        }
    }
    
}
void Function::searchByReciverFname(vector<Packaje> pakajes , string fName){
    for (size_t i = 0 ; i < pakajes.size(); i++) {
        if (pakajes.at(i).getReciver().getFName() == fName) {
           cout << pakajes.at(i).getReciver().getFName();
        }
    }
}

void Function::senderReciverAtSameTime(vector<Packaje> pakajes, string fName , string lName){
    int senderCount = 0 ;
    int reciverCount = 0 ;
    for (size_t i = 0 ; i < pakajes.size(); i++) {
        if (pakajes.at(i).getReciver().getFName() == fName && pakajes.at(i).getReciver().getLName() == lName) {
            reciverCount++;
        }
        if (pakajes.at(i).getSender().getFName() == fName && pakajes.at(i).getSender().getLName() == lName) {
            senderCount++;
        }
        if (reciverCount > 0 && senderCount > 0 ) {
            cout << "yes " <<endl;
        }
        
    }
}

double  Function::priceOfAllPakajes(vector<Packaje> pakajes){
    double sum = 0 ;
    for (size_t i = 0 ; i < pakajes.size();i++) {
        sum+=pakajes.at(i).getCost();
    }
    return sum;
}


