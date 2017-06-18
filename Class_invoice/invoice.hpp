//
//  invoice.hpp
//  Class_invoice
//
//  Created by Pepi on 4/5/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef invoice_hpp
#define invoice_hpp
#include <iostream>

#include <stdio.h>

#endif /* invoice_hpp */
using namespace std;

class Invoice{
    
public:
    
    Invoice();
    Invoice(string,string,int,float);
    
    void setPartNumber(string);
    void setPartDescription(string);
    void setQuanity(int);
    void setPricePerItem(float);
    
    
    
    string partNumber;
    string partDescription;
    int quanity ;
    float pricePerItem;
    
    
    string getPartNumber();
    string getPartDescription();
    int getQuanity();
    float getPricePerItem();
    
    void showInfo();
    
    
    
    
    
    
    
    
    
    
};
