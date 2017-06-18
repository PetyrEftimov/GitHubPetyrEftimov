//
//  Client.hpp
//  Nasledqvane_Dostavka_na_Pica
//
//  Created by Pepi on 4/20/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Client_hpp
#define Client_hpp
#include <vector>
#include "Adress.hpp"
#include <string>

#include <stdio.h>
using namespace std;



class Client{
    
public:
    
    Client();
    Client(string,string,vector<Adress>);
    
    void   setFirstName(string);
    void   setLasName(string);
    string getFirstName();
    string getLastName();
    
    
    
    
    void showName();
    
    void addAdress(int id, string street, int number);
    
    void showAddresses();
    void removeAdress(int id);
    
    
    
private:
    string firstName;
    string lastName;
   //vector <Adress> adreses;
  //  Adress adreses[3];
    
    vector<Adress> adreses;
    
    
};





#endif /* Client_hpp */
