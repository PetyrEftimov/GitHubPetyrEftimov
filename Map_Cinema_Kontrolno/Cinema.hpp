//
//  Cinema.hpp
//  Map_Cinema_Kontrolno
//
//  Created by Pepi on 6/3/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Cinema_hpp
#define Cinema_hpp
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
#include "pugixml.hpp"
#include "Screening.hpp"
using namespace std;

typedef multimap<string, int> MM_TypeToQuantityStrInt;
typedef multimap<string, string> MM_SearchByNameStrStr;
typedef multimap<double , string> MM_ProfitableSceeningResult;


class Cinema{
public:
    Cinema();
    void LoadXml(string );
    string RevenuePerScreening();
    MM_TypeToQuantityStrInt ScreeningMaxRevenue();
    MM_SearchByNameStrStr SearchByMovie(string name);
    void CalculateDuplicatetMovies();
    void RevenuePerMovie();
    void SmalestRevenuePerMovie();
    void SearchByMovie();
    
    
    
    double TurnoverCinema();
    double TurnoverScreening(string name);
     MM_ProfitableSceeningResult ProfitableScreening();
    
private:

    vector<Screening> v_screenings1;
    
    multimap <int , string> mm_screening;
    
    map<string , int > m_noDupliMovie;
    
    map<string , int> m_profitable;
    
    multimap<double , string,greater<double> > m_multimapProfitable;
  
    
};

extern Cinema cn1;

#endif /* Cinema_hpp */
