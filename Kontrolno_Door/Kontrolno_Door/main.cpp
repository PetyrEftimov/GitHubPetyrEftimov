//
//  main.cpp
//  Kontrolno_Door
//
//  Created by Pepi on 5/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//


#include <iostream>
#include "Door.hpp"
using namespace std;


int main(){
    
    Door r1;
    Door r2;
    Door r3;
    
    cin >> r1;
    cin >> r2;
    
    
    r3 = r1+r2;
    cout << r3;
    
    if (r1 == r2) {
        cout << "they are equal"<<endl;
    }
    else{
        cout <<"they are not equal"<<endl;
    }
    
    if (r1 > r2) {
        cout << "r1 is bigger"<< endl;
    }
    else{
        cout << "r2 is bigger" << endl;
        
    }
    
    if (r1 < r2) {
        cout << "r1 is bigger"<< endl;
    }
    else{
        cout << "r2 is bigger" << endl;
    }
    return 0;
}
