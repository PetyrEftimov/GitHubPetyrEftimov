//
//  main.cpp
//  Promenliva_by_Reference
//
//  Created by Pepi on 4/11/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){


    int x = 3;
    int &y = x ;
    
     cout << "x = " << x << endl << "y = " << y << endl;
     y = 7; // actually modifies x
     cout << "x = " << x << endl << "y = " << y << endl;


           
    return 0;
}


