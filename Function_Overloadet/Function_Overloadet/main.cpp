//
//  main.cpp
//  Function_Overloadet
//
//  Created by Pepi on 4/11/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include <cmath>
#include "Header.h"
#include "Function_Find_circle_Area.h"
#include "Min_Argument.h"
using namespace std;

//double calculateDistance(double x1 , double y1  , double x2   , double y2 );




int main(){
    
  /*
    double  x1 = 2.5;
    double  x2  = 1.7;        rabti s double // i s int //
    double  y1 = 3.8;
    double  y2 = 5.4;
  */
  /*
    int x1 = 2.5;
    int x2 = 1.7;
    int y1 = 3.8;
    int y2 = 5.4;
 */  
    double p = 3.14;
    double radius = 2;
    
    string a  = "gabc" ;
    string b  = "fgt"  ;
    
    cout <<MinArgument(a,b);
    
   // cout<<circleArea(radius, p);
    
   // cout << calculateDistance( x1,  x2, y1, y2);
    
    
 //   cout <<calculateDistance(x1, y1, x2, y2);


    return 0;
}


//double calculateDistance(double x1 , double y1,double x2, double y2){
    
//    return  sqrt ((x2 - x1 )*(x2 - x1)+(y2 - y1)*(y2 - y1));
    


    
    
//}
