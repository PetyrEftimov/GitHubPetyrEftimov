//
//  main.cpp
//  Truck
//
//  Created by Pepi on 4/4/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
using namespace std;






class Truck {
    private :
    
    string brand ;
    string model ;
    int year ;
    int wheelBase;
    int carrying ;
    int fuel ;
    
   public:
    
    Truck(string brand,string model,int year,int wheelBase,int carrying,int fuel){
        
        this -> brand=brand;
        this -> model=model;
        this -> year = year;
        this -> wheelBase=wheelBase;
        this -> carrying=carrying;
        this -> fuel=fuel;
        
        
        
    }
    
    
    void setBrand(string brand){
        this -> brand = brand;
    }
    
    void setModel(string model){
        this -> model = model;
    }
    
    void setYear(int year){
        this -> year = year;
    }
    
    void setWheelBase(int wheelBase){
        this -> wheelBase = wheelBase;
    }
    
    void setCarrying(int carrying){
        this -> carrying = carrying;
    }
    void setFuel(int fuel){
        this -> fuel = fuel;
    }
    
    string getBrand(){
        return    this -> brand ;
        
    }
    
    string getModel(){
        return this -> model;
    }
    
    int getYear(){
        return this -> year;
    }
    
    int getWheelBase(){
        return this -> wheelBase;
    }
    
    int getCarrying(){
        return this -> carrying;
    }
    
    int getFuel(){
        return this -> fuel;
    }
    
    
    void showInfo(){
        cout << this -> brand << endl ;
        cout << this -> model << endl ;
        cout << this -> year << endl ;
        cout << this -> wheelBase << endl ;
        cout << this -> carrying << endl ;
        cout << this -> fuel << endl ;
    }
    
};








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
    
   /*
    cout << " truck brand is : " << truck1.getBrand()<<endl ;
    cout << " truck model is : " << truck1.getModel()<<endl ;
    cout << " truch year is  : " << truck1.getYear()<<endl ;
    cout << " truck wheelBase is : " << truck1.getWheelBase()<<endl ;
    cout << " truck carrying  is : " << truck1.getCarrying()<<endl ;
    cout << " truck fuel consumtion is : " << truck1.getFuel()<<endl ;
    
 
   */
    
    truck1.showInfo();
    


    return 0;
}
