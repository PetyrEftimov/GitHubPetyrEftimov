//
//  main.cpp
//  Function_Default_Argument
//
//  Created by Pepi on 4/11/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
using namespace std;

    
    // function prototype that specifies default arguments
    int boxVolume( int length = 1, int width = 1, int height = 1 );
    
    int main()
    {
        // no arguments--use default values for all dimensions
        cout << "The default box volume is: " << boxVolume();
        
       // specify length; default width and height
        cout << "\n\nThe volume of a box with length 10,\n"
        << "width 1 and height 1 is: " << boxVolume( 10 );
        
        // specify length and width; default height
        cout << "\n\nThe volume of a box with length 10,\n"
        << "width 5 and height 1 is: " << boxVolume( 10, 5 );
        
        // specify all arguments
        cout << "\n\nThe volume of a box with length 10,\n"
        << "width 5 and height 2 is: " << boxVolume( 10, 5, 2 )
       << endl;
        return 0; // indicates successful termination
    } // end main
    
    // function boxVolume calculates the volume of a box
    int boxVolume( int length, int width, int height )
    { 
        return length * width * height;
    } // end function boxVolume
    
    
    
    

