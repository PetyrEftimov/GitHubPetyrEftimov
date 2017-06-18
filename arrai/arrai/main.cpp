//
//  main.cpp
//  arrai
//
//  Created by Pepi on 3/27/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
#include <string>
#include <iostream>
using namespace std;
int main(){
  //  int myIntArray [];
    
    
//    int* myIntArray = new int [5] ;
    
//    int myIntArray [] = {1,2,3,4,5};
    
  /*
    string myArray[] = {
        "mon",
        "tue",
        "wens",
        "thyr ",
        "fry",
        "sat",
        "sun"
        
    };
    
    for (int i = 0; i < 7 ; i++) {
        cout << myArray[i]<<endl;
    }
*/
    
    
/*    const int SIZE = 5;
    int* array = new int[SIZE];
    for (int index=0;index<SIZE;index++) {
        cout << "Write element " << index+1 << endl;
        cin >> array[index];
    };
    // Declare and create the reversed array int* reversed = new int[SIZE];
    // Initialize the reversed array
    for (int index = 0; index < SIZE; index++) {
        reversed[SIZE - index - 1] = array[index]; };
    cout << "The reversed array is: ";
    for (int index = 0; index < SIZE; index++) {
        cout << reversed[index]<< " ";
    };
   */
   /*
    const int SIZE = 5 ;
    int* array = new int[SIZE];
    for (int i = 0 ; i < SIZE; i++) {
        cout<< "write element" << i + 1 <<endl;
        cin>>array[i];
    }
  */
    
    /*
    cout<< "enter the number " << endl ;
    int n ;
    cin >> n ;
    
    int*array = new int[n];
    
    for (int i = 0; i < n ; i++) {
         cout <<"arr[" << i << "] = ";
        cin >> array[i];
    
    }
   
     
   */
    
    
    
    
        int array[20];
        
        for (int i=0,n=1;i<20;i++,n++)
        {
            array[i]=n*5;
            cout << array[i] <<" ";
        }
        

    
    
     
    return 0;
}
