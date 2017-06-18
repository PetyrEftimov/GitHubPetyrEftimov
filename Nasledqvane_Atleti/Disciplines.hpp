//
//  Disciplines.hpp
//  Nasledqvane_Atleti
//
//  Created by Pepi on 5/2/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Disciplines_hpp
#define Disciplines_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Disciplines{
public:
    Disciplines(string disciplineName = "" , double worldRecord = 0 , double recordOfTheRace = 0);
    virtual ~ Disciplines();
    
    void setDisciplineName(string);
    void setWorldRecord(double);
    void setRecordOfTheRace(double);
    
    string getDisciplineName();
    double getWorldRecord();
    double getRecordOfTheRace();
    void disciplineInfo();
    
private:
    string m_disciplineName;
    double m_worldRecord;
    double m_recordOfTheRace;
    
};


#endif /* Disciplines_hpp */
