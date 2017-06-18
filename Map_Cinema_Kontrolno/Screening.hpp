//
//  Screening.hpp
//  Map_Cinema_Kontrolno
//
//  Created by Pepi on 6/3/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Screening_hpp
#define Screening_hpp
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <iterator>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <ostream>
#include <cctype>
#include <array>
#include "pugixml.hpp"
using namespace std;

class Screening{
public:
    Screening();
    Screening(string filmName , string hall , int capacyty , int soldTiket , int price , int id);
    ~Screening();
    
    void setFilmName(string filmName);
    void setHall(string hall);
    void setCapacyty(int capacyty);
    void setSoldTiket(int soldTiket);
    void setPrice(int price);
    void setId(int id);
    
    string  getFilmName();
    string  getHall();
    int     getCapacyty();
    int     getSoldTiket();
    int     getPrice();
    int     getId();
    
    void ScreeningInfo();
    
private:
    string m_filmName;
    string m_hall;
    int    m_capacyty;
    int    m_soldTicket;
    int    m_price;
    int    m_id;
    
    
};


#endif /* Screening_hpp */
