//
//  main.cpp
//  Chetene_Ot_Fail
//
//  Created by Pepi on 5/12/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
using std::cerr;
using std::cout;
using std::endl;
using std::fixed;
using std::ios;
using std::left;
using std::right;
using std::showpoint;
#include <vector>
#include <fstream>
using std::ifstream;

#include <iomanip>
using std::setw;
using std::setprecision;

#include <string>
using std::string;

#include <cstdlib>
using std::exit;
using namespace std;


void outputLine( string, int, double );

int main()
{
    
    ifstream inClientFile( "books.txt", ios::in );
    
   
    if ( !inClientFile )
    {
        cerr << "File could not be opened" << endl;
        exit( 1 );
    }
    
    string bookName;
    int    year;
    double price;
    
    double sum;
    vector<double> prices;
    
    cout << left << setw( 10 ) << "bookName" << setw( 13 )
    << "year" << "price" << endl << fixed << showpoint;
    
    
    while ( inClientFile >> bookName >> year >> price ){
        outputLine( bookName, year, price );
        sum+=price;
        prices.push_back(price);
    }
    cout << sum;
    inClientFile.close();
  
    for (size_t i = 0 ; i < prices.size(); i++) {
        cout <<prices.at(i)<<endl;
    }
    return 0;
}


void outputLine( string bookName, int year, double price )
{
    cout << left << setw( 10 ) << bookName << setw( 13 ) << year
    << setw( 7 ) << setprecision( 2 ) << right << price << endl;
}
