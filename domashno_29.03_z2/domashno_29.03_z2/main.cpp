//
//  main.cpp
//  domashno_29.03_z2
//
//  Created by Pepi on 3/29/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    
    int n ;
    int m ;
    
    cout << " Enter Rows : " << endl ;
    cin >> n ;
    cout << "enter Colons : " << endl ;
    cin >> m ;
    
    
    int Array[n][m];
    
    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < m; j++) {
            
            cout << " Enter number  : " << endl ;
            
            cin >> Array[i][j];
            
        }
        
    }
    
    
    
    
    int sum2  ;
    for (int i = 0 ; i < n ; i++) {
        sum2 = 0;
        for (int j = 0 ; j < m ; j++) {
            sum2 = sum2 + Array[i][j];
            
        }
        
        
        
        cout << " sum  : "<< sum2<< endl ;
        
        
    }
    
    
    
    
    return 0;
}
