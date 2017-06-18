//
//  CD.cpp
//  XML_Chetene_Vector
//
//  Created by Pepi on 5/23/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "CD.hpp"
#include <string>
#include <vector>
#include <iostream>
#include "pugixml.hpp"
using namespace std;

Cd::Cd(){}
Cd::Cd(string title , string artist  , double price){
    
    setTitle(title);
    setArtist(artist);
    setPrice(price);
    
}
void Cd:: setTitle(string title){
    this -> title = title;
}
void Cd:: setArtist(string artist){
    this -> artist = artist;
}
void Cd:: setPrice(double price){
    this -> price = price;
}
void Cd:: setSize(int size)
{
    m_size = size;
}

string Cd:: getTitle(){
    return this -> title;
}
string Cd:: getArtist(){
    return  this -> artist;
}
double Cd:: getPrice(){
    return this -> price;
}
int Cd::    getSize()
{
    return m_size;
}
void Cd:: cdInfo(){
    cout << "cd title is : " <<getTitle()<<" Artist is : "<<getArtist()<<" cd price ia : "<<getPrice()<<endl;
}
