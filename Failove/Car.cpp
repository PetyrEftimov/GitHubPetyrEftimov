//
//  Car.cpp
//  Chetene_Pisane_Car
//
//  Created by Pepi on 5/15/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Car.hpp"
using namespace std;

Car::Car(int carNumber,string carName , int inStock , double price){
    setCarNumber(carNumber);
    setCarName(carName);
    setInStock(inStock);
    setPrice(price);
    
}

void Car::setCarNumber(int carNumber){
    m_carNumber = carNumber;
}
void Car::setCarName(string carNameString ){
    int length = carNameString.size();
    length = ( length < LENGHT ? length : LENGHT - 1 );
    //HardwareName is property of your class - arrray of chars
    carNameString.copy( m_carName, length );
    
    m_carName[ length ] = '\0';

}
void Car::setInStock(int inStock){
    m_inStock = inStock;
}
void Car::setPrice(double price){
    m_price = price;
}

int Car::getCarNumber(){
    return m_carNumber;
}
string Car::getCarName(){
    return m_carName;
}
int Car::getInStock(){
    return m_inStock;
}
double Car::getPrice(){
    return m_price;
}
