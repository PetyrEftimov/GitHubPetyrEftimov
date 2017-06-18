//
//  Box.cpp
//  Predfinirani_Operatori_Box_New
//
//  Created by Pepi on 5/17/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Box.hpp"
#include <iomanip>
#include <iostream>
using namespace std;
Box::Box(){}
Box::Box(int x, int y, int z ) {
    
    setX(x);
    setY(y);
    setZ(z);
}

Box::~Box() {
    
}

istream &operator>> (istream& input, Box& box){
    
    input >> setw(2) >> box.m_x; // x
    input.ignore(1);	              // -
    input >> setw(2) >> box.m_y; // y
    input.ignore(1); 	              // -
    input >> setw(2) >> box.m_z; // z

    return input;
}

ostream &operator<< (ostream& output, const Box& box){
    
    output << "[" << box.m_x << "-" << box.m_y << "-" << box.m_z <<"]";
    return output;
}

bool Box::operator!=(const Box &right) {
    return this->m_x != right.m_x || this->m_y != right.m_y || this->m_z != right.m_z ;
}


bool Box::operator==(const Box &right) {
    return this->m_x == right.m_x && this->m_y == right.m_y && this->m_z == right.m_z ;
}

int Box::getX() const {
    return m_x;
}

void Box::setX(int x) {
    if (x <  100 || x > 900) {
        cout << "enter number > 100 & < 900"<< endl;
    }
    else{
    m_x = x;
    }
}

int Box::getY() const {
    return m_y;
}

void Box::setY(int y) {
    if (y <  100 || y > 900) {
        cout << "enter number > 100 & < 900"<< endl;
    }
    else{
        m_y = y;
    }
}



void Box::setZ(int z){
    
    if (z <  100 || z > 900) {
        cout << "enter number > 100 & < 900"<< endl;
    }
    else{
        m_z = z;
    }
}
    int Box::getZ() const {
        return m_z;
    }


Box& Box ::operator+(Box &  right){
   
    
    int newBoxX = this-> m_x + right.m_x;
    int newBoxY = this-> m_y + right.m_y;
    int newBoxZ = this-> m_z + right.m_z;
    Box *result = new Box(newBoxX , newBoxY , newBoxZ);
    return *result;
}
bool Box::operator>(const Box & right){
    return this -> m_x > right.m_x && this-> m_y > right.m_y && this->m_z > right.m_z;
}
