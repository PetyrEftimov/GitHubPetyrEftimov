//
//  main.cpp
//  New_Student
//
//  Created by Pepi on 4/6/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include "Student.hpp"
#include <string>
using namespace std;

int main(){
    
    
    
    
  Student student1( "pepi","eftimov" , 1234556678 , 2, "inform");
  /*  int   arrayFromOcenki[3];
    int biologiq ;
    int himiq ;
    int infor ;
    
    cin >> biologiq;
    cin >> himiq;
    cin >> infor;
 */
    student1.showInfo();
   student1.showOcenki();
   student1.ShowMax();
    
    
    
    
    
    
    
 
    
    
    
    
        
        
        
        
        


    return 0;
}
