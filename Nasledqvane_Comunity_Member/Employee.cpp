//
//  Employee.cpp
//  Nasledqvane_Comunity_Member
//
//  Created by Pepi on 4/22/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Employee.hpp"
#include <stdio.h>
#include <iostream>
#include <string>
#include "ComunityMember.hpp"
#include "Adress.hpp"
using namespace std;

Employee::Employee(){

}
Employee::Employee(string firstName , string lastName , int year , int salary2, int id , class Adress& adress):ComunityMember(firstName,lastName,year,salary2, adress)

{
    
    this -> id = id;
    
    
}
void Employee::setId(int id){
    this -> id = id;
}
int Employee::getId(){
    return this ->id;
}

void Employee::employeePrintInfo(){
//    cout <<getFirsName();
    
    cout <<endl;
  //  cout <<getLastName();
    cout <<endl;
 //   cout <<getYear();
    cout <<endl;
 //   cout << getId();
    cout << endl ;
    cout << " :))";
    ComunityMember::printInfo();
    
    
    
}



