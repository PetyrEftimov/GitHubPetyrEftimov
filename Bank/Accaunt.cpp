//
//  Accaunt.cpp
//  Bank
//
//  Created by Pepi on 4/5/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Accaunt.hpp"
using namespace  std ;


Accaunt::Accaunt(){
    
}




Accaunt::Accaunt(int initionBalance){
    if (initionBalance >=0)
        balance = initionBalance;
    if (initionBalance < 0 ) {
        
    }
    
}

void Accaunt::ceredit(int amount ){
    balance = amount + balance;

}


void Accaunt::debit(int amount ){
    if (amount > balance) {
        cout << " debit amount exceeded account balance" << endl ;
    }
    else{
        balance = balance - amount;
    }
    
}

int Accaunt::getBalance() {
    return this->balance;
}
