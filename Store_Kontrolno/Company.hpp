//
//  Company.hpp
//  Store_Kontrolno
//
//  Created by Pepi on 6/2/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Company_hpp
#define Company_hpp
#include "Item.hpp"
#include <vector>
#include <string>

using namespace std;


class Company {
public:
    Company();
   // virtual ~Company();
    
    void Read_XML_Shop1_Push_Vector();
    void DailyTurnoverShop1();
    void ItemDaylMaxSells();
    
 
    
private:
    
    vector<Item> v_shop1;
    vector<Item> v_shop2;
    vector<Item> v_shop3;
    
    
    
};



#endif /* Company_hpp */



