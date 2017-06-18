//
//  Operation.cpp
//  Kontrolno_29.05
//
//  Created by Pepi on 5/29/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Operation.hpp"
#include <string>
#include <vector>
#include <iostream>
#include "pugixml.hpp"
#include "Magazin.hpp"
using namespace std;
Operation::Operation(){}
Operation::~Operation(){}

static double sum1 = 0 ;
static double sum2 = 0 ;
static double sum3 = 0 ;
static double allSum = 0 ;



void Operation:: ReadFromFileAndSetMembers(){
  
    
    pugi::xml_document doc;
    
    if (!doc.load_file("magazin1.xml")) {
        cerr<<"fail coud nod be readet" ;
    }
    
    else{
        cout << "fail is ok "<< endl;
    }
    
    
 //   vector<Magazin> v_magazin;
    
    pugi::xml_node magazin = doc.child("MAGAZIN1");
    
    for (pugi::xml_node it = magazin.child("ARTIKULI"); it ; it= it.next_sibling("ARTIKULI"))
    {
        Magazin mag1;
        mag1.setBrand(it.child_value("BRAND"));
        mag1.setPrice(it.child("PRICE").text().as_int());
        mag1.setName(it.child_value("NAME"));
        mag1.setQuantity(it.child("SOLDQUANTITY").text().as_int());
        mag1.setModel(it.child_value("MODEL"));
        v_magazin.push_back(mag1);
        
    }
    
    
    
    if (v_magazin.size() != 0) {
        cout << "vector is ok";
    }
    
    else{
        cerr<<"vector is empty";
    }
    cout << "Magazin 1 info :"<<endl;
    for (size_t i = 0 ; i < v_magazin.size(); i++) {
        v_magazin.at(i).printInfo();
        sum1 = v_magazin.at(i).getQuantity()*v_magazin.at(i).getPrice();
        
    }
    
    cout <<"Day money of magazin 1 : " << sum1<<endl;
    
 
    
    
    ///////////////////////////////////////////////////////////////////////////////////////////
    pugi::xml_document doc1;
    
    if (!doc.load_file("magazin2.xml")) {
        cerr<<"fail coud nod be readet" ;
    }
    
    else{
        cout << "fail is ok "<< endl;
    }
    
    
  //  vector<Magazin> v_magazin2;
    
    pugi::xml_node magazin2 = doc.child("MAGAZIN2");
    
    for (pugi::xml_node it = magazin2.child("ARTIKULI"); it ; it= it.next_sibling("ARTIKULI"))
    {
        Magazin mag2;
        mag2.setBrand(it.child_value("BRAND"));
        mag2.setPrice(it.child("PRICE").text().as_int());
        mag2.setName(it.child_value("NAME"));
        mag2.setQuantity(it.child("SOLDQUANTITY").text().as_int());
        mag2.setModel(it.child_value("MODEL"));
        v_magazin2.push_back(mag2);
        
    }
    
    
    
    if (v_magazin2.size() != 0) {
        cout << "vector is ok";
    }
    
    else{
        cerr<<"vector is empty";
    }
    cout << "Magazin 2 info :"<<endl;
    for (size_t i = 0 ; i < v_magazin2.size(); i++) {
        v_magazin2.at(i).printInfo();
         sum2 = v_magazin2.at(i).getQuantity()*v_magazin2.at(i).getPrice();
    }
      cout <<"Day money of magazin 2 : " << sum2<<endl;
    
    //////////////////////////////////////////////////////////////////////////////////////////////////
    pugi::xml_document doc3;
    
    if (!doc.load_file("magazin3.xml")) {
        cerr<<"fail coud nod be readet" ;
    }
    
    else{
        cout << "fail is ok "<< endl;
    }
    
    
  //  vector<Magazin> v_magazin3;
    
    pugi::xml_node magazin3 = doc.child("MAGAZIN3");
    
    for (pugi::xml_node it = magazin3.child("ARTIKULI"); it ; it= it.next_sibling("ARTIKULI"))
    {
        Magazin mag3;
        mag3.setBrand(it.child_value("BRAND"));
        mag3.setPrice(it.child("PRICE").text().as_int());
        mag3.setName(it.child_value("NAME"));
        mag3.setQuantity(it.child("SOLDQUANTITY").text().as_int());
        mag3.setModel(it.child_value("MODEL"));
        v_magazin3.push_back(mag3);
        
    }
    
    
    
    if (v_magazin3.size() != 0) {
        cout << "vector is ok 3";
    }
    
    else{
        cerr<<"vector is empty";
    }
    cout << "Magazin 3 info :"<<endl;
        
        
    for (size_t i = 0 ; i < v_magazin3.size(); i++) {
        v_magazin3.at(i).printInfo();
         sum3 = v_magazin3.at(i).getQuantity()* v_magazin3.at(i).getPrice();
    }
    
      cout <<"Day money of magazin 3 : " << sum3 <<endl;
    allSum = sum1+sum2+sum3;
    
    cout << "Day money of the firm is " <<allSum<<endl;
    
    
}

void Operation::minMoney(){
    double sum_1 = 0 ;
    double sum_2 = 0 ;
    double sum_3 = 0 ;
    
    
    for (size_t i = 0 ; i < v_magazin.size(); i++)
    {
        sum_1 = v_magazin.at(i).getPrice()*v_magazin.at(i).getQuantity();
    }
    
    
    for (size_t i = 0 ; i < v_magazin.size(); i++)
    {
        sum_2 = v_magazin2.at(i).getPrice()*v_magazin2.at(i).getQuantity();
    }
    for (size_t i = 0 ; i < v_magazin.size(); i++)
    {
        sum_3 = v_magazin3.at(i).getPrice()*v_magazin3.at(i).getQuantity();
    }
    
    if (sum_1 < sum_2 && sum_1 < sum_3) {
        cout<<"Magazin 1  is lower sum "<<sum_1<<endl;
    }
    if (sum_2 < sum_1 && sum_2 < sum_3) {
        cout << "Magazin 2 is lower sum " << sum_2<<endl;
    }
    if (sum_3<sum_1 && sum_3 < sum_2) {
        cout << "magazin 3vis lower sum " << sum_3<<endl;
    }
    
}

