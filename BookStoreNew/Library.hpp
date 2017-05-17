//
//  Library.hpp
//  Nasledqvane_Kompoziciq_BookStore_New
//
//  Created by Pepi on 5/16/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Library_hpp
#define Library_hpp
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "Book.hpp"
using namespace std;
class Library{
public:
    Library();
    
    void addBook(string name , string genre , int year , string isbn ,Autor& autors);
    void searchByName(string name);
    void statisticByGenre();
    void showBooks();
    void addObjektBook(Book&);
    
    
private:
    
    vector<Book> books;
    
};

#endif /* Library_hpp */
