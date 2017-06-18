//
//  Book.hpp
//  Nasledqvane_Kompoziciq_BookStore_New
//
//  Created by Pepi on 5/16/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Book_hpp
#define Book_hpp
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "Autor.hpp"
using namespace std;

class Book{
public:
    Book();
    Book(string , string , int ,string , Autor&);
    ~Book();
    
    void setName(string name);
    void setGenre(string genre);
    void setYear(int year);
    void setIsbn(string isbn);
    
    string getName();
    string getGenre();
    int    getYear();
    string getIsbn();
    
    void printInfo();
    void addBook(string name , string genre , int year , string isbn ,Autor&);
    void searchByName(string name);
    
private:
    string m_name;
    string m_genre;
    int    m_year;
    string m_isbn;
    Autor  autors;
    
    
};




#endif /* Book_hpp */




