//
//  Packaje.cpp
//  Nasledqvane_Pratki
//
//  Created by Pepi on 4/28/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Packaje.hpp"
#include <iostream>
#include <vector>
#include <string>
#include "Client.hpp"
using namespace std;

Packaje::Packaje(){}
Packaje::Packaje(double weight , double cost,  class Client& sender ,class Client& reciver ):sender(sender),reciver(reciver){
    
    this -> weight = weight;
    this -> cost   = cost;
}

void Packaje::setWeight(double weight){
    this -> weight = weight;
}
void Packaje::setCost(double cost){
    this -> cost = cost;
}

double Packaje::getWeight(){
    return this -> weight;
}
double Packaje::getCost(){
    return this -> cost;
}

Client Packaje::getSender(){
    return sender;
}

Client Packaje::getReciver(){
    return reciver;
}

void Packaje::packajeInfo(){
    cout << weight <<endl;
    cout << cost   <<endl;
 //   sender.clientAddress();
    reciver.clientAddress();
    }

int Packaje::packajeZipCodeReciver(){
  return   reciver.clientZipCode();
    
}


void Packaje::searchByZipCode(vector<Packaje> pakajes , int zip ){
    for (size_t i = 0 ; i < pakajes.size(); i++) {
        if (pakajes.at(i).packajeZipCodeReciver() == zip ) {
            pakajes.at(i).packajeInfo();
        }
    }
}


void Packaje::searchByFName(vector<Packaje> pakajes, string fName){
    for (size_t i = 0 ; i < pakajes.size(); i++) {
        if (pakajes.at(i).reciver.getFName() == fName) {
          cout <<  pakajes.at(i).reciver.getFName();
        }
    }
    
}

void Packaje::serachByLName(vector<Packaje> pakajes , string name){
    for (size_t i = 0 ; i < pakajes.size(); i++) {
        if (pakajes.at(i).reciver.getLName() == name) {
            cout << pakajes.at(i).reciver.getLName();
        }
    }
    
}

void Packaje::senderReciverAtSameTime(vector<Packaje> pakajes , string fName ,string lName){
    int senderCount = 0 ;
    int reciverCount = 0 ;
    for (size_t i = 0 ; i < pakajes.size(); i++) {
        if (pakajes.at(i).reciver.getFName() == fName && pakajes.at(i).reciver.getLName() == lName) {
            reciverCount++;
        }
        if (pakajes.at(i).sender.getFName() == fName && pakajes.at(i).sender.getLName() == lName) {
            senderCount++;
        }
        if (reciverCount > 0 && senderCount > 0 ) {
            cout << "yes " <<endl;
        }
        
    }
    
}
double Packaje::calculateTwoDayPackageCost(){
    return weight*cost;
    
}

