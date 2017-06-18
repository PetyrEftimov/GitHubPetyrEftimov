//
//  Movie.cpp
//  Nasledqvane_Kompoziciq_Videoteka
//
//  Created by Pepi on 5/17/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Movie.hpp"
#include <string>
#include <vector>
#include <iostream>
#include "Director.hpp"
using namespace std;
Movie::Movie(){}
Movie::Movie(string name , string genre ,string forAdults  , string id ,  class Director& directors): directors(directors){
    m_name = name;
    m_genre = genre;
    m_forAdults = forAdults;
    m_id = id;
}
Movie::~Movie(){
}

void Movie::setName(string name){
      m_name = name;
}
void Movie::setGenre(string genre){
      m_genre = genre;
}
void Movie::setForAdults(string forAdults){
    m_forAdults = forAdults;
}
void Movie::setId(string id){
     m_id = id;
}

string Movie:: getName(){
    return m_name;
}
string Movie:: getGenre(){
    return  m_genre;
}
string Movie:: getForAdults(){
    return m_forAdults;
}
string Movie:: getId(){
   return  m_id;
}

void Movie::moviePrintInfo(){
    cout << m_name <<"-"<< m_genre <<"-"<<m_forAdults<<"-"<<m_id<<"-";
    directors.directorInfo();
}


