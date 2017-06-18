//
//  main.cpp
//  funkcii_z4
//
//  Created by Pepi on 3/31/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
#include <iostream>
#include <cmath>
using namespace std;
int  ReverseDigit(int num ){
    
    
    int thausants ;
    int hundr ;
    int tens ;
    int units ;
    int reverse ;
    
    thausants = num / 1000 ;
    hundr = num / 100 % 10;
    tens = num / 10  % 10;
    units = num % 10 ;
    
    reverse = (units * 1000) + (tens * 100 ) + (hundr * 10) + thausants ;
    
    cout << reverse << endl;
    
    return  reverse ;
}

int   averageFunkcion(int n , int i ){
    
    
    
    int num[100], sum=0.0, average;
    
    
    while (n > 100 || n <= 0)
    {
        cout << "Error! number should in range of (1 to 100)." << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }
    
    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }
    
    average = sum / n;
    //  cout << "Average = " << average;
    
    
    
    return average ;
    
}


int sumNumBeforeK(int n , int m , int k ){
    
    
    
    int sum = 0 ;
    int Array[n][m];
    
    
    bool goOutOfLoop = false;
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0; j < m; j++) {
            cout << " enter  number : " << endl ;
            cin>> Array[i][j];
        }
    }
    
    for(int i = 0 ; i < n ;i++){
        for (int j = 0; j < m ; j++) {
            if (Array[i][j] != k) {
                sum = sum + Array[i][j];
            }
            else{
                
                goOutOfLoop = true;
                break;
            }
            
            if(goOutOfLoop == true)
            {
                break;
            }
        }
        if(goOutOfLoop == true)
        {
            break;
        }
        
    }
    
    
    if(goOutOfLoop == false) {
        cout<<"No K";
    }else{
        cout << " :) " <<sum << endl;
        
    }
    
    
    return  sum;
    
}




















int main(){
    
    int menu1;
    int menu2;
    int menu3;
    
    
    
    
    cout << " enter 1 for reverse  or 2 for average : "  <<endl;
    cin >>menu1;
    
    if (menu1 == 1) {
        int a ;
        int reverseNum ;
        
        cout << " enter 4 digit number : << " << endl ;
        cin >> a ;
        
        reverseNum = ReverseDigit(a);
    }
        else {
            int n;
            int i ;
            int averageNum;
            cout << "Enter the numbers of data: ";
            cin  >> n ;
            // cin  >> i ;
            averageNum = averageFunkcion(n, i);
            cout<< averageNum;
        }
    
        
       // cout<<reverseNum;

    
    
    
    
    
 //   cout << " enter 2 for average : "  << endl;
  //  cin >> menu2 ;
    
    
   /*
    int a ;
    int reverseNum ;
    
    cout << " enter 4 digit number : << " << endl ;
    cin >> a ;
    
    reverseNum = ReverseDigit(a);
    cout<<reverseNum;
    */
////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////
    
   /*
    int n;
    int i ;
    int averageNum;
    cout << "Enter the numbers of data: ";
    cin  >> n ;
   // cin  >> i ;
    averageNum = averageFunkcion(n, i);
    cout<< averageNum;
    */
    
   //////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////
    
 /*
    int n,m,k;
    
    
    cout << "enter row :" << endl;
    cin >> n ;
    
    cout << "enter colon " << endl ;
    cin >> m ;
    
    
    
    cout << " enter number K " << endl;
    cin >> k;
    
    sumNumBeforeK(n, m, k);
  
  */
    return 0;
}
