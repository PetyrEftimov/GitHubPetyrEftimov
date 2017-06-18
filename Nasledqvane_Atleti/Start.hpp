//
//  Start.hpp
//  Nasledqvane_Atleti
//
//  Created by Pepi on 5/2/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Start_hpp
#define Start_hpp
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "Athletes.hpp"
#include "Disciplines.hpp"
using namespace std;

class Start{
public:
    Start();
    Start(string , string , string  , Disciplines& , Athletes&);
    virtual ~Start();
    void setData(string);
    void setHour(string);
    void setType(string);
    
    string getData();
    string getHour();
    string getType();
    void addAthlet(string fName = "",string lName="",string country="", double bestOf= 0);
    void setDiscipline(string disciplineName = "" , double worldRecord = 0 , double recordOfTheRace = 0);
    void disciplineWinner();
    void searchAthlet(string name);
    Disciplines getDiscipline();
    Athletes    getAthlet();
    
private:
    vector<Athletes> m_athletes;
    Disciplines m_discipline;
    Athletes    m_athlet;
    string m_data;
    string m_hour;
    string m_type;
    
};



#endif /* Start_hpp */
