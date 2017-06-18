//
//  HardwareShop.cpp
//  Chetene_Pisane_HardwareShop_domashno
//
//  Created by Pepi on 5/14/17.
//  Copyright © 2017 Pepi. All rights reserved.
//


#include <string>
#include "HardwareShop.hpp"
using namespace std;

Hardware::Hardware( int partNumberValue, string HardwareNameValue, int inStockValue, double unitPriceValue )
{
    setPartNumber( partNumberValue );
    setHardwareName( HardwareNameValue );
    setInStock( inStockValue );
    setUnitPrice( unitPriceValue );
}

void Hardware::setPartNumber( int partNumberValue )
{
    partNumber = partNumberValue;
}

int Hardware::getPartNumber() const
{
    return partNumber;
}


void Hardware::setHardwareName( string HardwareNameString )
{
    HardwareName = HardwareNameString;
}

string Hardware::getHardwareName() const
{
    return HardwareName;
}

void Hardware::setInStock( int inStockValue )
{
    inStock = inStockValue;
}

int Hardware::getInStock() const
{
    return inStock;
}

void Hardware::setUnitPrice( double unitPriceValue )
{
    unitPrice = unitPriceValue;
}

double Hardware::getUnitPrice() const
{
    return unitPrice;
}
