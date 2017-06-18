//
//  main.cpp
//  Chetene_Pisane_Ot_Failove_New
//
//  Created by Pepi on 5/12/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::ios;

#include <fstream>
using std::ofstream;

#include <cstdlib>
using std::exit;
using namespace std;

int main()
{
    
    ofstream outClientFile( "clients.txt", ios::out );
    
    
    if ( !outClientFile )
    {
        cerr << "File could not be opened" << endl;
        exit( 1 );
    }
    
    cout << "Enter FName, Lname, Egn." << endl
    << "Enter end-of-file to end input.\n? ";
    
    string fName;
    string lName;
    size_t egn;
    
    
    while ( cin >> fName >> lName >> egn )
    {
        outClientFile << fName << ' ' << lName << ' ' << egn << endl;
        cout << "? ";
    }
    
    
    return 0;
    
    return 0;
}

