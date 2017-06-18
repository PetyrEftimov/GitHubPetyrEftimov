//
//  Bookstore.hpp
//  Kontrolno_Primer_Bookstore
//
//  Created by Pepi on 6/4/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Bookstore_hpp
#define Bookstore_hpp
#include <stdio.h>
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
#include "Book.hpp"
using namespace std;
typedef multimap<string, int> MM_bookPrePrice;
typedef map < int , string ,greater< int> >  M_bigestRevenue;

class Bookstore{
public:
    Bookstore();
    void LoadXmlPrintDailyRevenuePerBookstore(string );
    int DailyRevenueBookstors();
    MM_bookPrePrice BookMaxSells();
    void  CalculateDuplicateBooks();
    void  CalculateSumOfAllBookstorePerBook();
    M_bigestRevenue  CalculateBookBiggestRevenue();
    void SerchByName(string);
    void SearchByNameInMapWithoutDuplicate(string);
    
    
    
    
    
    
    
private:
    vector<Book> v_books;
     multimap <int , string ,less<int> > mm_books;
     map<string , int > m_noDuplicateBooks;
    
     
  
    
    
};

extern Bookstore bk1;

#endif /* Bookstore_hpp */
