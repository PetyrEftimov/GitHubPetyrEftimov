//
//  main.cpp
//  domashno_28.03_z3
//
//  Created by Pepi on 3/28/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
//3. Масив А[n]. Да се намери максималният  елемент и неговият индекс. Масивът се въвежда от потребителя.

#include <iostream>
using namespace std;

int main(){
    
    int n  = 0;
    int max = 0;
    int counter = 0;
    cout << "Enter size :  " << endl ;
    
    cin >> n ;
    
    int Array[n];
    
    for (int i = 0 ; i < n; i++) {
        cout << " Enter number  : " << endl ;
        
        cin >> Array[i];
    }
    
    for (int i = 0; i < n; i++) {
        // cout << " elemen " << i << endl ;
        //    cout << " Stoinosta v kletkata " << Array[i] << endl ;
        if (Array[i] > max) {
            max = Array[i];
            counter = i;
        }
        
        
    }
    cout<<  "nai Golqma stojnost : " <<max<<  " indeksa e  : " << counter <<endl;
    
    
    
    
    
    
    
    
    
    
    return 0;
}
