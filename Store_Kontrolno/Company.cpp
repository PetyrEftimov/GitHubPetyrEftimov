//
//  Company.cpp
//  Store_Kontrolno
//
//  Created by Pepi on 6/2/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Company.hpp"
#include "pugixml.hpp"
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <iomanip>
#include <map>
using namespace std;

Company::Company() {}

void Company::Read_XML_Shop1_Push_Vector() {
    
    pugi::xml_document document;
    if(!document.load_file("store_1.xml")){
        
        cerr << "The file could not be read !" << endl;
        exit(1);
        
    }else
    {
        cout << "The file is readed successfully !" << endl;
    }
    
   // document.load_file("store_3.xml");
    pugi::xml_node items = document.child("ITEMS");
    
    
    for (pugi::xml_node it = items.child("ITEM"); it ; it= it.next_sibling("ITEM"))
    {
        Item mag1;
        mag1.setBrand(it.child_value("BRAND"));
        mag1.setPrice(it.child("PRICE").text().as_int());
        mag1.setName(it.child_value("NAME"));
        mag1.setQuantity(it.child("QUANTITY").text().as_int());
        mag1.setModel(it.child_value("MODEL"));
        v_shop1.push_back(mag1);
        
    }
    

    if (v_shop1.size() != 0) {
        cout << "Valid vector";
    }
    else{
        cerr<<"Invalid vector";
    }
}


void Company::DailyTurnoverShop1() {
    
    int sum = 0;
    for(int i = 0;i < v_shop1.size(); i++)
    {
        
        cout << v_shop1.at(i).getName() << " " << v_shop1.at(i).getBrand()<<v_shop1.at(i).getPrice()<<v_shop1.at(i).getQuantity();
        sum += v_shop1.at(i).getPrice() * v_shop1.at(i).getQuantity();
    }
    
    cout << "Shop 1 daily turnover is: " << sum << endl ;
}

void Company::ItemDaylMaxSells(){
    
    
    
}


