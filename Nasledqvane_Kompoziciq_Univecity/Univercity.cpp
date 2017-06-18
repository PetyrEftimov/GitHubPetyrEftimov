//
//  Univercity.cpp
//  Nasledqvane_Kompoziciq_Univecity
//
//  Created by Pepi on 4/23/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Univercity.hpp"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

University::University(){}
    

    void University::addStudents(Student student_v){
        students1.push_back(student_v);
        
    }
void University::printStudent(){
    for (size_t i = 0 ; i < students1.size(); i++) {
        cout << students1.at(i).getFirstName()<<":)"<<endl;
        cout <<students1.at(i).getLastName()<<":)"<<endl;
        cout <<students1.at(i).getEgn()<<":)"<<endl;
    }
    
}

void University::addTeacher(Teacher teachers_v){
    
    teachers1.push_back(teachers_v);
}

void University::printTeachers(){
    for (size_t i = 0 ;  i < teachers1.size(); i++) {
        cout<<teachers1.at(i).getFirstName()<<":):)"<<endl;
    }
}

void University::searchStudentByFirstName(string searchFirstName , string searchLastName){
    
    for (size_t i = 0; i < students1.size(); i++) {
        cout<< "--------";
        if( !students1.at(i).getFirstName().compare(searchFirstName) && !students1.at(i).getLastName().compare(searchLastName) ){
            cout << students1.at(i).getFirstName() << students1.at(i).getLastName();
        }
    }
}
    
    
    
    

