//
//  Book.cpp
//  BookStore_izpit_10.05
//
//  Created by Pepi on 5/10/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Book.hpp"
#include <string>
#include <vector>
#include <iostream>
#include "Autor.hpp"
using namespace std;

Book::Book(){}
Book::Book(string name , string genre , int year ,string isbn  , class Autor& autors):autors(autors){

    m_name = name;
    m_genre = genre;
    m_year = year;
    
    if (m_isbn == isbn) {
        cout << "book is allredy input "<<endl;
    }
    else{
    m_isbn = isbn;
    }

}

Book::~Book(){}

void Book::setName(string name){
    m_name = name;
}
void Book::setGenre(string genre){
    m_genre = genre;
}
void Book::setYear(int year){
    m_year = year;
}
void Book::setIsbn(string isbn){
    if (m_isbn == isbn) {
        cout << "book is allredy input "<<endl;
    }
    else{
    m_isbn = isbn;
    }
}

string Book::getName(){
    return m_name;
}
string Book::getGenre(){
    return m_genre;
}
int Book::getYear(){
    return m_year;
}
string Book::getIsbn(){
    return  m_isbn;
}


void Book::printInfo(){
    cout << getName()<<endl;
    cout << getGenre()<<endl;
    cout << getYear()<<endl;
    cout << getIsbn()<<endl;
    cout << autors.getFName()<<endl;
    cout << autors.getLName()<<endl;
}

void Book::addBook(string name , string genre , int year , string isbn ,Autor&){
    Book temp (name, genre, year ,isbn,autors);
   
    books.push_back(temp);
    
    
}

void Book::searchByName(string name){
    
    bool found = false;
    
    for (size_t i = 0 ; i < books.size(); i++) {
        if(books.at(i).getName() == name){
            
            books.at(i).printInfo();
            found = true;
            
        }
    }
}




