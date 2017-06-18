//
//  main.cpp
//  Klasove_cars
//
//  Created by Pepi on 4/4/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include "Cars.hpp"
using namespace std;


class Car{
   
private:
    
    string brand ;
    string model ;
    int year ;
    string color;
    int price ;
public:
    
    Car(){
        
        this -> brand = " ne s znae ";
        this -> model = " nqma" ;
        this -> year = 0;
    }
    
    Car(string brand, string model, int year , string color,int price){
        this->brand = brand;
        this->model=model;
        this->year=year;
        this->color=color;
        this->price= price;
    }
    
    

    
    void setBrand(string brand){
        this->brand = brand;
    }
    void setModel(string model){
        
      
        this -> model= model;
    }
    void setYear(int year){
        this -> year = year;
    }
    
    void setColor(string color){
        this -> color = color ;
        
    }
    
    void setPrice(int price){
        this -> price = price;
        
    }
    
    
    string getBrand(){
        return  this-> brand ;
    }
    
    
    
    
    string getModel(){
        return this->model;
    }
    
    string getColor(){
        return this -> color;
        
    }
    
    int getYear(){
        
        return this -> year;
        
    }
    
    int getPrice (){
        return this-> price;
        
    }
    
    
    
    void showInfo(){
        cout <<this-> brand << endl ;
        cout <<this -> model<<endl;
        cout << this->color << endl ;
        cout << this-> year<<endl;
        cout<<this-> price<<endl;
        
    }
    
    
    
    
    
    
    
};





int main(){
    
    
    string brand ;
    string model ;
    int year ;
    string color;
    int price ;
    

    cin>>brand;
    cin>>model;
    cin>>year;
    cin>> color;
    cin>>price;
    
    
    Car car1(brand,model,year,color,price);

    Car car2(brand,model ,year,color,price);
    
    
    

    car1.setBrand(brand);
    car1.setModel(model);
    car1.setYear(year);
    car1.setColor(color);
    car1.setPrice(price);
  
    
    
   
    cout << " the brand is :" << car1.getBrand()<<endl;
    cout << " model is : " << car1.getModel()<<endl;
    cout << " year is :" << car1.getYear()<<endl;
    cout << " color is " << car1.getColor()<<endl;
    cout << " price is :" << car1.getPrice()<<endl;
  
    
 
    
    car1.showInfo();
    
   
    Car carArray[2];
    carArray[0] = car1;
    carArray[1] = car2;
    for (int i = 0 ; i < 2; i++) {
        carArray[i].showInfo();
    }
    
    
    
    
    
    
   
    return 0;
    
    
    
}
