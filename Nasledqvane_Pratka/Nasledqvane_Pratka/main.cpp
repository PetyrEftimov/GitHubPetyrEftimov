//
//  main.cpp
//  Nasledqvane_Pratka
//
//  Created by Pepi on 4/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
#include "Shipment.hpp"
#include "Reciver.hpp"
using namespace std;


int  main(){
    
    
    Adress adr1(1324,"sofia" ,"bg" , "Vyzkresenie" , 10);
    
    Reciver res1("pepi" ,"card",adr1 );
    
    Shipment ship1(4, 15, res1);

    ship1.shipInfo();
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
    
    
