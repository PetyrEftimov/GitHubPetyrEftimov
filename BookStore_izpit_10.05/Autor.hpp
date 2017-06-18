//
//  Autor.hpp
//  BookStore_izpit_10.05
//
//  Created by Pepi on 5/10/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Autor_hpp
#define Autor_hpp
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Autor{
    
public:
    Autor();
    Autor(string , string ,string);
    ~Autor();
    
    void setFName(string fName);
    void setLname(string lName);
    void setCountry(string country);
    
    
    string getFName();
    string getLName();
    string getCountry();
    
    void printAutorInfo();
    
private:
    string m_fName;
    string m_lName;
    string m_country;
};






#endif /* Autor_hpp */
