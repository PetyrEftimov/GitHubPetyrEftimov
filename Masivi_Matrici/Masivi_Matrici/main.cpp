//
//  main.cpp
//  Masivi_Matrici
//
//  Created by Pepi on 4/12/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    
    int matrix[10][10];
    
    int n;
    
    
    cout << "enter matrix dim" << endl ;
    
    cin>>n;
    
    int arr[n][n];
    
    
    cout << " enter Number" <<endl ;
    
    for (int i = 0 ; i < n; i++) {
        for (int j = 0 ; j < n; j++) {
            cin >>arr[i][j];
        }
    }
 /*
    int sum = 0 ;
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0; j < n ; j++) {         // pod glavniq diagonal namira sumata
            if (i > j ) {
                sum = sum+arr[i][j];
            }
            }
        }
    
cout << sum ;
  
*/
/*
    int product = 1 ;
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < n ; j++) {       // nad glavniq diagonal ///
            if (i < j ) {
                product*=arr[i][j];
            }
        }
    }
    
    cout << product ;
    
*/
 /*
    
    for (int i = 0; i < n ; i++) {
        cout << arr[i][i];                 // tova namira samo diagonala na matricata//
    }
  */
  /*
    int  sum = 0;
    for (int i = 1 ; i < n; i++) {
        for (int j = 0; j < i; j++) {      // namira elementite pod diagonala//
            cout << arr[i][j];
        }
    }
    
 //   cout << sum ;
    
 */
/*
    for (int j = 1  ; j < n ; j++) {
        for (int i = 0; i < j ; i++) {   ////  namira nad glavniq diagonal !! obrshtame ciklite //
            cout << arr[i][j];
        }
    }
    
    
  */
    
  /*
    for (int i = 0, j = n - 1; i < n; i++, j--){      // namira obratniq diagonal/// ujas//
        
        cout << arr[i][j] << " ";
    }
   */
 /*
    for (int i =0 ; i < n ; i++) {
        cout<<arr[i][n-1-i];             //   namira obratniq diagonal       //
    }
    
  */
    
    
    
    
       return 0;
}
