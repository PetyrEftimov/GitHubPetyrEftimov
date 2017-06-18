//
//  student.hpp
//  Nasledqvane
//
//  Created by Pepi on 4/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
#ifndef student_hpp
#define student_hpp
#include "adress.hpp"
#include "student.hpp"
#include <iostream>
#include<string>


using namespace std;





class Student{
    
    public :
    
    Student();
    Student(string , string , Adress& );
   // virtual~Student();
    
    
    void setFirsName(string);
    void setLastName(string);
   // void setAdress(string);
    
    
    
    string getFirstName();
    string getLastName();
  //  string getAdress();
   
    
    
    
  void  printStudentInfo();
    
    
    
    
    
    
    
    
    
private:
    string firstName;
    string lastName;
    Adress Adress;


    
    
    
};





























#endif /* student_hpp */
