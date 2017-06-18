//
//  main.cpp
//  Domashno_12.04
//
//  Created by Pepi on 4/12/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
using namespace std;


int main(){
    
    int n;
    
    
    cout << "enter matrix dim" << endl ;
    
    cin>>n;
    
    int arr[n][n];
    
    
    cout << " enter Number" <<endl ;
    
    for (int i = 0 ; i < n; i++) {
        for (int j = 0 ; j < n; j++) {
            cin >>arr[i][j];
        }
    }
    
    
    for (int i =0 ; i < n ; i++) {
        cout<<arr[i][n-1-i]<< " * " ;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = n - i; j < n; j++) {
            cout << arr[i][j] << " * ";
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0 ; j < n-1-i; j++) {
            cout << arr[i][j] << " * " ;
        }
    }
    

    return 0;
}
