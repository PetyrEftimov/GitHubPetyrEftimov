//
//  Door.hpp
//  Kontrolno_Door
//
//  Created by Pepi on 5/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Door_hpp
#define Door_hpp
#include <stdio.h>
#include <iostream>
using namespace std;

class Door{
    friend istream &operator >> (istream&, Door&);
    friend ostream &operator << (ostream&, const Door&);
    
    
public:
    Door();
    Door(double , double , double ,string);
    ~Door();
    
    
    
    Door& operator+(Door&);
    bool operator ==(const Door &);
    bool operator >(const Door &);
    bool operator < (const Door &);
    
    
    
    void setLenght(double);
    void setHeight(double);
    double getLenght();
    double getHeight();
    void setWidth(double);
    void setColor(string);
    double getWidth();
    string getColor();
    
    
    
private:
    double m_lenght;
    double m_height;
    double m_width;
    string m_color;
};

#endif /* Door_hpp */
