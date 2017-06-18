//
//  main.cpp
//  Funkcii_chast_1
//
//  Created by Pepi on 3/31/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include  <cmath>
#include <cstdlib>       // biblioteka za random chislo
#include <iomanip>
using namespace std;

void printLogo(){
    cout << "hello from c++ " << endl ;
}
void prinSingn(int number ){
    if (number > 0 )
        cout << "positive " <<endl;
    if(number < 0)
        cout << "not positive" << endl;
    if(number == 0 )
        cout << " ravno na 0 " << endl;
}


void Number (int firstNum ,int secondNum ){
    if(firstNum < secondNum )
        cout << " a  < b : " << endl;
    
    if(firstNum > secondNum)
        cout << "a > b :" << endl ;
}

int multyply(int a , int b ){
    int result = a * b;
    return result;
 

}



int main(){
    
    //  printLogo();
    //  printLogo();
    //    printLogo();  //edin pyt q pisheme i mije da q vikame kolkoto iskame /
    
    
    
    //   int num ;
 //  int a ;
 //  int b ;
    
    //  cout << "enter number "<< endl ;
    //  cin >> num ;
    
    //   prinSingn(num);
    
    
    
    //  cout << " enter number :" << endl;
    
    //  cin >> num ;
    
    //  prinSingn(num);
    
    
 //   cin >> a ;
 //   cin >> b ;
    
  //  Number(a ,b);
    
 //   int d;
 //   int f ;
 //   int res;
    
    
 //   cin >> d ;
 //   cin >> f ;
    
   //  res = multyply(  d,  f);
  //  cout <<res;
 //   res = pow(d, f);
 //   cout << res;
   

    return 0;
}
