//
//  main.cpp
//  Nasledqvane_Dostavka_na_Pica
//
//  Created by Pepi on 4/20/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include "Adress.hpp"
#include "Client.hpp"
#include "Delivery.hpp"
#include "Pizza.hpp"
#include <vector>
#include <string>
using namespace std;


int main(){
    
 
    Client firstClient;
    
    firstClient.setFirstName("Penho");
    firstClient.setLasName("Dimitrov");
    

    
    firstClient.addAdress(1, "ulitcsa123", 23);
    firstClient.addAdress(2, "erfref", 23423423);
    firstClient.showAddresses();
    
    Pizza firstPizza;
    firstPizza.setPizzaName("kaprichoza");
    firstPizza.setPizzaPrice(10);
    
    Delivery delivery1;
    delivery1.addPizza("kaprichoza", 10);
    delivery1.addPizza("vegitarqna",12);
    delivery1.showPizzes();
    delivery1.calculatePrice();
  //  delivery1.showClientInfo();
  //  delivery1.showClientInfo();
    
    
    
  
    
    
//    Adress firstAdress(1,"bul. Vyzkresenie" , 87);
    
    //firstAdress.showAdress();
 //   Adress secondAdress(2,"bul. vyzkresenie" , 88);
 //   secondAdress.showAdress();
 //   Adress thirdAdres(3,"bul. vyzkresenie", 89);
 //   thirdAdres.showAdress();
 /*
    Adress adreses[3]={firstAdress,secondAdress,thirdAdres};
    Pizza pizza1("Kaprichoza" , 4);
    Pizza pizza2("Vegitarqna" , 5);
    Pizza pizza3("Three Cheese",6);
    Pizza arrPizza[3]={pizza1,pizza2,pizza3};
    
    
    
    
    
    Client firstClient("Ivan" , "Ivanov" , adreses[2]);
    firstClient.showName();
    
    Delivery provider1("Lubomir",firstClient,arrPizza[2]);
    provider1.deliveryinfo();
    provider1.calculatePrice(arrPizza);
    
   */
    
    
    
                       
                       
                       
    
    
    
    
    
    
    
    
    
    
   
    
    
    

    return 0;
}
