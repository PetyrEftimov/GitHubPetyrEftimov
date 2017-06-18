//
//  main.cpp
//  Chetene_Pisane_HarwareShopNew
//
//  Created by Pepi on 5/21/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cctype>
#include <cstdlib>
#include "HardwareShop.hpp"
using namespace std;

void initializeFile( fstream & );
void writeIntoFile( fstream & );
void readFromFile( fstream & );
void updateRecord( fstream & );
void insertRecord( fstream & );
void deleteRecord( fstream & );
int instructions();

int main(){
    
    int choice ;
    char response ;
    
    //variant 2:
    void (*arrayFromPointers[]) (fstream &) = {readFromFile,updateRecord, insertRecord, deleteRecord };
    //end varient 2
    
    
    fstream file("hardware.txt" , ios::in | ios::out);
    if (!file) {
        cerr<<"File coul not be open ";
        exit(1);
    }
    
    cout << "do you whant initialized file (Y or N)" ;
    cin >> response;
    response = toupper(response);
    while ((response != 'Y') && (response != 'N')) {
        cout << "Invalid . Enter Y or N ";
        cin >> response;
        response = toupper(response);
    }
    

    if (response == 'Y') {
        
        initializeFile(file);
        writeIntoFile(file);
        file.clear();
       
    }

    //variant 1:
//    if (response == 'N') {
//       while( choice > 0 || choice < 6 ){
//         choice = instructions();
//         if (choice == 1 ) {
//            readFromFile(file);
//            file.clear();
//         }
//         if (choice == 2) {
//            updateRecord(file);
//            file.clear();
//         }
//         if (choice == 3) {
//            insertRecord(file);
//            file.clear();
//            
//         }
//         if (choice == 4) {
//            deleteRecord(file);
//            file.clear();
//         }
//         if (choice == 5) {
//            exit(1);
//         }
//        }
//        
//    }
//    //end variant 1
    
    //variant 2
    while(( choice=instructions()) != 5 ){
        (*arrayFromPointers[choice-1])(file);
        file.clear();
    }
    //end variant 2
    
    


    return 0;
}

void initializeFile(fstream  &myStream){
    
    Hardware hardware1;
    
    for (int i = 0 ; i < 100; i++) {
        myStream.write(reinterpret_cast<char*>(&hardware1), sizeof(Hardware));
    }
}

void writeIntoFile( fstream & myStream ){
    
    Hardware hardware1;
    int    number;
    string name;
    double price;
    int    stock;
    
    cout << "enter the part number (0 - 99 , -1 for exit) : " ;
    cin >> number;
    
    if (!cin) {
        cerr << "wrong input . exit ";
        exit(1);
    }
    
    while (number != -1) {
        hardware1.setPartNumber(number);
        cout <<"enter hardwere name : " ;
        cin >> name ;
        
        hardware1.setHardwareName(name);
        cout << " Get qantity" ;
        cin >> stock;
        
        if (!cin) {
            cerr << "wrong input . exit ";
            exit(1);
        }
        
        cout << "entrer price : ";
        cin >> price ;
        hardware1.setUnitPrice(price);
        
      
        myStream.seekp(hardware1.getPartNumber() * sizeof(Hardware));
        myStream.write(reinterpret_cast<char *>(&hardware1), sizeof(Hardware));
        
        cout << "enter the part number (0 - 99 , -1 for exit) : " ;
        cin >> number;
        
    }
    
    
}
int instructions(){
    int choice;
    cout <<" enter a choice : "<<endl;
    cout <<" 1 - read from file (List all hardware)"<<endl;
    cout <<" 2 -  update record in file "<<endl;
    cout <<" 3 - insert record in file  " << endl;
    cout <<" 4 - delete record from file " << endl ;
    cout <<" 5 - exit program " << endl ;
    
    do {
        cout << "Choose file opration : " << endl;
        cin >> choice;
        
    } while (choice < 1  || choice > 5);
    return  choice;
}

