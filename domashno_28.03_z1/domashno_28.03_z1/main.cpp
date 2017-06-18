//
//  main.cpp
//  domashno_28.03_z1
//
//  Created by Pepi on 3/28/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    
    //1. Имаме едномерен масив А[n] и К. Да се намери и изведе позицията на първото срещане на К в масива, или -1 ако го няма. Масивът и К се въвеждат от потребителя.
    
    int n ;
    int missing = 0 ;
    cout<< " Enter size :  " << endl ;
    
    cin>> n ;
    
    int Array[n];
    
    
    for (int i = 0; i < n; i++) {
        cout<< " Enter number : "  << endl ;
        cin >> Array[i];
    }
    
    int k ;
    cout << " vuvedete chislo za sryvnenie  : "  << endl;
    
    cin >> k ;
    
    for (int i = 0; i < n ; i++) {
        if (Array[i] == k) {
            cout << "poziciqta e broime ot 1 : "<< i + 1<< endl;
            missing = 1;
        }
        
        
        
        
    }
    if (missing == 0 ) {
        cout << "-1" << endl ;
    }
    
    
    
    
    
    
    
    
    return 0;
}
