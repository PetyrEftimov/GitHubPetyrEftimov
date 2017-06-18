//
//  main.cpp
//  Inline_Function_Calculate_Cube
//
//  Created by Pepi on 4/11/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
using namespace std;

// Definition of inline function cube. Definition of function appears
// before function is called, so a function prototype is not required.
// First line of function definition acts as the prototype.
inline double cube( const double side )
{
    return side * side * side; // calculate cube
} // end function cube

int main()
{
    double sideValue; // stores value entered by user
    cout << "Enter the side length of your cube: ";
    cin >> sideValue; // read value from user
    
    // calculate cube of sideValue and display result
    cout << "Volume of cube with side "
    << sideValue << " is " << cube( sideValue ) << endl;
    return 0; // indicates successful termination
} // end main
