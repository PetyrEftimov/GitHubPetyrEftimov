//
//  main.cpp
//  Predefinirani_Operatori_Racionalni_Chisla
//
//  Created by Pepi on 5/7/17.
//  Copyright © 2017 Pepi. All rights reserved.
//


#include "RationalNumber.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <istream>
#include <ostream>
using namespace std;

int main(){
    
    RationalNumber predfDrob;
    RationalNumber predfDrob1;
    RationalNumber predfDrob2;
    cout << "Enter number "<<endl;
    cin >> predfDrob;
    cin >> predfDrob1;
    
    if (predfDrob == predfDrob1) {
        cout << "Equals"<<endl;
    }
    else{
        cout << "Not Equals"<<endl;
    }
    
    
    
    if (predfDrob != predfDrob1) {
        cout << "not Equals"<<endl;
    }
    else{
        cout << " Equals"<<endl;
    }

    predfDrob2=predfDrob + predfDrob1;
    cout << "operator + is :" << predfDrob2;
    
    predfDrob2=predfDrob*predfDrob1;
    cout << "operaror *  is : " << predfDrob2<<endl;
    
    
    predfDrob2 = predfDrob1 / predfDrob1 ;
    cout << " operator / is : " << predfDrob2 << endl ;
    
    predfDrob2 = predfDrob - predfDrob1;
    cout << "operator - is " << predfDrob2 << endl;


    return 0;
}
