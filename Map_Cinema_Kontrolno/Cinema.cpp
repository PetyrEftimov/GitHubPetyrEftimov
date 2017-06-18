//
//  Cinema.cpp
//  Map_Cinema_Kontrolno
//
//  Created by Pepi on 6/3/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Cinema.hpp"
Cinema::Cinema(){}

void Cinema:: LoadXml(string path   )
{
    pugi::xml_document x_cinema;
    
    if (!x_cinema.load_file(path.c_str()))
    {
        cerr<<"no such File"<<endl;
    }
    //    else
    //    {
    //        cout << "file is ok"<<endl;
    //    }
    
    Screening screening1;;
    pugi::xml_node items = x_cinema.child("CINEMA");
    
    for (pugi::xml_node it = items.first_child(); it; it=it.next_sibling())
    {
        screening1.setFilmName(it.child_value("FILMNAME"));
        screening1.setHall(it.child_value("HALL"));
        screening1.setPrice(it.child("PRICE").text().as_int());
        screening1.setCapacyty(it.child("CAPACITY").text().as_int());
        screening1.setSoldTiket(it.child("SOLDTIKET").text().as_int());
        v_screenings1.push_back(screening1);
    }
    
    
}

string Cinema:: RevenuePerScreening()
{
    string s_infoRevenuePerScreening="";
    for (size_t i = 0; i < v_screenings1.size(); i++)
    {
        int coef = v_screenings1.at(i).getPrice()*v_screenings1.at(i).getSoldTiket();
        
        s_infoRevenuePerScreening += "Screening : " +  v_screenings1.at(i).getFilmName() + " : Revenue " + to_string(coef) + "\n";
    }
    
    return s_infoRevenuePerScreening;
    
}

MM_TypeToQuantityStrInt Cinema:: ScreeningMaxRevenue()
{
    MM_TypeToQuantityStrInt mm_returnedScreeningMaxRevenue;
    for (size_t i = 0; i < v_screenings1.size(); i++)
    {
        int coef = v_screenings1.at(i).getPrice()*v_screenings1.at(i).getSoldTiket();
        string name =  v_screenings1.at(i).getFilmName();
        mm_screening.insert(pair<int, string>(coef , name));
    }
    
    mm_returnedScreeningMaxRevenue.insert(pair<string,int>(mm_screening.rbegin()->second , mm_screening.rbegin() -> first));
    
    // cout <<"Max Revenue per Screen : "<<mm_screening.rbegin()->second<<"-"<<mm_screening.rbegin()->first<<endl;
    
    return mm_returnedScreeningMaxRevenue;
}



//- Cinema:: SearchByMovie(string name) - тук трябва да се получат : име на филм - име на зала  ,тоест ти трябва мап и да се връща от метода
MM_SearchByNameStrStr Cinema:: SearchByMovie(string name)
{
    MM_SearchByNameStrStr myMultimapWithSearchedValue;
    for (size_t i = 0; i < v_screenings1.size(); i++)
    {
        if (name == v_screenings1.at(i).getFilmName())
        {
            
            // v_screenings1.at(i).ScreeningInfo();
            //push searched values in multimap
            
            myMultimapWithSearchedValue.insert(pair<string , string>(v_screenings1.at(i).getFilmName(), v_screenings1.at(i).getHall() ) );
        }
    }
    
    return myMultimapWithSearchedValue;
    
}

MM_ProfitableSceeningResult Cinema::   ProfitableScreening()   // capacyty i prodadeni boleti//rentabilnost po prodadeni bileti razdeleno na kapacitet///
{
    MM_ProfitableSceeningResult mm_profitavleScreening1;
    
    for (size_t i = 0 ; i < v_screenings1.size(); i++)
    {
        double koef =((double)v_screenings1.at(i).getSoldTiket() / v_screenings1.at(i).getCapacyty())*100;
        
        m_multimapProfitable.insert(pair<double, string>(koef ,v_screenings1.at(i).getFilmName()));
    }
    mm_profitavleScreening1.insert(pair<double, string>(m_multimapProfitable.begin()->first, m_multimapProfitable.begin()->second));
    
    
    return mm_profitavleScreening1;
}

void Cinema:: CalculateDuplicatetMovies()
{
    multimap<int,string>::iterator itr ;
    
    for (itr = mm_screening.begin(); itr != mm_screening.end(); itr++)
    {
        if (m_noDupliMovie.find(itr -> second) != m_noDupliMovie.end())
        {
            m_noDupliMovie[itr -> second] = m_noDupliMovie[itr -> second] + itr -> first;
        }
        else
        {
            m_noDupliMovie[itr -> second] = itr -> first;
        }
        
    }
    
    
    
}

void Cinema:: RevenuePerMovie()
{
    
    map<string ,int>::iterator m_it;
    
    for (m_it = m_noDupliMovie.begin(); m_it != m_noDupliMovie.end(); m_it++)
    {
        cout << m_it -> first << " - " <<m_it -> second << endl;
    }
    
}

void Cinema:: SmalestRevenuePerMovie()
{
    map<int , string, less<int>> m_sortet;
    map<string ,int>::iterator m_it;
    
    for (m_it = m_noDupliMovie.begin(); m_it != m_noDupliMovie.end(); m_it++)
    {
        m_sortet[m_it ->second]=m_it ->first;
    }
    
    cout <<"The smalest revenue per movie : " << m_sortet.begin()->second <<"-"<< m_sortet.begin()->first<<endl;;
}

void Cinema:: SearchByMovie()
{
    
    
}







Cinema cn1;
