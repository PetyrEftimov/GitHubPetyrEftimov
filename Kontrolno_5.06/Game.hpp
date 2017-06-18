//
//  Game.hpp
//  Kontrolno_5.06
//
//  Created by Pepi on 6/5/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp
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
#include "pugixml.hpp"
using namespace std;

class Game{
    
public :
    Game();
    Game(string name, int id , int level , int startCredit , int endCredit );
    ~Game();
    
    void setName(string name);
    void setId(int id);
    void setLevel(int level);
    void setStartCredit(int startCredit);
    void setEndCredit(int endCredit);
    
    string  getName();
    int     getId();
    int     getLevel();
    int     getStartCredit();
    int     getEndCredit();
    
    
    void GameInfo();
    
    
    
    
private:
    string  m_name;
    int     m_id;
    int     m_level;
    int     m_startCredit;
    int     m_endCredit;
    
    
};



#endif /* Game_hpp */
