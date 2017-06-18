//
//  Cars.hpp
//  Klasove_cars
//
//  Created by Pepi on 4/4/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Cars_hpp
#define Cars_hpp
#include <string>
#include <stdio.h>
using namespace std;

#endif /* Cars_hpp */
class Klasove_cars{


public:
    

    
    Klasove_cars(string,string , int,string ,int);
    

    void setBrand(string);
    void setModel(string);
    void setYear(int);
    void setColor(string);
    void setPrice(int);
    
    


    


string brand;
string model;
int year;
string color;
int price ;
    
    string getBrand();
    string getModel();
    int getYear();
    string getColor();
    int getPrice();
    
    void showInfo();
    

    

};
