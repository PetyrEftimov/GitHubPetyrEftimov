//
//  invoice.cpp
//  Class_invoice
//
//  Created by Pepi on 4/5/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
#include <stdio.h>
#include "invoice.hpp"
#include <iostream>
using namespace std;



    
    
    
    
    
    
    
    
Invoice::Invoice(){
    
};


Invoice::Invoice(string partNumber , string partDescription , int quanity ,float pricePerItem){
    
    this -> partNumber = partNumber;
    this -> partDescription = partDescription;
    if(quanity < 0 ){
        this -> quanity = 0 ;
    }
    else{
    this -> quanity = quanity;
    }
    if (pricePerItem < 0 ) {
        this -> pricePerItem = 0 ;
    }
    else{
    this -> pricePerItem = pricePerItem;
    
    }
    
    
};

void Invoice::setPartNumber(string parNumber){
    
     this -> partNumber= partNumber;
    
}

void Invoice::setPartDescription(string partDescription){
    
    this -> partDescription = partDescription;
}

void Invoice::setQuanity(int quanity){
    if(quanity < 0 ){
        this -> quanity = 0 ;
    }
    else{
  
    this -> quanity = quanity;
    }
}

void Invoice::setPricePerItem(float pricePerItem){
    
    if(pricePerItem < 0 ){
        this -> pricePerItem = 0 ;
    }
    else{
    this -> pricePerItem = pricePerItem;
    }
}





void Invoice::showInfo(){
    cout << " PN : 122wsd4FF "  << this -> partNumber<< endl ;
    cout << " part Desk Milk : " << this -> partDescription << endl ;
    cout << " Quanity" << this -> quanity <<endl;
    cout << " price for item "  << this -> pricePerItem << endl ;
}

