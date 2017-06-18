//
//  Door.cpp
//  Kontrolno_Door
//
//  Created by Pepi on 5/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Door.hpp"
#include<iostream>
#include <iomanip>

using namespace std;

Door::Door(){}
Door::Door(double lenght , double height ,double width ,string color){
    setLenght(lenght);
    setHeight(height);
    m_width = width;
    m_color = color;
    
}
Door::~Door(){}


void Door:: setLenght(double lenght){
    if (lenght < 0.6 && lenght > 1.50) {
        cout << "you enter Wrong size";
    }
    else{
    m_lenght = lenght;
    }
}
void Door:: setHeight(double height){
    if (height < 1.00 && height > 2.5) {
        cout << "you enter Wrong size";
    }
    else{
    m_height = height;
    }
}
double Door:: getLenght(){
    return m_lenght;
}
double Door:: getHeight(){
    return m_height;
}
void Door:: setWidth(double width){
    m_width = width;
}
void Door:: setColor(string color){
    m_color = color;
}

double Door:: getWidth(){
    return m_width;
}
string Door:: getColor(){
    return m_color;
}




istream &operator >> (istream& input, Door& size){
    
    
    input >> setw(3) >> size.m_lenght;
    input.ignore(1);
    input >> setw(3) >> size.m_height;
    input.ignore(1);
    input >> setw(3) >> size.m_width;
    input.ignore(1);
    input >> setw(6) >> size.m_color;
    
    
    return input;
}

ostream &operator << (ostream& output, const Door& size){
    
    output << "=>" << size.m_lenght << "-" << size.m_width <<"-"<< size.m_lenght<<"-"<<size.m_color;
    
    return output;
}

Door& Door::operator+(Door& right){
    double newLenght  = this-> m_lenght + right.m_lenght;
    double newHeight = this -> m_height + right.m_height;
    double newWidth = this -> m_width + right.m_width;
    string newColor = this -> m_color;
    
    Door *result = new Door(newLenght , newHeight , newWidth, newColor);
    
    return *result;
}

bool Door::operator==(const Door &right) {
    return this->m_lenght == right.m_lenght && this-> m_height== right.m_height && this -> m_width == right.m_width && this -> m_color == right.m_color;
}


bool Door::operator>(const Door &right){
     return this->m_lenght > right.m_lenght && this-> m_height > right.m_height && this -> m_width > right.m_width;
    
}



bool Door::operator<(const Door &right){
    return this->m_lenght < right.m_lenght && this-> m_height < right.m_height && this -> m_width < right.m_width;
    
}




