void readFromFile( fstream & myStream){
    Hardware hardware1;
    cout << setw(7)<<"Record#" << "  " << left <<
    setw(30)<<"Hardware name " << left << setw(13)<< "Quantity" << left <<
    setw(10) << "Price"<<endl;
    
    for (int count = 0 ; count < 100 && !myStream.eof(); count++) {
        myStream.seekg(count*sizeof(Hardware));
        myStream.read(reinterpret_cast<char*>(&hardware1), sizeof(Hardware));
        if (hardware1.getPartNumber() >= 0  && hardware1.getPartNumber() < 100) {
            cout << fixed << showpoint;
            
            cout << left << setw(7)<<hardware1.getPartNumber()<<"  "<<
            left << setw(30)<<hardware1.getHardwareName()<<"  "<<
            left<<setw(13)<<hardware1.getInStock()<<"  " <<
            setprecision(2)<< left << setw(10)<<hardware1.getUnitPrice()<<endl;
        }
    }
}

void updateRecord( fstream & myStream ){
    Hardware hardware1;
    int    number;
    string name;
    double price;
    int    stock;
    
    cout << "enter the part number for update : " ;
    cin >> number;
    
    myStream.seekg(number*sizeof(Hardware));
    myStream.read(reinterpret_cast<char*>(&hardware1),sizeof(Hardware));
    if (hardware1.getPartNumber() != -1 ) {
        cout << setw(7)<<"Record#" << "  " << left <<
        setw(30)<<"Hardware name " << left << setw(13)<< "Quantity" << left <<
        setw(10) << "Price"<<endl;
        
        cout << fixed << showpoint;
        
        cout << left << setw(7)<<hardware1.getPartNumber()<<"  "<<
        left << setw(30)<<hardware1.getHardwareName()<<"  "<<
        left<<setw(13)<<hardware1.getInStock()<<"  " <<
        setprecision(2)<< left << setw(10)<<hardware1.getUnitPrice()<<endl;
        cout <<"enter the hardware Name : "<<endl;
        cin.ignore();
        getline(cin , name);
        hardware1.setHardwareName(name);
        cout << "enter Quontity and Price : " << endl;
        cin >> stock >> price ;
        hardware1.setInStock(stock);
        hardware1.setUnitPrice(price);
        
        myStream.seekp(hardware1.getPartNumber()*sizeof(Hardware));
        myStream.write(reinterpret_cast<char*>(&hardware1), sizeof(Hardware));
        
    }
    else{
        cerr << "Cannot update the record is emty"<<endl;
    }
    
}

void insertRecord( fstream & myStream){
    
    Hardware hardware1;
    int    number;
    string name;
    double price;
    int    stock;
    
    cout << "enter the part number for insert : " ;
    cin >> number;
    
    myStream.seekg(number*sizeof(Hardware));
    myStream.read(reinterpret_cast<char*>(&hardware1),sizeof(Hardware));
    
    if (hardware1.getPartNumber() == -1 ) {
     
        hardware1.setPartNumber(number);
        cout << " enter hardware Name " << endl ;
        cin.ignore();
        getline(cin , name);
        hardware1.setHardwareName(name);
        cout << "enter Quontity and Price : " << endl;
        cin >> stock >> price ;
        hardware1.setInStock(stock);
        hardware1.setUnitPrice(price);
        
        myStream.seekp(hardware1.getPartNumber()*sizeof(Hardware));
        myStream.write(reinterpret_cast<char*>(&hardware1), sizeof(Hardware));

    }
    else{
        cerr << "Cannot insert. the record is empty"<<endl;
    }
    
    
}

void deleteRecord( fstream & myStream){
    Hardware hardware1;
    Hardware temp;
    int number;
    
    cout << "enter the part number for delete : " <<endl;
    cin >> number;
    myStream.seekg(number*sizeof(Hardware));
    myStream.read(reinterpret_cast<char*>(&temp),sizeof(Hardware));
    if (temp.getPartNumber() != -1) {
        myStream.seekp(number*sizeof(Hardware));
        myStream.write(reinterpret_cast<char*>(&hardware1),sizeof(Hardware));
        cout << "Record deleted "<< endl;
    }
    
    else{
        cerr << "Cannot delete . The record is empty"<<endl;
    }
}


