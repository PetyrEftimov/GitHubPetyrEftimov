//
//  main.cpp
//  Kontrolno_Primer_Bookstore
//
//  Created by Pepi on 6/4/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <iterator>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <ostream>
#include <cctype>
#include <array>
#include "pugixml.hpp"
#include "Bookstore.hpp"
#include "Book.hpp"
using namespace std;


int main()
{
    
    bk1.LoadXmlPrintDailyRevenuePerBookstore("bookstore1.xml");
    bk1.LoadXmlPrintDailyRevenuePerBookstore("bookstore2.xml");
    bk1.LoadXmlPrintDailyRevenuePerBookstore("bookstore3.xml");
    cout <<"-------task----------"<<endl;
    cout <<"Daily revenue all bookstors : "<< bk1.DailyRevenueBookstors()<<endl;
    cout <<"------task------------"<<endl;
    MM_bookPrePrice mm_MaxSellsBook;
    mm_MaxSellsBook = bk1.BookMaxSells();
    cout << mm_MaxSellsBook.begin()->first<<"-"<<mm_MaxSellsBook.begin()->second<<endl;
    cout <<"------task--------------"<<endl;
    // pupate map without doplicate
    bk1.CalculateDuplicateBooks();
    cout <<"--------task--------------"<<endl;
    bk1.CalculateSumOfAllBookstorePerBook();
    cout <<"--------task-------------"<<endl;
    
    M_bigestRevenue bigestRevenue;
    bigestRevenue = bk1.CalculateBookBiggestRevenue();
    cout <<"Bigest Revenue : "<< bigestRevenue.begin()->second <<"----"<<bigestRevenue.begin()->first<<endl;
    
    cout <<"------task----------"<<endl;
    bk1.SerchByName("PROMETEUS");
    cout << "------task-----------"<<endl;
    bk1.SearchByNameInMapWithoutDuplicate("PROMETEUS");
    
    
    
    
    
    

    return 0;
}
