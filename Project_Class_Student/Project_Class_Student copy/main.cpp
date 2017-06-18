//
//  main.cpp
//  Project_Class_Student
//
//  Created by Pepi on 4/4/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include "Student.hpp"
using namespace std;


int main(){
    
    string firsName ;
    string lastName ;
    int year ;
    string nameUniver ;
    string mail ;
    long phone ;
    
    
   
    
    cin >> firsName;
    cin >> lastName;
    cin >> year;
    cin >> nameUniver;
    cin >> mail;
    cin >> phone ;
    
    
    Student student1(firsName,lastName,year,nameUniver,mail,phone);
    
    
    student1.setFirsName(firsName);
    student1.setLastName(lastName);
    student1.setYear(year);
    student1.setNameUniver(nameUniver);
    student1.setMail(mail);
    student1.setPhone(phone);
    
    student1.showInfo();
    
    
    

    return 0;
}
