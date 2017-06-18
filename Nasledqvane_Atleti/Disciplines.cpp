//
//  Disciplines.cpp
//  Nasledqvane_Atleti
//
//  Created by Pepi on 5/2/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Disciplines.hpp"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

Disciplines::Disciplines(string disciplineName , double worldRecord , double recordOfTheRace){
     m_disciplineName  = disciplineName;
    m_worldRecord     = worldRecord;
    m_recordOfTheRace = recordOfTheRace;
}
Disciplines::~ Disciplines(){
    
}


void Disciplines::setDisciplineName(string disciplineName){
    m_disciplineName = disciplineName;
}
void Disciplines::setWorldRecord(double worldRecord){
    m_worldRecord = worldRecord;
}
void Disciplines::setRecordOfTheRace(double recordOfTheRace){
    m_recordOfTheRace = recordOfTheRace;
}

string Disciplines::getDisciplineName(){
    return m_disciplineName;
}
double Disciplines::getWorldRecord(){
    return m_worldRecord;
}
double Disciplines::getRecordOfTheRace(){
    return m_recordOfTheRace;
}

void Disciplines::disciplineInfo(){
    cout << m_disciplineName << endl;
    cout << m_worldRecord    << endl;
    cout << m_recordOfTheRace<< endl;
}



