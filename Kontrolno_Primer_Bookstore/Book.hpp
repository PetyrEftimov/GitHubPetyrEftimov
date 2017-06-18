//
//  Book.hpp
//  Kontrolno_Primer_Bookstore
//
//  Created by Pepi on 6/4/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Book_hpp
#define Book_hpp
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

class Book{
public:
    Book();
    Book(string name,string autor,int price,int soldBook);
    ~Book();
    
    void setName(string name);
    void setAutor(string autor);
    void setPrice(int price);
    void setSoldBook(int soldBook);
    
    string getName();
    string getAutor();
    int    getPrice();
    int    getSoldBook();
    
    void BookInfo();
    
    
    
    
private:
    string m_name;
    string m_autor;
    int    m_price;
    int    m_soldBook;
    
};


#endif /* Book_hpp */