void  Operation:: maxMoney(){
    double sum_1 = 0 ;
    double sum_2 = 0 ;
    double sum_3 = 0 ;
    
    
    for (size_t i = 0 ; i < v_magazin.size(); i++)
    {
        sum_1 = v_magazin.at(i).getPrice()*v_magazin.at(i).getQuantity();
    }
    
    
    for (size_t i = 0 ; i < v_magazin.size(); i++)
    {
        sum_2 = v_magazin2.at(i).getPrice()*v_magazin2.at(i).getQuantity();
    }
    for (size_t i = 0 ; i < v_magazin.size(); i++)
    {
        sum_3 = v_magazin3.at(i).getPrice()*v_magazin3.at(i).getQuantity();
    }
    
    if (sum_1 > sum_2 && sum_1 > sum_3) {
        cout<<"Magazin 1  is big sum "<<sum_1<<endl;
    }
    if (sum_2 > sum_1 && sum_2 > sum_3) {
        cout << "Magazin 2 is big sum " << sum_2<<endl;
    }
    if (sum_3>sum_1 && sum_3 > sum_2) {
        cout << "magazin 3vis big sum " << sum_3<<endl;
    }
    

    
}

void Operation::   searchByName(string name){
    for (size_t i = 0; i < v_magazin.size(); i++) {
        if (name == v_magazin.at(i).getName()) {
            
        
        cout<<"serach in magazin 1 : "<<endl;
            cout << v_magazin.at(i).getBrand()<<"/"<<v_magazin.at(i).getName()<<"/"<<v_magazin.at(i).getQuantity()<<"/"<<v_magazin.at(i).getPrice()<<endl;
        }
    }
    for (size_t i = 0; i < v_magazin2.size(); i++) {
        if (name == v_magazin2.at(i).getName()) {
            
            
            cout<<"serach in magazin 2 : "<<endl;
            cout << v_magazin2.at(i).getBrand()<<"/"<<v_magazin2.at(i).getName()<<"/"<<v_magazin2.at(i).getQuantity()<<"/"<<v_magazin2.at(i).getPrice()<<endl;
        }
    }
    
    for (size_t i = 0; i < v_magazin3.size(); i++) {
        if (name == v_magazin3.at(i).getName()) {
            
            
            cout<<"serach in magazin 3 : "<<endl;
            cout << v_magazin3.at(i).getBrand()<<"/"<<v_magazin3.at(i).getName()<<"/"<<v_magazin3.at(i).getQuantity()<<"/"<<v_magazin3.at(i).getPrice()<<endl;
        }
    }
}


void  Operation::articulLoserWiner(){

   
    
    for (int i = 0; i < v_magazin.size(); i++) {
        map<int , string>::const_iterator itr;
        map<int , string>::reverse_iterator itr1;

    
        m_map[v_magazin.at(i).getQuantity()] = v_magazin.at(i).getName();
    
    }
    
    cout <<"Articul Loser in magazin 1 is "<< m_map.begin()->first<<":"<<m_map.begin()->second<<endl ;
    cout <<"Articul  Winer in magazin 1 is"<< m_map.rbegin()->first<<":"<<m_map.rbegin()->second<<endl;
    
    
 /////////////////////////////////////////////////////////////////////////////////////////////////
    
    for (int i = 0 ; i < v_magazin2.size(); i++) {
        map<int , string >::const_iterator itr2;

        m_map2[v_magazin2.at(i).getQuantity()] = v_magazin2.at(i).getName();
    }
    
    cout <<"Articul Loser in magasin 2 is " << m_map2.begin()->first <<":"<<m_map2.begin()->second<<endl;
    
    
///////////////////////////////////////////////////////////////////////////////////////////////////////
    for (int i = 0 ; i < v_magazin3.size(); i++) {
         map<int , string >::const_iterator itr3;
        m_map3[v_magazin3.at(i).getQuantity()] = v_magazin3.at(i).getName();
        
    }
    cout <<"Articul Loser in magasin 3 is " << m_map3.begin()->first <<":"<<m_map3.begin()->second<<endl;
    
}

void  Operation::allMagazinLoserWiner(){
    for (int i = 0 ; i < v_magazin.size(); i++) {
      
        m_firm[v_magazin.at(i).getQuantity()] = v_magazin.at(i).getName();
    }
    for (int i = 0 ; i < v_magazin2.size(); i++) {
      
        m_firm[v_magazin2.at(i).getQuantity()] = v_magazin2.at(i).getName();
    }
    for (int i = 0 ; i < v_magazin3.size(); i++) {
       
        m_firm[v_magazin3.at(i).getQuantity()] = v_magazin3.at(i).getName();
    }
    map<int , string> :: const_iterator itr ;
    map<int , string >:: reverse_iterator itr1;
    
    for (itr = m_firm.begin(); itr != m_firm.end(); itr++) {
        cout << itr -> first <<":::"<<itr->second<<endl;
        
    }
    
    cout <<"Firm loser is :" <<m_firm.begin()->first<<"::"<<m_firm.begin()->second<<endl;
    cout <<"Firm Winer is :" << m_firm.rbegin()->first<<"::"<<m_firm.rbegin()->second<<endl;
    
    
    
    
    
    
    
}





Operation op1;
Operation op2;
