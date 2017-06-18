//
//  main.cpp
//  Airpalne_Reservation
//
//  Created by Pepi on 4/15/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
using namespace std;

void  Reservation();






int main(){
    
    
    Reservation();
    
    
    
    
    return 0;
}

void  Reservation(){
    
    int NumberOfSeedArizona[10]={0};
    int NumberOfSeedAlqska[10]={0};
    int reservation;
    
    
    cout << " enter 1 for arizona or 2 for alqska or 3 for quit" << endl;
    cin >> reservation;
    
    switch (reservation) {
        case 1 :
            
            cout << " enter 1 for one ticket for arizona  " << endl ;
            
            for (int i = 1 ; i <= 10; i++) {
                
                //  cout << " reservation for one ticket " << endl ;
                //   cout << " reservaton for two ticket " << endl ;
                cout << " Enter Resevation   :  " << endl ;
                cin >> NumberOfSeedArizona[i];
                if (NumberOfSeedArizona[i] == 3 ) {
                    break;
                }
                
                
            }
            for (int i  = 1; i <= 10; i++) {
                cout << NumberOfSeedArizona[i]<< endl ;
                
                if (i == 10) {
                    cout << " for this flight no more ticket" << endl ;
                }
            }
            
            
            
            break;
            
        case 2 :
            
            cout << " enter 1 for ticket for alqska " << endl ;
            
            for (int i = 1 ; i <=10; i++) {
                cout << "enter reservation  :" << endl ;
                cin >> NumberOfSeedAlqska[i];
            }
            
            
            
            for (int i = 1 ; i <= 10 ; i++) {
                cout << NumberOfSeedAlqska[i];
                if (i == 10) {
                    cout << "for this flight for alqska no more ticket  " << endl ;
                }
                
            }
            
            break;
        case 3 :  cout << " exit " ;  break;
            
        default:
            break;
    }
    
    
    
    
    
    
}
