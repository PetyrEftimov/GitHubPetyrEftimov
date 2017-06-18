//
//  main.cpp
//  Funkcii_Ezi_Tura
//
//  Created by Pepi on 3/31/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
#include <cmath>
#include <iostream>
#include <iomanip>
#include <ctime>
using std:: time;
using namespace std;

#include <cstdlib>
using std::srand;
using std::rand;

int headsAndTails(int start){
    
    int ezi = 0 ;
    int tura = 0 ;
    
    srand(time (NULL));
    
    for (int i = 0; i < 100; i++) {
        float counter= rand ()%2;
        
        if (counter == 0 ) {
            ezi++;
        }
        if (counter == 1) {
            tura++;
        }
    }
    cout << "ezi : " <<ezi<< " tura : " <<tura<< endl ;

    return 0 ;
}

int main(){
    
    int start ;
    
    cout << "enter 1 for start " << endl;
    
    cin >> start;
    
    if (start == 1 ) {
        headsAndTails(start);
    }
    else{
        cout << "like ia sed press 1 :" << endl;
        
    }
    
    
    
    
    

    return 0;
}
