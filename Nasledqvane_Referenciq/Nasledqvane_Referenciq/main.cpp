//
//  main.cpp
//  Nasledqvane_Referenciq
//
//  Created by Pepi on 5/1/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include "Accound.hpp"
#include "SavingsAccount.hpp"
using namespace std;

int main(){
    double acount = 50.3;
    Accound ac1;
    ac1.setAccoundBalance(acount);
    cout << acount<<endl;
    ac1.credit(73.4);
    cout << ac1.getAccoundBalance()<<endl;
    ac1.debit(10);
    cout << ac1.getAccoundBalance()<<endl;
    SavingsAccount save1(ac1.getAccoundBalance() , 1.3);
    cout << save1.calculateInterest()<<endl;
    Accound *ac2 = new Accound(55.6);
    Accound *ac3 = new Accound(66.7);
    SavingsAccount *save2 = new SavingsAccount(ac3->getAccoundBalance() , 2.4);
    
    vector<Accound*> accounts;
    accounts.push_back(&save1);
    accounts.push_back(ac2);
    accounts.push_back(ac3);
    accounts.push_back(save2);
    
    for (size_t i = 0 ; i < accounts.size(); i++) {
        cout << accounts.at(i) -> getAccoundBalance()<<endl;
        Accound* current = accounts.at(i);
        if (SavingsAccount *svA = dynamic_cast<SavingsAccount*>(current)) {
            cout << svA -> calculateInterest()<<endl;
        }
    }
    

    return 0;
}
