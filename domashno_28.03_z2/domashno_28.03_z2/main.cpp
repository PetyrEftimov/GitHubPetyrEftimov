//
//  main.cpp
//  domashno_28.03_z2
//
//  Created by Pepi on 3/28/17.
//  Copyright © 2017 Pepi. All rights reserved.
// //2. Масив А[n]. Да се намери колко пъти се среща К. Масивът и К се въвеждат от потребителя.5

#include <iostream>
using namespace std;
int main(){
    
    
    int n ;
    int count = 0 ;
    cout<< " Enter size : " << endl;
    cin >> n;
    
    int Array[n];
    
    for (int i = 0; i < n; i++) {
        cout <<  " enter number  : "  << endl ;
        cin >> Array[i];
    }
    int k ;
    cout << " Vyvedete chislo za sryvnenie : " << endl;
    cin >> k ;
    
    for (int i = 0; i < n ; i++) {
        if (Array[i] == k) {
            count ++;
        }
        
    }
    
    
    
    cout << "tolkova " << count << endl;
    
    
    
    
    
    
    
    
    
    
    return 0;
}
