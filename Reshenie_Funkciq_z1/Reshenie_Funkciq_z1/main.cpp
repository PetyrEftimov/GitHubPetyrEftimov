//
//  main.cpp
//  Reshenie_Funkciq_z1
//
//  Created by Pepi on 4/8/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
using namespace std;




 int ShowPositive(int a , int b , int c ){
     
    
     if (a >0 && b > 0 && c >0){
         cout << a <<b<<c<<endl;
     }
     if (a > 0 && b > 0 && c < 0 ) {
         cout << a<<b<< endl ;
     }
     
     if (a < 0 && b > 0 && c > 0) {
         cout << b << c<< endl;
     }
     
     if (a < 0 && b < 0 && c > 0 ) {
         cout << c << endl ;
     }
     if (a>0 && b<0 && c>0) {
         cout << a << c << endl;
     }
     if (a > 0 && b<0 && c < 0 ) {
         cout << a << endl ;
     }
         
     
    
    
    
     return 0 ;
    
}













int main(){
    
    int a;
    int b ;
    int c ;
    
    
    
    cin >> a ;
    cin >> b ;
    cin >> c;
    
    
    ShowPositive(a,b,c);
    
    
    
    

    return 0;
}
