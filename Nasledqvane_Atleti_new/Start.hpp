#ifndef Start_h
#define Start_h
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "Athlets.hpp"
#include "Disciplines.hpp"

using namespace std;

class Start{
    
public:
    
    Start(string data = "" , string hour = "" , string type = "");
    virtual ~Start();
    
    void setData(string);
    void setHour(string);
    void setType(string);
    
    string getData();
    string getHour();
    string getType();
    
    void addAthlet(string fName = "",string lName="",string country="", double bestOf= 0, string disciplineName = "");
    void addDisciplines(string disciplineName = "" , double worldRecord = 0 , double recordOfTheRace = 0);
    void setDiscipline(string disciplineName = "" , double worldRecord = 0 , double recordOfTheRace = 0);
    void disciplineWinner();
    void searchDiscipline(string disciplineName);
    void searchByDiscipline(string disciplineName);
    void searchAthlet(string name);
    Disciplines getDiscipline();
    void printInfo();
    
private:
    
    vector<Athlets> m_athletes;
    // Disciplines m_discipline;
    vector<Disciplines*> m_discipline;
    vector<Start> m_starts;
    string m_data;
    string m_hour;
    string m_type;
    
};



#endif /* Start_hpp */
