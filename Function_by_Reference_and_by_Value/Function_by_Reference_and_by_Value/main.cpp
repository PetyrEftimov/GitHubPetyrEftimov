//
//  main.cpp
//  Function_by_Reference_and_by_Value
//
//  Created by Pepi on 4/11/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>

using namespace std;

int squareByValue( int );
void squareByReference(int&);

int main(){
    
    int number = 30;
    int number1 = 40;
    
    
   // cout<<squareByValue( number);
    
 //   cout<<number1;
    squareByReference( number1);
    
    cout<<number1;
    

    return 0;
}

int squareByValue(int number ){
    return number*=number;
}


void squareByReference(int &number1){
    number1*=number1;
}
