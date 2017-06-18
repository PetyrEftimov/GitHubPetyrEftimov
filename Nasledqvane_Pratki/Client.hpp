//
//  Client.hpp
//  Nasledqvane_Pratki
//
//  Created by Pepi on 4/28/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Client_hpp
#define Client_hpp
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "Address.hpp"
using namespace std;
class Client{
public:
    Client();
    Client(string,string,Address&);
    
    void setFName(string);
    void setLName(string);
    
    string getFName();
    string getLName();
    
    void clientPrintName();
    void clientAddress();
    int clientZipCode();
    string clientName();
    
    
private:
    string fName;
    string lName;
    Address addr;
};




#endif /* Client_hpp */
