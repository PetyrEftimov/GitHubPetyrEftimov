//
//  Book.cpp
//  Kontrolno_Primer_Bookstore
//
//  Created by Pepi on 6/4/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Book.hpp"
Book::Book()
{
    
}

Book::Book(string name,string autor,int price,int soldBook)
{
    m_name = name;
    m_autor = autor;
    m_price = price;
    m_soldBook = soldBook;
}

Book:: ~Book()
{
    
}

void Book:: setName(string name)
{
    m_name = name;
}
void Book:: setAutor(string autor)
{
    m_autor = autor;
}
void Book:: setPrice(int price)
{
    m_price = price;
}
void Book:: setSoldBook(int soldBook)
{
    m_soldBook = soldBook;
}

string Book:: getName()
{
    return m_name;
}
string Book:: getAutor()
{
    return m_autor;
}
int Book::   getPrice()
{
    return m_price;
}
int Book::   getSoldBook()
{
    return m_soldBook;
}

void Book:: BookInfo()
{
    cout << getName()<<":"<<"AUTHOR:"<<getAutor()<<":"<<"PRICE:"<<getPrice()
    <<":"<<"SOLD:"<<getSoldBook()<<endl;
}
