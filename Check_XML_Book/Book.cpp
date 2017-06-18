//
//  Book.cpp
//  Check_XML_Book
//
//  Created by Pepi on 5/23/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Book.hpp"
#include "pugixml.hpp"
#include <stdio.h>
#include <iostream>

using namespace std;

Book::Book(){}
Book::Book(string author , string title  , double price){
    setAuthor(author);
    setTitle(title);
    setPrice(price);

}

void Book:: setAuthor(string author){
    this -> author = author;
}
void Book:: setTitle(string title){
    this -> title = title;
}
void Book:: setPrice(double price){
    this -> price = price;
}

string Book:: getAuthor(){
    return this -> author;
}
string Book:: getTitle(){
    return this -> title;
}
double Book:: getPrice(){
    return  this -> price;
}

void Book::bookInfo(){
    cout << "Book Author is : " << getAuthor()<<"Book title is : "<< getTitle()<< " Book price is "<<getPrice()<<endl;
    
    
}
