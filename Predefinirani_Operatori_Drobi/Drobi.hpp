//
//  Drobi.hpp
//  Predefinirani_Operatori_Drobi
//
//  Created by Pepi on 5/8/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Drobi_hpp
#define Drobi_hpp
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <istream>
#include <ostream>
using namespace std;

class Drobi{
    friend istream &operator >> (istream&  , Drobi&);
    friend ostream &operator << (ostream& ,const Drobi&);
public:
    Drobi();
    Drobi(int , int );
    
    void setChislitel(int chislitel);
    void setZnamenatel(int znamenatel);
    
    int getChislitel();
    int getZnamenatel();
    
    bool operator!=( const Drobi & ) const;
    Drobi& operator*(Drobi&);
    ~Drobi();
    
private:
    int m_chislitel ;
    int m_znamenatel ;
    
};




#endif /* Drobi_hpp */
