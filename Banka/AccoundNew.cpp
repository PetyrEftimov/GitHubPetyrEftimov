//
//  AccoundNew.cpp
//  Banka
//
//  Created by Pepi on 4/5/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
#include <iostream>
#include <stdio.h>
#include "AccoundNew.hpp"
using namespace std;



AccoundNew::AccoundNew(){
    
}


AccoundNew::AccoundNew(int ballance){
  
    if (ballance <=0) {
        cout << "your bank account is empti " << endl ;
    }
    else{
    
    this->ballance=ballance;
    
    }
    
     
    
    
    
    
    
    
    
}

void AccoundNew::setBallance(int initialBalance){
    
    
    if (ballance <= 0 ) {
         cout << "your bank account is empti " << endl ;
    }
    else{
    
    this-> ballance = initialBalance;
}
}


    
int AccoundNew::getBallance(){
    
    return this->ballance;
    
}






void AccoundNew::showInfo(){
    
    cout << this->ballance << endl ;
}

int AccoundNew::Credit(int amount ){
    
    if (ballance < amount){
        
      ballance = ballance - amount;
        
        }

    return  ballance;


}


int AccoundNew::Debit(int amount){
    if (ballance > amount) {
        ballance = ballance - amount;
    }
    return ballance;
    
}
    
    
    
