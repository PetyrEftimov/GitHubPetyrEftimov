//
//  main.cpp
//  domashno_28.03_z4
//
//  Created by Pepi on 3/28/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    
    
    //4. Масив А[n]. Да се намерят максималния и минималния елемент. Масивът се въвежда от потребителя.
    
    
    int n ;
    int max = 0 ;
    int min = 0 ;
    
    
    cout << "enter size : " << endl ;
    
    cin >> n;
    
    int Array[n];
    
    for (int i = 0 ; i < n; i++) {
        cout << " enter number : " << endl ;
        cin >> Array[i];
    }
    
    min = max = Array[0];
    
    for (int i = 0 ; i < n; i++) {
        
        
        
        if (Array[i] > max) {
            max = Array[i];
        }
        if (Array[i]  < min){
            min = Array[i];
            
        }
        
    }
    cout << " max is : " << max << endl ;
    
    cout << "min is :  " << min << endl ;
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
