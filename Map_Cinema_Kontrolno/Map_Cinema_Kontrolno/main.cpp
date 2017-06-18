//
//  main.cpp
//  Map_Cinema_Kontrolno
//
//  Created by Pepi on 6/3/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include "Cinema.hpp"
#include "Screening.hpp"
using namespace std;

int main(){
    cn1.LoadXml("Cinema.xml");
    cn1.LoadXml("Cinema2.xml");
    cn1.LoadXml("Cinema3.xml");
    
    
    cout <<"----task 1----------"<<endl;
    string s_revenuePerScreening;
    s_revenuePerScreening = cn1.RevenuePerScreening();
    cout << s_revenuePerScreening;
    
    
    cout <<"----task 2----------"<<endl;
    MM_TypeToQuantityStrInt mm_screeMaxRev;
    mm_screeMaxRev = cn1.ScreeningMaxRevenue();
    cout << "Max Revenue per Screen : " << mm_screeMaxRev.begin() -> first << "-"<< mm_screeMaxRev.begin()-> second;
    
    
    
    cout << "-------Search by Movie Name: -----------"<<endl;
    MM_SearchByNameStrStr mm_searchByNameResult;
    mm_searchByNameResult = cn1.SearchByMovie("PROMETEUS");
    for(multimap<string, string>::iterator itr = mm_searchByNameResult.begin();
        itr!= mm_searchByNameResult.end(); ++itr){
        cout << "Searched Results: "<< itr-> first<<" - "<< itr -> second<<endl;
    }
    
    
    cout << "--------task---------"<<endl;
    
    MM_ProfitableSceeningResult mm_profitable1;
    mm_profitable1 =  cn1.ProfitableScreening();
    cout << "Highest Profitable Screening % " << mm_profitable1.begin()->first<<"-"<<mm_profitable1.begin()->second<<endl;
    
    
    cout<<"-----task------"<<endl;
    cn1.CalculateDuplicatetMovies();
    cn1.RevenuePerMovie();
    cout <<"-----task---------"<<endl;
    cn1.SmalestRevenuePerMovie();
    
    

  

    return 0;
}
