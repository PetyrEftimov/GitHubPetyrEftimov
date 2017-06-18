//
//  CD.hpp
//  XML_Chetene_Vector
//
//  Created by Pepi on 5/23/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef CD_hpp
#define CD_hpp
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "pugixml.hpp"
using namespace std;


class Cd{
    
public:
    
    Cd();
    Cd(string , string , double );
    
    void setTitle(string title);
    void setArtist(string artist);
    void setPrice(double price);
    void setSize(int size);
    
    
    string getTitle();
    string getArtist();
    double getPrice();
    int    getSize();
    
    void cdInfo();
    
    
private:
    
    string title;
    string artist;
    double price;
    int   m_size;
  
    
    
};


#endif /* CD_hpp */
