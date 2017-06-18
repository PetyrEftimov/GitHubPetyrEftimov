//
//  Sender.hpp
//  Nasledqvane_Pratki
//
//  Created by Pepi on 5/2/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Sender_hpp
#define Sender_hpp
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "Client.hpp"
#include "Address.hpp"
using namespace std;
class Sender : public Client{
public:
    Sender();
    Sender(string , string , class Address& , string);
    
    
    void setBulstat(string);
    string getBulstat();
    
    

    
    
    void printInvoice();
    
  
private:
    
    string bulstat;
    Address addr1;
    


};

#endif /* Sender_hpp */
