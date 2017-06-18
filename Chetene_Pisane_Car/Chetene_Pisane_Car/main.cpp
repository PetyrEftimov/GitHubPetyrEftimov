//
//  main.cpp
//  Chetene_Pisane_Car
//
#include <iostream>
#include <iomanip>
#include <fstream>
#include <ostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include "Car.hpp"
using namespace std;

void initializeFile( fstream & );
void inputData( fstream & );
void listHardwares( fstream & );
void updateRecord( fstream & );
void insertRecord( fstream & );
void deleteRecord( fstream & );
void costCars( fstream &fRef );
int instructions( void );
void exitProgram(fstream &);


int main(){
    
    
    int choice;
    char response;
    
    fstream file( "car.txt", ios::in | ios::out );
    void ( *f[] )( fstream & ) = { listHardwares, updateRecord, insertRecord, deleteRecord,costCars,exitProgram};
    
    if ( !file )
    {
        cerr << "File could not be opened.\n";
        exit( 1 );
    }
    
    cout << "Should the file be initialized (Y or N): ";
    cin >> response;
    response = toupper( response );
    
    while ( ( response != 'Y' ) && ( response != 'N' ) )
    {
        cout << "Invalid response. Enter Y or N: ";
        cin >> response;
        response = toupper( response );
    }
    
    if ( response == 'Y' )
    {
        initializeFile( file );
        inputData( file );
    }
    
    while ( ( choice = instructions() ) != 7 )
    {
        ( *f[ choice - 1 ] )( file );
        file.clear();
    }
    

    
    return 0;
}

void initializeFile( fstream &hw )
{
    Car newHw;
    
    for ( int i = 0; i < 100; i++ )
        hw.write( reinterpret_cast< char * >( &newHw ), sizeof( Car ) );
}

void inputData( fstream &hw )
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


int instructions()
{
    int choice;
    
    cout << "\nEnter a choice:\n1  List all Cars."
    << "\n2  Update record.\n3  Insert record."
    << "\n4  Delete record.\n5  costCar\n\n6 exit";
    
    do
    {
        cout << "? ";
        cin >> choice;
    } while ( choice < 1 || choice > 7 );
    
    return choice;
}



void listHardwares( fstream &hw )
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



void updateRecord( fstream &hw )
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


void insertRecord( fstream &hw )
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

void deleteRecord( fstream &hw )
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

void  costCars( fstream &fRef ){
    Car temp;
    double price;
    int flag = 0 ;
    cout << "Enter desired cost for Car:";
    cin >> price;
    
    cout << setw( 7 ) << "Cars#" << "    " << left
    << setw( 15 ) << "Brand" << left << setw( 15 ) << "Model" << left
    << setw( 13 ) << "Cost per KM" << left << setw( 10 ) << "Year" << endl;
    
    for ( int count = 0; count < 10 && !fRef.eof(); count++ )
    {
        fRef.seekg( count * sizeof( Car ) );
        fRef.read( reinterpret_cast< char * >( &temp ), sizeof( Car ) );
        
        if ( temp.getCarNumber() >= 0 && temp.getCarNumber() < 10 )
        {
            if ( price >= temp.getPrice() )
            {
                cout << "There is a car equal ot below cost:" << price <<endl;
                cout << fixed << showpoint;
                cout << left << setw( 7 ) << temp.getCarNumber() << "    "
                << left << setw( 15 ) << temp.getCarName() << left
                << setw( 15 ) << temp.getPrice() << left
                << setw( 13 ) << temp.getInStock() << setprecision( 2 )
                << left << setw( 10 )  << '\n';
                flag = 1 ;
            }
            
          
            
        }
   
    }
    if (flag == 0) {
        cout << "There is no cost for car below or equal to: " << price <<endl;

    }
}

void exitProgram(fstream&){
    exit(1);
}





