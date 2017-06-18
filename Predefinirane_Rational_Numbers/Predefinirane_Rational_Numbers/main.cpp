//
//  main.cpp
//  Predefinirane_Rational_Numbers
//
//  Created by Pepi on 5/18/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include "RationalNumbers.hpp"
using namespace std;


int main(){
    
    RationalNumbers r1;
    RationalNumbers r2;
    RationalNumbers r3;
    
    cin >> r1;
    cin >> r2;
    
    if (r1 != r2) {
        cout << "is not equals"<<endl;
    }
    else{
        cout << "is  equals "<<endl;
    }
    
    r3 = r1*r2;
    cout << r3;
    
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
    return 0;
}
