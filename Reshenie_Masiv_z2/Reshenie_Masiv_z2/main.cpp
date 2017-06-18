//
//  main.cpp
//  Reshenie_Masiv_z2
//
//  Created by Pepi on 4/8/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>

using namespace std;


int main(){
    
    
    int n ;
    int m ;
    int k ;
    int sum  = 0;
    
    
    cout << " enter row : " << endl ;
    cin >> n;
    cout <<  " enter colunm : : " << endl ;
    cin >> m ;
    
    int Array[n][m];
    
    for (int i = 0; i < n ; i++) {
        for (int  j  = 0; j < m ; j++) {
            cout <<  "enter 4 digit  Number  : " << endl ;
            cin >> Array[i][j];
            
        }
    }
    
    cout << " enter number K : " << endl ;
    cin >> k ;
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m; j++) {
            if (k == Array[i][j] % 10 && (k+1) != Array[i][j] / 10 % 10){
                
                
                
                sum = Array[i][j]+sum;
                
              
                
                
            }
           
        }
        
    }
                
                
                
                
    
    cout << sum << endl ;
    
    
    
    
    
    

    return 0;
}
