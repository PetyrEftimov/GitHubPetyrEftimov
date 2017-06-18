//
//  Movie.hpp
//  Nasledqvane_Kompoziciq_Videoteka
//
//  Created by Pepi on 5/17/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Movie_hpp
#define Movie_hpp
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "Director.hpp"
using namespace std;

class Movie{
    
public:
    Movie();
    Movie(string  , string  ,string   , string   , Director& );
    ~Movie();
    void setName(string name);
    void setGenre(string genre);
    void setForAdults(string forAdults);
    void setId(string id);
    
    string getName();
    string getGenre();
    string getForAdults();
    string getId();
    
    void moviePrintInfo();
    
    
    
    
private:
    string m_name;
    string m_genre;
    string m_forAdults;
    string m_id;
    Director directors;
    
};

#endif /* Movie_hpp */
