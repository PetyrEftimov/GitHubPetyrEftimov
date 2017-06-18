//
//  main.cpp
//  Kontrolno_Magazin
//
//  Created by Pepi on 5/19/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include "Shop.hpp"
#include <string>
#include <vector>
#include "Manufacturer.hpp"
#include "Produckt.hpp"
using namespace std;
int main(){
    
    Manufacturer m1("nivea" ,"123n" , "usa");
    Manufacturer m2( " pomorin " , "123n" ,"bg");
    Produckt produckt1("cool" , "pudra" ,12 , 2 ,m1);
    Produckt produckt2("hot" , "creme" , 5 , 3,m2);
    Produckt produckt3("shampoo" , "sprey" , 4 , 4 ,m2);
    Produckt produckt4("cool" , "sprey" , 4 , 4 ,m2);

    
    Shop shop1;
//    shop1.addManifacturer(m1);
//    shop1.addManifacturer(m2);
    shop1.addObjektProduckt(produckt1);
    shop1.addObjektProduckt(produckt2);
    shop1.addObjektProduckt(produckt3);
    shop1.addObjektProduckt(produckt4);
    
    shop1.showProduckt();
    shop1.statisticByType();
    cout <<"********"<<endl;
    shop1.serachByPrice(1);
    
    
    

    return 0;
}
