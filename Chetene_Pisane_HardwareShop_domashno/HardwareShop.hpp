//
//  HardwareShop.hpp
//  Chetene_Pisane_HardwareShop_domashno
//
//  Created by Pepi on 5/14/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef HardwareShop_hpp
#define HardwareShop_hpp
#include <stdio.h>
#include <string>
using namespace std;

class Hardware
{
public:
    static const int LENGTH = 30;
    
    Hardware( int = -1, string = "", int = 0, double = 0.0 );
    
    void setPartNumber( int );
    int getPartNumber() const;
    
    void setHardwareName( string );
    string getHardwareName() const;
    
    void setInStock( int );
    int getInStock() const;
    
    void setUnitPrice( double );
    double getUnitPrice() const;
    
private:
    int partNumber;
    string HardwareName ;
    int inStock;
    double unitPrice;
    



};


#endif /* HardwareShop_hpp */
