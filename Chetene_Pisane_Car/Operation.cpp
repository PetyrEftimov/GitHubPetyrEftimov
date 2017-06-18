//
//  Operation.cpp
//  Chetene_Pisane_Car
//
//  Created by Pepi on 5/25/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Operation.hpp"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cctype>
#include <cstdlib>
#include "Car.hpp"
using namespace std;


Operation::Operation(){}


void Operation:: initializeFile( fstream &hw )
{
    Car newHw;
    
    for ( int i = 0; i < 100; i++ )
        hw.write( reinterpret_cast< char * >( &newHw ), sizeof( Car ) );
}

void Operation:: inputData( fstream &hw )
{
    Car temp;
    
    int number;
    string name;
    double price;
    int stock;
    
    cout << "Enter the Car number (0 - 99, -1 to end input): ";
    cin >> number;
    
    while ( number != -1 )
    {
        cout << "Enter the Car name: ";
        cin.ignore();
        //getline( cin, name );
        cin>>name;
        temp.setCarName( name );
        temp.setCarNumber( number );
        
        cout << "Enter quantity and price: ";
        cin >> stock >> price;
        temp.setInStock( stock );
        temp.setPrice( price );
        
        hw.seekp( temp.getCarNumber() * sizeof( Car ) );
        
        hw.write( reinterpret_cast< char * >( &temp ), sizeof( Car ) );
        
        cout << "Enter the Car number (0 - 99, -1 to end input): ";
        cin >> number;
    }
}


int Operation:: instructions()
{
    int choice;
    
    cout << "\nEnter a choice:\n1  List all Cars."
    << "\n2  Update record.\n3  Insert record."
    << "\n4  Delete record.\n5  End program.\n";
    
    do
    {
        cout << "? ";
        cin >> choice;
    } while ( choice < 1 || choice > 5 );
    
    return choice;
}



void Operation:: listHardwares( fstream &hw )
{
    Car temp;
    
    cout << setw( 7 ) << "Record#" << "    " << left
    << setw( 30 ) << "Car name" << left
    << setw( 13 ) << "Quantity" << left << setw( 10 ) << "Cost" << endl;
    
    for ( int count = 0; count < 100 && !hw.eof(); count++ )
    {
        hw.seekg( count * sizeof( Car ) );
        hw.read( reinterpret_cast< char * >( &temp ), sizeof( Car ) );
        
        if ( temp.getCarNumber() >= 0 && temp.getCarNumber() < 100 )
        {
            cout << fixed << showpoint;
            cout << left << setw( 7 ) << temp.getCarNumber() << "    "
            << left << setw( 30 ) << temp.getCarName() << left
            << setw( 13 ) << temp.getInStock() << setprecision( 2 )
            << left << setw( 10 ) << temp.getPrice() << '\n';
        }
    }
}



void Operation:: updateRecord( fstream &hw )
{
    Car temp;
    int part;
    string name;
    int stock;
    double price;
    
    cout << "Enter the Car number for update: ";
    cin >> part;
    
    hw.seekg( part * sizeof( Car ) );
    
    hw.read( reinterpret_cast< char * >( &temp ), sizeof( Car ) );
    
    if ( temp.getCarNumber() != -1 )
    {
        cout << setw( 7 ) << "Record#" << "    " << left
        << setw( 30 ) << "Car name" << left
        << setw( 13 ) << "Quantity" << setw( 10 ) << "Cost" << endl;
        
        cout << fixed << showpoint;
        cout << setw( 7 ) << temp.getCarNumber() << "    "
        << left << setw( 30 ) << temp.getCarName()
        << left << setw( 13 ) << temp.getInStock()
        << setprecision( 2 ) << setw( 10 ) << temp.getPrice() << '\n'
        << "Enter the Car name: ";
        
        cin.ignore();
        getline( cin, name );
        temp.setCarName( name );
        
        cout << "Enter quantity and price: ";
        cin >> stock >> price;
        temp.setInStock( stock );
        temp.setPrice( price );
        
        hw.seekp( temp.getCarNumber() * sizeof( Car ) );
        hw.write( reinterpret_cast< char * > ( &temp ), sizeof( Car ) );
    }
    else
        cerr << "Cannot update. The record is empty.\n";
}


void Operation:: insertRecord( fstream &hw )
{
    Car temp;
    int part;
    string name;
    int stock;
    double price;
    
    cout << "Enter the Car number for insertion: ";
    cin >> part;
    
    hw.seekg( part * sizeof( Car ) );
    hw.read( reinterpret_cast< char * > ( &temp ), sizeof( Car ) );
    
    if ( temp.getCarNumber() == -1 )
    {
        temp.setCarNumber( part );
        cout << "Enter the Car name: ";
        cin.ignore();
        getline( cin, name );
        temp.setCarName( name );
        
        cout << "Enter quantity and price: ";
        cin >> stock >> price;
        temp.setInStock( stock );
        temp.setPrice( price );
        
        hw.seekp( temp.getCarNumber() * sizeof( Car ) );
        hw.write( reinterpret_cast< char * >( &temp ), sizeof( Car ) );
    }
    else
        cerr << "Cannot insert. The record contains information.\n";
}

void Operation:: deleteRecord( fstream &hw )
{
    Car newHw;
    Car temp;
    int part;
    
    cout << "Enter the Car number for deletion: ";
    cin >> part;
    
    hw.seekg( part * sizeof( Car ) );
    hw.read( reinterpret_cast< char * >( &temp ), sizeof( Car ) );
    
    if ( temp.getCarNumber() != -1 )
    {
        hw.seekp( part * sizeof( Car ) );
        hw.write( reinterpret_cast< char * >( &newHw ), sizeof( Car ) );
        cout << "Record deleted.\n";
    }
    else
        cerr << "Cannot delete. The record is empty.\n";
}





Operation operator1;

