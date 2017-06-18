//
//  Director.cpp
//  Nasledqvane_Kompoziciq_Videoteka
//
//  Created by Pepi on 5/17/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Director.hpp"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

Director::Director(){}
Director::Director(string fName   ,string lName   , string popularity ){

    m_fName = fName;
    m_lName = lName;
    m_popularity = popularity;

}

void Director::setFName(string fName){
    m_fName = fName;
}
void Director::setLName(string lName){
  m_lName = lName;
}
void Director::setPopularity(string popularity){
  m_popularity = popularity;
}
string Director:: getFName(){
    return m_fName;
}
string Director::getLName(){
    return m_lName;
}
string Director::getPopularity(){
    return m_popularity;
}
Director::~Director(){
}
void Director::directorInfo(){
    cout << m_fName<<"-"<<m_lName<<"-"<<m_popularity<<endl;
    
}
