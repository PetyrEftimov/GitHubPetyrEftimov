//
//  main.cpp
//  Nasledqvane_Kompoziciq_Univecity
//
//  Created by Pepi on 4/23/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include <string>
#include "Student.hpp"
#include <vector>
#include "Teacher.hpp"
#include "Univercity.hpp"
using namespace std;


int main(){
    
    Student st1("muto" , "ivanov" , 8806246680);
    st1.addGrades(6);
    st1.addGrades(5);
    st1.addGrades(6);
    Student st2("muto","mutov",9003126507);
    st2.addGrades(6);
    st2.addGrades(5);
    st2.addGrades(5);
    
    // st1.printInfo();
    // st2.printInfo();
    vector<Student>students;
    students.push_back(st1);
    students.push_back(st2);
    
    for (size_t i = 0 ; i < students.size(); i++) {
        cout << students.at(i).getFirstName()<<endl;
        cout << students.at(i).getLastName()<<endl;
        cout << students.at(i).getEgn();
        
    }
    bool aver1 =  st1.AverageSuccess();
    cout << aver1<< endl;
    Teacher teacher1("gerorgi","gerogiev","biology",7804306044,6);
    teacher1.printInfo();
    Teacher teacher2("mito ","asenov","shturotii",7712216648,4);
    vector<Teacher> teachers;
    teachers.push_back(teacher1);
    teachers.push_back(teacher2);
    for (size_t i = 0; i < teachers.size(); i++) {
        
        cout << teachers.at(i).getFirstName()<<endl;
        cout << teachers.at(i).getLastName()<<endl;
        
    }
    
    University myUniversity;
    myUniversity.addStudents(st1);
    myUniversity.addStudents(st2);
    
    myUniversity.printStudent();
    
    myUniversity.addTeacher(teacher1);
    myUniversity.addTeacher(teacher2);
    myUniversity.printTeachers();
    cout<< endl ;
    cout << endl;
    myUniversity.searchStudentByFirstName("muto" , "mutov");
    
    
    
    
    
    
    
    
    return 0;
}
