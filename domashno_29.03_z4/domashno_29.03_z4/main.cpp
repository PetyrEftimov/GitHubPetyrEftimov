//
//  main.cpp
//  domashno_29.03_z4
//
//  Created by Pepi on 3/29/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    
    
    
    int n ;
    int m ;
    
    cout << "enter Row : " << endl ;
    
    cin >> n ;
    
    cout << " enter Colone  : " << endl ;
    
    cin >> m ;
    
    int Array[n][m];
    
    
    for (int i = 0 ; i < n; i++) {
        for (int j = 0; j < m ; j++) {
            cout << " enter Number : "<<endl;
            cin >> Array[i][j];
        }
    }
    
    int sum1 =0;
    for (int i = 0 ; i < 1; i++) {
        
        
        for (int j = 0; j < m; j++) {
            
            sum1 = sum1 + Array[i][j];
            
        }
        cout << " Row one : " << sum1 << endl;
    }
    
    int sum2 = 0;
    for (int j = 0; j < 1; j++) {
        for (int i = 0 ; i < n ; i++) {
            sum2 = sum2 + Array[i][j];
        }
        cout << "Colone one : " << sum2 <<endl ;
    }
    
    int sum3 = 0 ;
    
    //za  vseki red[j], kato gledame samo posledniqt red
    for (int i = n-1; i < n ; i++) {
        //za vseki red otgore, za vsjka negova kolona
        for (int j = 0 ; j < m; j++) {
            sum3 = sum3 + Array[i][j];
        }
        cout << " Row  two  : " << sum3 << endl;
    }
    
    int sum4= 0 ;
    for (int j = m -1; j < m; j++) {
        for (int i = 0 ; i < n ; i++) {
            
            sum4 = sum4 + Array[i][j];
        }
        cout << " Colone two : " <<sum4 << endl ;
    }
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
return 0;
}
