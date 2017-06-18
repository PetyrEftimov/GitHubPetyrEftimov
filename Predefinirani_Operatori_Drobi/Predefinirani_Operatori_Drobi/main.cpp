//
//  main.cpp
//  Predefinirani_Operatori_Drobi
//
//  Created by Pepi on 5/8/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <istream>
#include <ostream>
#include "Drobi.hpp"
using namespace std;

int main(){
    
    Drobi drob1;
    Drobi drob2;
    Drobi drob3;
    cout << "enter two num. For Chislitel and tree num. for znamenatel :" << endl ;
    cin >> drob1;
    cin >> drob2;
    
    drob3 = drob1*drob2;
    cout << drob3;
    
    if (drob1 != drob2) {
        cout << "true is not Equals"<<endl;
    }
    
    else{
        cout << "is equals" << endl ;
    }
    
    
    
    
    
    
    
    return 0;
}
