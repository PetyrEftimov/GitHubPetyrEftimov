//
//  main.cpp
//  domashno_29.03_z1
//
//  Created by Pepi on 3/29/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    
    int n ;
    
    cout << "enter size  : " << endl ;
    
    cin >> n ;
    
    int Array[n] ;
    
    for (int i = 0 ; i < n ; i++) {
        cout <<  " Enter number : " << endl ;
        
        cin >> Array[i];
        
        
    }
    
    int max = Array[0] ;
    
    
    for (int i = 0 ; i < n ; i++) {
        
        
        if (Array[i]  > max) {
            max = Array[i];
            
            
        }
        
        
        
    }
    cout << " the max number is  : " " " << max <<endl ;
    return 0;
}
