//
//  Shop.cpp
//  Kontrolno_Magazin
//
//  Created by Pepi on 5/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Shop.hpp"
#include <string>
#include <vector>
#include <iostream>
#include "Produckt.hpp"
#include "Manufacturer.hpp"
using namespace std;

Shop::Shop(){}


void Shop:: showProduckt(){
    for (int i = 0 ; i < produckts.size(); i++) {
        produckts.at(i).printInfo();
    }
    
}

void Shop::addObjektProduckt(Produckt& obj){
    int flag = 0 ;
    
    for (size_t i = 0 ; i < produckts.size(); i++) {
        if (produckts.at(i).getName() == obj.getName()  ) {
            cout<<"produckt already exists"<<endl;
            flag = 1;
        }
    }
    
    if (flag == 0 || produckts.size() == 0){
        produckts.push_back(obj);
    }
    
}

//void Shop::addManifacturer(Manufacturer& obj){
//    
//    for (size_t i = 0; i < manifacturers.size(); i++) {
//        manifacturers.push_back(obj);
//    }
//}

void Shop::addProduckt(Produckt& obj){
    
    int flag = 0 ;
    
    for (size_t i = 0 ; i < produckts.size(); i++) {
        if (produckts.at(i).getName() == obj.getName()) {
            cout<<"produckt already exists"<<endl;
            flag = 1;
        }
    }
    
    if (flag == 0 || produckts.size() == 0){
        produckts.push_back(obj);
    }
    
}

void Shop:: serachByPrice(int  price){
    int flag = 0 ;
    for (size_t i = 0 ; i < produckts.size(); i++) {
        if (produckts.at(i).getPrice() >= price) {
            produckts.at(i).printInfo();
            flag = 1;
        }
    }
    
    if (flag == 0) {
        cout << "no such produckt"<<endl;
    }
}

void Shop::statisticByType(){
    int creme = 0 ;
    int pudra = 0 ;
    int sprey = 0 ;
   
    for (size_t i = 0 ; i < produckts.size(); i++) {
        if (produckts.at(i).getType() == "creme") {
            creme++;
        }
        if (produckts.at(i).getType() == "pudra") {
            pudra++;
        }
        if (produckts.at(i).getType() == "sprey") {
            sprey++;
        }
       
        
    }
    
    cout<<"type creme :" << creme<<endl;
    cout<<"type pudra :" << pudra<<endl;
    cout<<"type sprey :" << sprey<<endl;
    
}





