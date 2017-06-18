//
//  main.cpp
//  Nasledqvane_Comunity_Member
//
//  Created by Pepi on 4/22/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
#include "Employee.hpp"
#include "ComunityMember.hpp"
#include "Student.hpp"
#include "Staff.hpp"
#include <iostream>
#include <string>
#include <vector>
#include "Adress.hpp"
using namespace std;
int main(){
    
    Adress adres1(12,"street" , 7);
    Adress adres2(13,"bulevard", 5);
    ComunityMember firstComun("ivan","ivanov",1998,3200, adres1);
     int year = firstComun.calculateSalary();
    cout << year<<":::"<<endl;
    
    firstComun.printInfo();
 //   Employee firsEmpl("lubomir" , "petrov" , 1986,2400,1 ,adres2);
//    firsEmpl.employeePrintInfo();
    Student student1("gogo", "ivanov" , 1999, " informatika" ,4 );
  //  student1.printInfo();
  //  Staff staff1("ivo", "ivov",1889,3,1200);
 //   staff1.printInfo();
  //  firstComun.printInfo();

    return 0;
}
