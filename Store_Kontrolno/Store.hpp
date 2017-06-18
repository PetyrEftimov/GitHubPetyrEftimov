//
//  Store.hpp
//  Store_Kontrolno
//
//  Created by Pepi on 6/2/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Store_hpp
#define Store_hpp
#include <vector>
#include <stdio.h>
#include "Item.hpp"

class Store {
    
public:
    
    Store();
    void addItemVectorInStore();
    
private:
    vector<Item> itemsPerStore;
    
    
    
};


#endif /* Store_hpp */

