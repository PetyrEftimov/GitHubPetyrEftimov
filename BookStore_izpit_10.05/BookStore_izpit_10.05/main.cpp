//
//  main.cpp
//  BookStore_izpit_10.05
//
//  Created by Pepi on 5/10/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include "Book.hpp"
#include "Autor.hpp"
using namespace std;

int main(){
    
    Autor autor1("ivan " , " Ivanov" , "bg");
    Autor autor2("muto" , "mutov" , "bg");
    Book  book1("alisa" , "children" ,1987 , "122wert" , autor1);
    Book  book2("univerce" , "fnatastika" , 1985 , "122rtgg" ,autor2);
    autor1.printAutorInfo();
    book1.printInfo();
    
//    vector<Book> books;
//    
//    books.push_back(book1);
//    books.push_back(book2);
//    
//    for (size_t i = 0 ; i < books.size(); i++) {
//        if (books.at(i).getName() == Book::getName()) {
//            <#statements#>
//        }
//        
//    }
    ;
    book1.addBook("alisa", "fantastika", 1985, "122rtgg", autor2);
    book1.addBook("univerce", "fantastika", 1987, "122wert",autor1);
    cout <<"----------"<<endl;
    book1.searchByName("alisa");
    

    return 0;
}
