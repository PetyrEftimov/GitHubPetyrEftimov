//
//  main.cpp
//  Nasledqvane_Kompoziciq_Videoteka
//
//  Created by Pepi on 5/17/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include "Director.hpp"
#include "Movie.hpp"
#include "VideoLibrary.hpp"
using namespace std;

int main(){
    VideoLibrary videoLibrary1;
    Director director1("hampi" , "manolkov" , "visoka");
    Movie movie1("wite chiks","comedy","1234","pegi12",director1);
    Movie movie2("star wars","action","12345","pegi10",director1);
    Movie movie3("the thing" , "triller" , "123456","pegi16",director1);
//    movie1.moviePrintInfo();
    videoLibrary1.addObjektMovie(movie1);
    videoLibrary1.addObjektMovie(movie2);
    videoLibrary1.addObjektMovie(movie3);
    videoLibrary1.searchByName("wite chiks");
    videoLibrary1.statisticByGenre();
    videoLibrary1.showMovie();
    
    
         
         
         
    return 0;
}
