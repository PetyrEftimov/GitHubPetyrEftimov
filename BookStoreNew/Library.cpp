//
//  Library.cpp
//  Nasledqvane_Kompoziciq_BookStore_New
//
//  Created by Pepi on 5/16/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Library.hpp"
#include <string>
#include <vector>
#include <iostream>
#include "Book.hpp"
using namespace std;

Library::Library(){}

void Library::showBooks(){
    for (int i = 0 ; i < books.size(); i++) {
        books.at(i).printInfo();
    }
    
}









void Library::addBook(string name , string genre , int year , string isbn ,Autor& autors){
    int flag = 0 ;
    Book temp (name, genre, year ,isbn,autors);
    
   
    for (size_t i = 0 ; i < books.size(); i++) {
        if (books.at(i).getIsbn() == isbn) {
            cout<<"book already exists"<<endl;
            flag = 1;
        }
    }
 
    if (flag == 0 || books.size() == 0){
        books.push_back(temp);
    }
}

void Library::searchByName(string name){
    int flag = 0 ;
    for (size_t i = 0 ; i < books.size(); i++) {
        if (books.at(i).getName() == name) {
             books.at(i).printInfo();
            flag = 1;
        }
    }
    
    if (flag == 0) {
        cout << "no such book"<<endl;
    }
}


void Library::statisticByGenre(){
    int cntClasika = 0 ;
    int cntDetski = 0 ;
    int cntFantastika = 0 ;
    int cntBoigrafichen = 0 ;
    int cntLuboven = 0 ;
    
    for (size_t i = 0 ; i < books.size(); i++) {
        if (books.at(i).getGenre() == "detski") {
            cntDetski++;
        }
        if (books.at(i).getGenre() == "klasica") {
            cntClasika++;
        }
        if (books.at(i).getGenre() == "fantastika") {
            cntFantastika++;
        }
        if (books.at(i).getGenre() == "biografichen") {
            cntBoigrafichen++;
        }
        if (books.at(i).getGenre() == "luboven") {
            cntLuboven++;
        }
        
    }
    
    cout<<"Genre detski :" << cntDetski<<endl;
    cout<<"Genre klasica :" << cntClasika<<endl;
    cout<<"Genre fantastica :" << cntFantastika<<endl;
    cout<<"Genre biografichen :" << cntBoigrafichen<<endl;
    cout<<"Genre luboven :" << cntLuboven<<endl;
    
    
    
}

void Library::addObjektBook(Book& obj){
    int flag = 0 ;
   
    for (size_t i = 0 ; i < books.size(); i++) {
        if (books.at(i).getIsbn() == obj.getIsbn()) {
            cout<<"book already exists"<<endl;
            flag = 1;
        }
    }
    
    if (flag == 0 || books.size() == 0){
        books.push_back(obj);
    }
 
}




