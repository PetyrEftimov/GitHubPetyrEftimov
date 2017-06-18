//
//  InOffice.hpp
//  Kontrolno_Z3
//
//  Created by Pepi on 5/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef InOffice_hpp
#define InOffice_hpp
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "Course.hpp"

class InOffice : public Course{
    public :
    InOffice();
    
    InOffice(string , int ,int ,int, string ,string,int);
    ~InOffice();
    
    void setType(string type);
    void setAddress(string address);
    void setZala(int zala);
    
    string getType();
    string getAddress();
    int getZala();
    
    void courseInfo();
    
    
private:
    string m_type;
    string m_address;
    int    m_zala;
    
};

#endif /* InOffice_hpp */
