//
//  VideoLibrary.cpp
//  Nasledqvane_Kompoziciq_Videoteka
//
//  Created by Pepi on 5/17/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "VideoLibrary.hpp"
VideoLibrary::VideoLibrary(){}
VideoLibrary::~VideoLibrary(){}

void VideoLibrary::addObjektMovie(Movie& obj){
    int flag = 0 ;
    
    for (size_t i = 0 ; i < movies.size(); i++) {
        if (movies.at(i).getId() == obj.getId()) {
            cout<<"book already exists"<<endl;
            flag = 1;
        }
    }
    
    if (flag == 0 || movies.size() == 0){
        movies.push_back(obj);
    }
    
}

void VideoLibrary:: searchByName(string name){
    int flag = 0 ;
    for (size_t i = 0 ; i < movies.size(); i++) {
        if (movies.at(i).getName() == name) {
            movies.at(i).moviePrintInfo();
            flag = 1;
        }
    }
    
    if (flag == 0) {
        cout << "no such book"<<endl;
    }
    
}
void VideoLibrary:: statisticByGenre(){
    int comedy = 0 ;
    int action = 0 ;
    int drama = 0 ;
    int triller = 0 ;
    int documental = 0 ;
    
    for (size_t i = 0 ; i < movies.size(); i++) {
        if (movies.at(i).getGenre() == "comedy") {
            comedy++;
        }
        if (movies.at(i).getGenre() == "action") {
            action++;
        }
        if (movies.at(i).getGenre() == "drama") {
            drama++;
        }
        if (movies.at(i).getGenre() == "triller") {
            triller++;
        }
        if (movies.at(i).getGenre() == "documental") {
            documental++;
        }
        
    }
    
    cout<<"Genre comedy :" << comedy<<endl;
    cout<<"Genre action :" << action<<endl;
    cout<<"Genre drama :" << drama<<endl;
    cout<<"Genre triller :" << triller<<endl;
    cout<<"Genre documental :" << documental<<endl;
    
    
}

void VideoLibrary::showMovie(){
    for (size_t  i  = 0; i < movies.size(); i++) {
        movies.at(i).moviePrintInfo();
    }
  

}

