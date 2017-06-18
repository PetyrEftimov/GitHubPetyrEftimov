//
//  main.cpp
//  Nasledqvane
//
//  Created by Pepi on 4/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include "student.hpp"
using namespace std;

int main(){
    
    
    Adress adress1 (1000 , "sofia" , "bulgaria");
    Student student1 ("ivan" , "ivanov" , adress1);
    
    student1.printStudentInfo();
    

    return 0;
}
