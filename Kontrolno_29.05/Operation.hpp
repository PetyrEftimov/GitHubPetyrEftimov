//
//  Operation.hpp
//  Kontrolno_29.05
//
//  Created by Pepi on 5/29/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Operation_hpp
#define Operation_hpp
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <iterator>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <ostream>
#include <cctype>
#include <array>
#include "Magazin.hpp"
using namespace std;

class Operation{
public:
    Operation();
    ~Operation();
    void   ReadFromFileAndSetMembers();
    void   minMoney();
    void   maxMoney();
    void   searchByName(string name);
    void   articulLoserWiner();
    void   allMagazinLoserWiner();
private:
   // vector<Magazin>magazins;
     vector<Magazin> v_magazin;
     vector<Magazin> v_magazin3;
     vector<Magazin> v_magazin2;
    
    map<int, string> m_map;
    map<int , string> m_map2;
    map<int , string> m_map3;
    map <int , string > m_firm;
    

    
};

extern Operation op1;
extern Operation op2;


#endif /* Operation_hpp */
