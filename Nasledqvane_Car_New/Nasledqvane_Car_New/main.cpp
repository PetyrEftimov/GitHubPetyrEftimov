//
//  main.cpp
//  Nasledqvane_Car_New
//
//  Created by Pepi on 5/18/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include "FamilyCar.hpp"
#include <string>
#include <vector>
#include "Car.hpp"
#include "LuxCar.hpp"
#include "Operation.hpp"

int main(){
//    
//    FamilyCar f1("subaru" , "Outback" , "blue" , "j123r5" ,"CB 4467 CB" , 12 , 30, 505);
//    LuxCar l1("subaru" , "impreza" , "blue" , "j123r5" ,"CB 4467 CB" , 12 , 30, 250 , 40);
////    f1.carInfo();
////    l1.carInfo();
////    l1.carPrice();
////    
//        vector<Car*>car_v;
//        FamilyCar *ptrFM1 = &f1;
//        LuxCar  *ptrLC1 = &l1;
//        car_v.push_back(ptrFM1);
//        car_v.push_back(ptrLC1);
//    
//        for (size_t i = 0 ; i < car_v.size(); i++) {
//            car_v.at(i) -> carInfo();
//    
////            if (ptrFM1 == dynamic_cast<FamilyCar*>(car_v.at(i))) {
////                ptrFM1 -> carInfo();
////                           }
//    
//            if (ptrLC1 == dynamic_cast<LuxCar*>(car_v.at(i))) {
//                ptrLC1 -> carInfo();
//                ptrLC1 -> carPrice();
//            }
//        }
//        
//    
    Operation op1;
    op1.initializeWriteReadFromVector();
    

    return 0;
}
