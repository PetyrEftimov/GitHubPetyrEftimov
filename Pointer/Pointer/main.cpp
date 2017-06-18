//
//  main.cpp
//  Pointer
//
//  Created by Pepi on 4/12/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
using namespace std;


int main(){
    
 /*
    int a = 99;
    int *aPtr;
    
    aPtr = &a;
    
    a = 34;
    cout<<*aPtr<<endl ;
    
    *aPtr = 55 ;             // da se vnimava za takova neshto //
    cout << a << endl ;     // vodi do promqna na promenlivata //
    
    
    
    cout << *aPtr<< endl ;
    cout << a <<endl ;
    cout << &aPtr<<endl ;
    cout << &a<< endl ;
    cout <<&*aPtr<<endl ;
    cout << aPtr<< endl ;
 */
    
    
    long value1 = 200000;
    long value2;
    
    long  *value1Ptr;
    value1Ptr = &value1;
    value2 = *value1Ptr;
    
    
    
    
    
    
    
    cout << value1Ptr;
    cout << &value1;
    cout << *value1Ptr;
    cout << value2;
    
    
    
    
    
    return 0;
}
