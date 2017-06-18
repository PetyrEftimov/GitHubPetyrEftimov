//
//  Book.hpp
//  Check_XML_Book
//
//  Created by Pepi on 5/23/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Book_hpp
#define Book_hpp
#include "pugixml.hpp"
#include <stdio.h>
#include <iostream>

using namespace std;

class Book{
public:
    
    Book();
    Book(string , string ,double);
    
    
    void setAuthor(string);
    void setTitle(string);
    void setPrice(double);
    
    string getAuthor();
    string getTitle();
    double getPrice();
    
    void bookInfo();
    
    
    
    
    
    
private:
    string author;
    string title;
    double price;
};




#endif /* Book_hpp */
