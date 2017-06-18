//
//  main.cpp
//  Truck
//
//  Created by Pepi on 4/4/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include "Truck.hpp"


using namespace std;













int main(){
    
    
    
 
    string brand ;
    string model ;
    int year ;
    int wheelBase ;
    int carrying ;
    int fuel ;
    
    
    
    
    cin >> brand ;
    cin >> model ;
    cin >> year ;
    cin >> wheelBase ;
    cin >> carrying ;
    cin >> fuel ;
   
    
    
    
    Truck truck1(brand,model,year,wheelBase,carrying,fuel);
    
    
    truck1.setBrand(brand);
    truck1.setModel(model);
    truck1.setYear(year);
    truck1.setWheelBase(wheelBase);
    truck1.setCarrying(carrying);
    truck1.setFuel(fuel);
    
    
  
    
    truck1.showInfo();
    
    
  //  Truck truck2("asd","zxc",2,3,4,5);
    
    
    
    /*
     cout << " truck brand is : " << truck1.getBrand()<<endl ;
     cout << " truck model is : " << truck1.getModel()<<endl ;
     cout << " truch year is  : " << truck1.getYear()<<endl ;
     cout << " truck wheelBase is : " << truck1.getWheelBase()<<endl ;
     cout << " truck carrying  is : " << truck1.getCarrying()<<endl ;
     cout << " truck fuel consumtion is : " << truck1.getFuel()<<endl ;
     
     */
     
  //  truck2.showInfo();
    
    
    
    
    return 0;
}
