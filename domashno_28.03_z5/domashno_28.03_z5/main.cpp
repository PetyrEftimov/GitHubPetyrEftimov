//
//  main.cpp
//  domashno_28.03_z5
//
//  Created by Pepi on 3/28/17.
//  Copyright © 2017 Pepi. All rights reserved.
// //  5. Масив А[n]. Да се изведат всички елементи с най-малка стойност в масива. Масивът се въвежда от потребителя.



#include <iostream>
using namespace std ;
int main(){
    
    
    
    
    
    
    int n ;
    int min = 0 ;
    
    
    cout << " enter size : " << endl ;
    
    cin >> n ;
    
    int Array[n];
    
    for (int i = 0; i < n ; i++) {
        cout << "enter number : " << endl ;
        cin >> Array[i];
    }
    min = Array[0];
    
    for (int i = 0 ; i < n ; i++) {
        if (Array[i] < min)  {
            min = Array[i];
        }
        
    }
      
    
    
    
    cout << "min is " << min << endl ;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
