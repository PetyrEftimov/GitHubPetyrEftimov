//
//  main.cpp
//  Funkcii_zadacha_5
//
//  Created by Pepi on 3/31/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
#include <cmath>
#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
// Parking ; za 3 chasa -> 2$  ; za vseki sledvasht  -> 0.50$ ; za 24 chasa -> 10$ ; max prestoi 24 chasa ; Напишете програма, която изчислява и отпечатва такси за паркиране на всеки един от трима клиенти, които паркирали колите си в този гараж вчера.//


    double Parking(float time){
        
        double result = 2 ;
 
        double oneHour = 0.5 ;
        int oneDay = 10;
        
        
       // for (int i = 0; i == time; i++) {
            
     //   }
    
        
        if (time > 0 && time <=3) {
            result = 2 ;
            cout << " for 3 Hour : " << result<<endl ;
            
        }
        
         if (time > 3 && time < 24 ){
            
            for (int i = 4; i <= time ; i++) {
                result =   result + oneHour;
                
                            }
             
            cout << " parkinng charge : " << result << endl ;
    
        }
       
        
        
        if (time == 24 ) {
            cout << oneDay ;
            
        }
        
        
        
        
        
        
    
        return result;
    
    }






int main(){
    
    
    
     float time =0 ;
     float array[15];
    
     int i =0;
    
    cout<< " Enter 1-24 for stay or -1 for inspection " << endl ;
    while (time != -1 ) {
        
        float resultFromParking;
       
        
        cout << " enter time  " << endl ;
        cin >> time ;
        
       
        
        if (time > 0 ) {
            
            resultFromParking = Parking(time);
        //   for (int i = 0 ; i < 100; i++) {
                array[i]=resultFromParking;
                i++;
              //  cout <<  " :( " <<array[i]<< endl;
       //     }
            
            
            
        }
    
    }
    
    if (time == -1 ) {
       for (int i = 0; i < 15; i+=3) {
           
           cout << " klient  N: " << i << "charge : " << array[i] << endl;
        }
    }
    
    
    
    
    
    
    
    
    


    
    
    
    
    
    
    
    
    return 0;
    
}

