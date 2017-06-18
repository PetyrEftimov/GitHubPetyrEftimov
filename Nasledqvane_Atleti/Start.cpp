//
//  Start.cpp
//  Nasledqvane_Atleti
//
//  Created by Pepi on 5/2/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Start.hpp"
#include <iostream>
#include <vector>
#include <string>
#include "Athletes.hpp"
#include "Disciplines.hpp"
using namespace std;
Start::Start(){}
Start::Start(string data  , string hour  , string type , class Disciplines& m_discipline , class Athletes& m_athlet):m_discipline(m_discipline),m_athlet(m_athlet){
    m_data = data;
    m_hour = hour;
    m_type = type;
}

Start::~Start(){}

void Start::setData(string data){
    m_data = data;
}
void Start::setHour(string hour){
    m_hour = hour;
}
void Start::setType(string type){
    m_type = type;
}

string Start::getData(){
    return m_data;
}
string Start::getHour(){
    return m_hour;
}
string Start::getType(){
    return m_type;
}

void  Start::addAthlet(string fName ,string lName,string country, double bestOf){
    Athletes temp(fName,lName,country,bestOf);
    m_athletes.push_back(temp);
    
}

void Start::setDiscipline(string disciplineName , double worldRecord , double recordOfTheRace){
    m_discipline.setDisciplineName(disciplineName);
    m_discipline.setWorldRecord(worldRecord);
    m_discipline.setRecordOfTheRace(recordOfTheRace);
}

void Start::disciplineWinner(){
    double best = m_athletes.at(0).getBestOf();
    size_t index = 0;
    for (size_t i = 1; i < m_athletes.size(); i++) {
        if (m_athletes.at(i).getBestOf() < best) {
            best = m_athletes.at(i).getBestOf();
            index = i;
        }
    }
    
    cout << "Winner is : " <<endl;
    m_athletes.at(index).printInfo();
    
}

void Start::searchAthlet(string name){
    cout << m_athletes.size();
    for (size_t i = 0 ; i < m_athletes.size(); i++) {
        if (m_athletes.at(i).getFName() == name) {
            m_athletes.at(i).printInfo();
        }
        else{
            cout << "athlet not found " << endl ;
        }
    }
}
Disciplines Start::getDiscipline(){
    return m_discipline;
}

