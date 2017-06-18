//
//  main.cpp
//  Nasledqvane_Kompoziciq_BookStore_New
//
//  Created by Pepi on 5/16/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include "Library.hpp"
#include <string>
#include <vector>
#include "Autor.hpp"
#include "Book.hpp"
using namespace std;

int main(){
    
    Autor autor1("ivan" , "ivanov" ,"bg");
    Library library1;
//    library1.addBook("alisa", "detski", 1989, "1", autor1);
//    library1.addBook("alisa1", "klasica", 1989, "1", autor1);
//    library1.addBook("alisa2", "fantastika", 1989, "3", autor1);
//    library1.addBook("alisa3", "biografichen", 1989, "4", autor1);
//    library1.addBook("alisa4", "luboven", 1989, "5", autor1);
//    library1.addBook("alisa5", "luboven", 1989, "6", autor1);
//    library1.showBooks();
//    library1.searchByName("alisa4");
//    library1.statisticByGenre();
    Book book1("alisa", "detski", 1989, "1", autor1);
    Book book2("alisa", "detski", 1989, "2", autor1);
    Book book3("alisa", "detski", 1989, "3", autor1);
    Book book4("alisa", "detski", 1989, "4", autor1);
    
    cout << "++++++++++++"<<endl;
    library1.addObjektBook(book1);
    library1.addObjektBook(book2);
    library1.showBooks();
    library1.searchByName("alisa");
    library1.statisticByGenre();
    
    

    return 0;
}
