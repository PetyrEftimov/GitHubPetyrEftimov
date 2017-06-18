//
//  main.cpp
//  Nasledqvane_2D_Shape
//
//  Created by Pepi on 4/21/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include "Triangle.hpp"
#include <iostream>
#include <vector>
#include "Trapez.hpp"
#include "Shape_2D.hpp"
using namespace std;


int main(){
    
    
    Triangle tr1(4,8,"blue ::::", 6);
    Triangle tr2(3,5,"red::::", 6);
    Triangle tr3(6,7,"black:::::",6);
  //  Shape_2D sh1(5,6,"red::::");
  //  sh1.printInfo();
    int nArrea = tr1.calculateArrea();
    cout << nArrea << ":)"<<endl ;
    
    
    //vector<Shape_2D*> figures;
   // figures.push_back(&tr1);
   // figures.push_back(&tr2);
 //   figures.push_back(&tr3);
    
//    for (size_t i = 0 ; i < figures.size(); i++) {
 //       figures.at(i)-> printInfo();
 
        
  //  }
    
    Trapez trapez1(3,8, "yelow:(:(:(" , 5,5 );
    Trapez trapez2(4,9,"red :):(:(",9,3);
  //  trapez1.printInfo();
    
    int ar1 = trapez2.calculateArrea();
    cout << ":::" << ar1<<":::"<<endl;
    int ar2 = tr2.calculateArrea();
    cout << ar2<<"+++"<<endl;
    
 //   cout << endl ;
 //   int trapezArea = trapez1.calculateArrea();
//    cout << trapezArea << ":):)" << endl ;
    
 //   vector<Shape_2D*>figurez;
 //   figures.push_back(&trapez1);
 //   figures.push_back(&trapez2);
  //  for (size_t i = 0 ; i < figures.size(); i++) {
  //      figures.at(i) -> printInfo();
  //  }
    
 /*   vector<Shape_2D*>figurez1;
    figurez1.push_back(&tr1);
    figurez1.push_back(&trapez1);
    figurez1.push_back(&tr2);
    figurez1.push_back(&tr3);
    figurez1.push_back(&trapez2);
    for (size_t i  = 0 ; i < figurez1.size(); i++) {
        figurez1.at(i) ->printInfo();
    }
  */
    
    
    
 
   
    
    
    return 0;
}
