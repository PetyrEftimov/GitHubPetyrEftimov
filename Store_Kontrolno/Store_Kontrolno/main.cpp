//
//  main.cpp
//  Store_Kontrolno
//
//  Created by Pepi on 6/2/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include "pugixml.hpp"
#include "Item.hpp"
#include "Company.hpp"
using namespace std;

int main(){
    
//    item1.ReadFromFilePushInVectors();
    
//    Store store1;
//    store1.addItemVectorInStore()
      
    Company company;
    company.Read_XML_Shop1_Push_Vector();
    
    company.DailyTurnoverShop1();
    
    return 0;
}
