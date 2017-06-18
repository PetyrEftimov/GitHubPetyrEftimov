//
//  main.cpp
//  Nasledqvane_Car
//
//  Created by Pepi on 4/26/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include "Car.hpp"
#include "LuxoryCar.hpp"
#include "FamilyCar.hpp"
using namespace std;

int main(){
    
    Car car1("Subaru" , "Outback");
    Car car2("mercedes" , "6.3 AMG");
  //  car2.printInfo();
    
    FamilyCar familyCar1(500, 60,car1);
    familyCar1.familyCarInfo();
    double final1 = familyCar1.finalPrice();
    cout << final1<<endl;
    
    LuxoryCar lux1(500,70,car2,40);
    double lux = lux1.luxFinalPrice();
    cout << lux<<endl;
    
    cout  << "---------";
       lux1.luxInfo();
    
    vector<Car*>cars_v;
    
    cars_v.push_back(&car1);
    cars_v.push_back(&car2);
    
    
    for (size_t i = 0 ; i < cars_v.size(); i++) {
        cout << cars_v.at(i) -> getModel();
        cout << cars_v.at(i) -> getBrand();
        
    }
    
    
    
    
    

    
    
    

    return 0;
}
