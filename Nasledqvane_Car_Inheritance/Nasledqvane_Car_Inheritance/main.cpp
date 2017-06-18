//
//  main.cpp
//  Nasledqvane_Car_Inheritance
//
//  Created by Pepi on 5/8/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include "Car.hpp"
#include "FamilyCar.hpp"
#include "LuxoryCar.hpp"
using namespace std;

int main(){
    
    
//    
//    FamilyCar familyCar2("Subaru" ,"outback" ,"Combi" , "Blue" , "j123d4546554" , "CB 2724 AA" , 20 , 25,300);
//    
//    LuxoryCar lux1("mercedes" ,"S-class" , "sedan" , "Black" ,"grtr23445567" , "CB 2367 AB" , 30 , 50, 600,100);
//    
//    lux1.carInfo();
//    lux1.carTax();
//    
//    
//    familyCar2.carTax();
//    familyCar2.carInfo();
//    
//    vector<Car*> cars;
//    
//    cars.push_back(&familyCar2);
//    cars.push_back(&lux1);
//    
//    for (size_t i = 0 ; i < cars.size(); i++) {
//        if (cars.at(i)->getModel() == lux1.getModel()) {
//            lux1.carInfo();
//        }
//    }
//    
//    
//    
//    
    LuxoryCar lux1;
    lux1.addLuxCar("subaru", "svx", "coupe", "blue", "j1223errrd", "CB2356AA", 20,  20, 300, 100);
    lux1.addLuxCar("Subi", "svx", "coupe", "blue", "j1223errrd", "CB2356AA", 15,  20, 300, 100);
    lux1.addLuxCar("mercedes", "svx", "coupe", "blue", "j1223errrd", "CB2356AA", 15,  20, 300, 100);
    
    lux1.searchByBrand("Subi");
    
    
    
    
    
    
    
    
    
    
    return 0;
}
