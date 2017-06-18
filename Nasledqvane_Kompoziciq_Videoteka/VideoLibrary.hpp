//
//  VideoLibrary.hpp
//  Nasledqvane_Kompoziciq_Videoteka
//
//  Created by Pepi on 5/17/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef VideoLibrary_hpp
#define VideoLibrary_hpp
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "Movie.hpp"
using namespace std;
class VideoLibrary{
public:
    VideoLibrary();
    ~VideoLibrary();
    
    void searchByName(string name);
    void statisticByGenre();
    void showMovie();
    void addObjektMovie(Movie&);
    
private:
    vector<Movie> movies;
};



#endif /* VideoLibrary_hpp */
