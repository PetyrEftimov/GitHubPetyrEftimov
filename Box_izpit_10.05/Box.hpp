//
//  Box.hpp
//  Box_izpit_10.05
//
//  Created by Pepi on 5/10/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Box_hpp
#define Box_hpp
#include <stdio.h>
#include <iostream>
using namespace std;

class Box
{
    friend ostream &operator <<(ostream& output, Box& value);
    friend istream &operator >>(istream& input, Box& value);
    
public:
    Box(int length = 0, int width = 0, int heigth = 0);
    double volumeBox();
    Box operator+(const Box & );
    bool operator==(const Box & );
    Box operator<(const Box &);
    void displayBox();
    virtual ~Box();
    int getHeigth() const;
    int getLength() const;
    int getWidth() const;
    void setHeigth(int heigth);
    void setLength(int length);
    void setWidth(int width);
    
private:
    int length;
    int width;
    int heigth;
};





#endif /* Box_hpp */
