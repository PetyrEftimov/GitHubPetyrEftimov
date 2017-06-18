//
//  Univercity.hpp
//  Nasledqvane_Kompoziciq_Univecity
//
//  Created by Pepi on 4/23/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Univercity_hpp
#define Univercity_hpp
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include "Student.hpp"
#include "Teacher.hpp"
using namespace std;

class University{
public:
    University();
    
    void addStudents(Student student);
    void printStudent();
    void addTeacher(Teacher teachers);
    void printTeachers();
    void searchStudentByFirstName(string search , string search2);
    
private:
    vector<Student>students1;
    vector<Teacher>teachers1;
    
    
};



#endif /* Univercity_hpp */
