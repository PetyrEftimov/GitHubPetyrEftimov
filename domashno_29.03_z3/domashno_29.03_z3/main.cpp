//
//  main.cpp
//  domashno_29.03_z3
//
//  Created by Pepi on 3/29/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    
    int n ;
    int m ;
    
    cout << " enter Row : " << endl ;
    cin >> n ;
    
    cout << "enter Colone  : "<< endl ;
    
    cin >> m ;
    
    
    int Array[n][m];
    
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m; j++) {
            cout << " Enter Number : " << endl ;
            cin >> Array[i][j];
        }
    }
    int product; ;
    
    for (int j = 0 ; j < m; j++) {
        product = 1 ;
        
        for (int i = 0 ; i < n ; i++) {
            product = product*Array[i][j];
            
            
        }
        cout << " pro = : " << product << endl ;
        
        
    }
    
    
    
    
    
    return 0;
}
