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
  /*
    string firsName ;
    string lastName ;
    int year ;
    string nameUniver ;
    string mail ;
    long phone ;
*/
    
    Student arrayFromStudent[2];
    
    for (int i = 0; i < 2 ; i++) {
        
        
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
    
        arrayFromStudent[i]={firsName,lastName,year,nameUniver,mail,phone};
        arrayFromStudent[i].showInfo();

    }
    
    for (int i = 0; i < 2; i++) {
        arrayFromStudent[i].showInfo();
    }
  
    
    
  /*
    Student student1("pepi","petrov",1975,"sofiiski","abg",1234);
    Student student2("ivan","ivanov",1954,"sofiiski","abv",12345);
    Student student3("zahari","idiota",1985,"sofiiski","gmail",123456);
    Student student4("muto","kaputo",1985,"sofiiski,","zazz",12);
    Student student5("viki","the best",1988,"sofiiski","abv",1234);
    Student student6("hampi","manolkov",1982,"sofiiski","gmail",12345);
  
 /*
    student1.setFirsName(firsName);
    student1.setLastName(lastName);
    student1.setYear(year);
    student1.setNameUniver(nameUniver);
    student1.setMail(mail);
    student1.setPhone(phone);
 */
  //  student1.showInfo();
 /*
    Student arrayFromStudent[6] = {student1,student2,student3,student4,student5,student6};
    
    for (int i = 0 ; i < 6  ;  i++ ) {
        arrayFromStudent[i].showInfo();
    }
 */

    return 0;
}
