//
//  Box.hpp
//  Predfinirani_Operatori_Box_New
//
//  Created by Pepi on 5/17/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Box_hpp
#define Box_hpp
#include <stdio.h>
#include <iostream>
using namespace std;

class Box {
    
    friend istream &operator >> (istream&, Box&);
    friend ostream &operator << (ostream&, const Box&);
    
public:
    Box();
    Box(int   , int   , int );
    virtual ~Box();
    
    
    bool operator==(const Box &);
    bool operator!=(const Box&);
    bool operator > (const Box&);
    Box& operator +(Box&);
    
    
    int getX() const;
    void setX(int x);
    
    int getY() const;
    void setY(int y);
    
    int getZ() const;
    void setZ(int z);
    
private:
    
    int m_x;
    int m_y;
    int m_z;
    
    
};


#endif /* Box_hpp */
