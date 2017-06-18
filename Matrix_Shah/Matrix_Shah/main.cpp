//
//  main.cpp
//  Matrix_Shah
//
//  Created by Pepi on 4/12/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    
    int board[8][8] ={0};
    
    for (int  i = 0 ; i < 8 ; i++) {
        for (int j = 0  ; j < 8; j++) {
            cout << board[i][j]<< " " ;
        }
    }
    
    
    board[0][5] = 1;  // peshka
    board[1][0] = 5;  // carica
    
    cout << "/////////////////////////////////" <<endl ;
    
    
    for (int i = 0  ; i < 8 ; i++) {
        for (int j = 0 ; j < 8 ; j++) {
            cout  <<" "<< board[i][j];
        }
        cout << endl;
    }
    
    
    int qi = 5;
    int qj = 5 ;
    int pi = 3 ;
    int pj = 6 ;
    
    
    
    if (qi == pi || qj == pj || qi + qj == pi + pj || qj + pi == qi + pj ) {
        cout << "taken " << endl ;
    }
    
    else{
        cout << " no taken " << endl ;
    }
    
    
    
    

    return 0;
}
