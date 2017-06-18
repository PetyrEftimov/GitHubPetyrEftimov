//
//  Autohouse.cpp
//  Xml_Car_Homework
//
//  Created by Pepi on 5/28/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Autohouse.hpp"
#include <string>
#include <vector>
#include <iostream>
#include "pugixml.hpp"
#include "Car.hpp"
using namespace std;

Autohouse:: Autohouse()
{
}
Autohouse:: ~Autohouse(){}




void Autohouse:: ReadFromFileAndSetMembers(){
    
    
    pugi::xml_document doc;
    
    if (!doc.load_file("autohouse.xml")) {
        cerr<<"fail coud nod be readet" ;
    }
    
    else{
        cout << "fail is ok "<< endl;
    }
    
    
    vector<Car> v_cars;
    
    pugi::xml_node autohouse = doc.child("AUTOHOUSE");
    
    for (pugi::xml_node it = autohouse.child("CAR"); it ; it= it.next_sibling("CAR"))
    {
        Car car1;
        car1.setBrand(it.child_value("BRAND"));
        car1.setPrice(it.child("PRICE").text().as_int());
        car1.setId(it.child("BRAND").attribute("ID").as_int());
        // car1.Info();
        v_cars.push_back(car1);
        
    }
    
    
    if (v_cars.size() != 0) {
        cout << "vector is ok";
    }
    
    else{
        cerr<<"vector is empty";
    }



int price1 = 0 ;

for (size_t i = 0 ; i < v_cars.size(); i++) {
    v_cars.at(i).Info();
    price1 = price1 + v_cars.at(i).getPrice() * v_cars.at(i).getId();
    cout << price1;
    
    
    }
    
    

    
}


    



Autohouse auto1;
