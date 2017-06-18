//
//  main.cpp
//  Check_XML_Book
//
//  Created by Pepi on 5/23/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include "pugixml.hpp"
#include "Book.hpp"
#include <vector>
using namespace std;

int main(){
    
    string nameBook;
    double price ;
    pugi::xml_document doc;
    if (!doc.load_file("Books.xml")){
        cerr<< "File could not be readet";
    }
    else{
        cout <<"is ok";
    }
    
    pugi::xml_node nodeObjekt = doc.child("catalog");
    pugi::xml_node book = nodeObjekt.child("book");
    
    nameBook = book.child("author").text().as_string();
    price = book.child("price").text().as_double();
    
    cout << nameBook<<":"<< endl;
    cout <<price<<":"<<endl;
    
    vector<double> prices;
    
    for (pugi::xml_node book = nodeObjekt.child("book");  book; book = book.next_sibling("book")){
        
        cout <<"Book }" <<endl;
        cout << book.child("author").text().as_string()<<endl;
        cout << book.child("price").text().as_double()<<endl;
        prices.push_back(book.child("price").text().as_double());
        
  
    }
    for (size_t i = 0; i < prices.size(); i++) {
        price = price+prices.at(i);
    }
    
    cout << "total price of books " << price << endl ;
    
    vector<Book>v_book;
    for (pugi::xml_node book = nodeObjekt.child("book");book;book = book.next_sibling("book")) {
        
    
    Book book1;
    book1.setAuthor(book.child("author").text().as_string());
    book1.setTitle(book.child("title").text().as_string());
    book1.setPrice(book.child("price").text().as_double());
    
    v_book.push_back(book1);
        
    }
    for (size_t i = 0 ; i < v_book.size(); i++) {
        v_book.at(i).bookInfo();
        price = price+v_book.at(i).getPrice();
        
    }
    cout << price;
    
    
    
    
    
    
    
    
    

    
    return 0;
}
