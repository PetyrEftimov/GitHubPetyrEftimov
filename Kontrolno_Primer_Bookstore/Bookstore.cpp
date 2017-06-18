//
//  Bookstore.cpp
//  Kontrolno_Primer_Bookstore
//
//  Created by Pepi on 6/4/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Bookstore.hpp"
Bookstore::Bookstore()
{
    
}

 void Bookstore:: LoadXmlPrintDailyRevenuePerBookstore(string path)
{
    pugi::xml_document doc_xml ;
    
    if (!doc_xml.load_file(path.c_str()))
    {
        cerr<<"No such file ";
    }
    
    
    int dailyRevenuePerBookstore = 0 ;
    pugi::xml_node books = doc_xml.child("BOOKSTORE");
    for (pugi::xml_node itr = books.first_child() ; itr; itr = itr.next_sibling()) {
        Book bookObj;
        bookObj.setName(itr.child_value("NAME"));
        bookObj.setAutor(itr.child_value("AUTOR"));
        bookObj.setPrice(itr.child("PRICE").text().as_int());
        bookObj.setSoldBook(itr.child("PRICE").attribute("SOLDBOOK").as_int());
        v_books.push_back(bookObj);
        dailyRevenuePerBookstore+=(bookObj.getPrice()*bookObj.getSoldBook());
    }
    
    cout <<"Daily Revenue per stor : "<<dailyRevenuePerBookstore<<endl;
    
}

 int Bookstore:: DailyRevenueBookstors()
{
    int sum = 0;
    for (size_t i = 0 ; i < v_books.size(); i++) {
        sum += v_books.at(i).getPrice()*v_books.at(i).getSoldBook();
    }
    return sum;
}
MM_bookPrePrice Bookstore:: BookMaxSells()
{
    
    MM_bookPrePrice mm_book;
    for (size_t i = 0; i < v_books.size(); i++) {
        int bookSellWinner = v_books.at(i).getPrice()*v_books.at(i).getSoldBook();
        string name = v_books.at(i).getName();
        mm_books.insert(pair<int,string>(bookSellWinner,name));
    }
    mm_book.insert(pair<string , int>(mm_books.rbegin()->second,mm_books.rbegin()->first));
    
    
    
    return mm_book ;
}
void Bookstore::CalculateDuplicateBooks()
{
    multimap<int,string>::iterator itr;
    
    //itrate multimap with diplicate
    for (itr = mm_books.begin(); itr != mm_books.end(); itr++) {
    //  ako v mapa bez duplivati nameri key ot multimapa i ne e stignal kraq -> calculirai velutata//
        if (m_noDuplicateBooks.find(itr ->second) != m_noDuplicateBooks.end()) {
            m_noDuplicateBooks[itr ->second] = m_noDuplicateBooks[itr -> second] + itr -> first;
        }
        else
        {
            m_noDuplicateBooks[itr-> second] = itr -> first;
        }
    }
}

void Bookstore::CalculateSumOfAllBookstorePerBook()
{
    map<string , int>::iterator itr;
    for (itr = m_noDuplicateBooks.begin() ; itr != m_noDuplicateBooks.end(); itr++)
    {
        cout << itr -> first <<"-"<<itr -> second<<endl;
    }
}

M_bigestRevenue Bookstore::CalculateBookBiggestRevenue()
{

    M_bigestRevenue  m_bigestRevenue1;
    
    map < string , int >  :: iterator itr;
    
    for (itr = m_noDuplicateBooks.begin(); itr != m_noDuplicateBooks.end(); itr++)
    {
        m_bigestRevenue1[itr -> second] = itr -> first;
    }
    
    
    return m_bigestRevenue1;
}

 void Bookstore:: SerchByName(string name)
{
    for (size_t i = 0; i < v_books.size(); i++) {
        if (v_books.at(i).getName() == name) {
             v_books.at(i).BookInfo();
        }
    }
    
}
void Bookstore:: SearchByNameInMapWithoutDuplicate(string name)
{
    map<string , int > :: iterator itr ;
    for (itr = m_noDuplicateBooks.begin(); itr != m_noDuplicateBooks.end(); itr++) {
        if (itr -> first == name) {
            cout << itr -> first <<":"<<itr -> second << endl;
        }
    }
}









Bookstore bk1;

