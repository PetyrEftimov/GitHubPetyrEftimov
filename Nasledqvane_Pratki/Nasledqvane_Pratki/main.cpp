//
//  main.cpp
//  Nasledqvane_Pratki
//
//  Created by Pepi on 4/28/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include "Address.hpp"
#include "Client.hpp"
#include "Packaje.hpp"
#include "Function.hpp"
#include "TwoDayPackage.hpp"
#include "Sender.hpp"
int main(){
    Address adr2("Bulgaria","Sofia","Vyzkresenie",1324);
    Address adr1("usa","Bostot","woshington", 1345);
    Address adr3("usa","NY","5-Avenu",3345);
    Address adr4("Bulgaria","Sofia","Vyzkresenie1222",2324);
    // adr1.printAddress();
    Client sender1("Muto" , "mutov" , adr1);
    Client sender2("viki" , "peneva " ,adr3);
    Client reciver1("Muto","mutov", adr3);
    Client reciver2("Muto","mutov", adr4);
    //  sender.clientPrintName();
    //  reciver.clientPrintName();
    Packaje pak1(1.25,2.5,sender1,reciver1);
    Packaje pak2(1.50,3,sender1,reciver2);
    Packaje pak3(2.4 , 5.5, sender2 , reciver2);
    //  pak1.packajeInfo();
   // pak1.packajeZipCodeReciver();
  //  pak2.packajeZipCodeReciver();
    
    vector<Packaje> pakajes ;
    pakajes.push_back(pak1);
    pakajes.push_back(pak2);
    pakajes.push_back(pak3);
 // cout << "_________"<<endl;
 //   pak1.searchByZipCode(pakajes, 1324);
    cout << "___________"<<endl;
  //  pak1.searchByFName(pakajes, "Muto");
  //  cout << "------------"<<endl ;
  //  pak2.serachByLName(pakajes, "mutov");
    cout << ";;;;;;;;;;"<<endl;
    pak1.senderReciverAtSameTime(pakajes, "Muto", "mutov");
    cout <<"///////////////////////::::::::::::::::" <<endl;
    Function fun1;
    Function fun2;
    Function fun3;
    Function fun4;
    fun1.searchByZipCode1(pakajes,1324);
    cout << ":):):):):):):):"<<endl;
    fun2.searchBySenderFName(pakajes, "viki");
    cout << "??????????????"<<endl;
    fun3.searchByReciverFname(pakajes, "Muto");
    cout << "&&&&&&&&&&&&&&&&&&&&&&" <<endl;
    fun4.senderReciverAtSameTime(pakajes, "Muto", "mutov");
    cout <<"***********************"<<endl;
    double allSum = 0;
    allSum = fun4.priceOfAllPakajes(pakajes);
    cout << allSum;
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
    double priceOfDelivery = 0 ;
    priceOfDelivery= pak1.calculateTwoDayPackageCost();
    cout << priceOfDelivery<<endl;
    cout<<":::::::::::::::::::::::::::::::"<<endl;
    TwoDayPackage TDP1(1.25,2.45,sender1,reciver2,3.55);
    cout << TDP1.calculateTwoDayPackageCost()<<endl;
    cout << pak1.calculateTwoDayPackageCost()<<endl;
    cout<<"------------------------------"<<endl;
    Sender send1("ivan" , "ivanov" , adr3 , "112345678" );
    send1.printInvoice();
    
    Address adresPredefiniran;
    cin >>adresPredefiniran;
    cout <<adresPredefiniran;
    
    
    
    
    
    return 0;
}
   
