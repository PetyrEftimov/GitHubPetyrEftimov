//
//  Hall.hpp
//  Kontrolno_5.06
//
//  Created by Pepi on 6/5/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Hall_hpp
#define Hall_hpp
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
#include "Game.hpp"
using namespace std;
typedef map<string,int> m_profit ;
typedef multimap<string, int> MM_GameToRevenue;
typedef multimap<string,int> MM_MostPlay;
typedef map<int, string, greater<int> > M_MostProfitableGameInCasino;
static     vector<Game> v_allHalls;
class Hall{
    
public:
    Hall();
    MM_GameToRevenue LoadXml(string path, string path2, string path3  );
    m_profit CasinoProfitForGame();
    int dailyRevenueCasino();
    MM_GameToRevenue searchByGameName(string);
    M_MostProfitableGameInCasino mostProfitableGameInCasino();
    MM_MostPlay MostPlaingGame();
    M_MostProfitableGameInCasino mostFiveProfitableGamesInCasino();
    
    vector <string> findMostPlayedGameNtimes(vector<Game> ints , int n );
    
    
    
    
private:
    vector<Game> v_hall1;
    vector<Game> v_hall2;
    vector<Game> v_hall3;
  //  vector<Game> v_allHalls;
    map<string , int > m_allInfoFromXMLsWithoutDuplicates;
    
};

extern Hall hl1;

#endif /* Hall_hpp */
