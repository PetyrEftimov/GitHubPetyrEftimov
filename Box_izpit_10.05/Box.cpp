//
//  Box.cpp
//  Box_izpit_10.05
//
//  Created by Pepi on 5/10/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Box.hpp"


Box::Box(int length, int width, int heigth)
{
    setLength(length);
    setWidth(width);
    setHeigth(heigth);
    
}

int Box::getHeigth() const
{
    return heigth;
}

int Box::getLength() const
{
    return length;
}

int Box::getWidth() const
{
    return width;
}

void Box::setHeigth(int heigth)
{
    if (this->heigth < 10 && this->heigth > 99)
    {
        this->heigth = 1;
    }
    
    else
    {
        this->heigth = heigth;
    }
}

void Box::setLength(int length)
{
    if (this->length < 10 && this->length > 99)
    {
        this->length = 1;
    }
    
    else
    {
        this->length = length;
    }
}

double Box::volumeBox()
{
    return length*width*heigth;
}

void Box::displayBox()
{
    cout<<"Length is: "<<getLength()<<endl;
    cout<<"Width is: "<<getWidth()<<endl;
    cout<<"Heigth is: "<<getHeigth()<<endl;
}

void Box::setWidth(int width)
{
    if (this->width < 10 && this->width > 99)
    {
        this->width = 1;
    }
    
    else
    {
        this->width = width;
    }
}

Box Box::operator+(const Box &box)
{
    return Box(length+ box.length, width + box.width, heigth + box.heigth);
}

bool Box::operator==(const Box &box)
{
    return length == box.length && width == box.width && heigth == box.heigth;
}

ostream &operator <<(ostream& output, Box& box)
{
    output <<"The volume of the box is: " << box.volumeBox();
    return output;
}

istream &operator >>(istream& input, Box& box)
{
    int length, width, heigth;
    cout<<"Enter Length: ";
    input >> length;
    box.setLength(length);
    cout<<"Enter Width: ";
    input >> width;
    box.setWidth(width);
    cout<<"Enter Heigth: ";
    input >> heigth;
    box.setHeigth(heigth);
    
    return input;
}



Box::~Box()
{
    
}
