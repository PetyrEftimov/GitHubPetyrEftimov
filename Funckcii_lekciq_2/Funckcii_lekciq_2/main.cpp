//
//  main.cpp
//  Funckcii_lekciq_2
//
//  Created by Pepi on 4/3/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
///// zadacha 4  ot lekciqta za funkcii da se obyrne cislo na obratno

#include <iostream>
#include <cmath>
using namespace std ;

int reverseDigit(int number){
    
    
    int count = 0;
    int memory = number;
  
    while (number > 0 ) {
        int digit = number % 10 ;
        number = number /10;
        count++;
    }
    
    int array[count];
    int i = 0 ;
    
    while (memory > 0) {
        int digit = memory % 10 ;
        memory= memory/10;
        array[i] = digit ;
        i++;
        
    }
    
    for (int i = 0 ; i < count; i++) {
        cout << array[i];
         int newNumber ;
        newNumber = newNumber + array[i] * pow(10, count - i -1);
        
    }
    
    
    


    
    
    
    return 0;


}









int main(){
    
   
    
    int num ;
    
    cin >> num ;
    
    int res = reverseDigit(num);

    return 0;
}
