//
//  main.cpp
//  Cube_By_reference_With_pointer
//
//  Created by Pepi on 4/12/17.
//  Copyright © 2017 Pepi. All rights reserved.
//// Cube a variable using pass-by-reference with a pointer argument.

#include <iostream>
using namespace std;



void cubeByReference( int * ); // prototype

int main()
{
    int number = 5;
    
    cout << "The original value of number is " << number;
    
    cubeByReference( &number ); // pass number address to cubeByReference
    
    cout << "\nThe new value of number is " << number << endl;
    return 0; // indicates successful termination
} // end main

// calculate cube of *nPtr; modifies variable number in main
void cubeByReference( int *nPtr )
{
    *nPtr = *nPtr * *nPtr * *nPtr; // cube *nPtr
} // end function cubeByReference


