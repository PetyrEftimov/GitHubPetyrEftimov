////
////  Stl_Gradusi_alloune.cpp
////  STL_POPRAVKA
////
////  Created by Pepi on 6/11/17.
////  Copyright © 2017 Pepi. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <vector>
//#include <map>
//#include <algorithm>
//using namespace std;
//// 1) в кой град е било най-топло : град/градове
//vector<string> mostHotTown(map<string , vector<int> > m_sorted)
//{
//    int maxTemp = -100 ;
//    string city;
//    vector<string>v_hotestTown;
//    map <string , vector<int>>::iterator it;
//    for (it = m_sorted.begin(); it != m_sorted.end(); it++)
//    {
//        vector<int>v_temp = it -> second;
//        int max = (int)v_temp[v_temp.size()-1];
//        
//        
//        
//        if (max > maxTemp )
//        {
//            maxTemp = max;
//            city = it -> first;
//        }
//    }
//    for (it = m_sorted.begin(); it != m_sorted.end(); it++)
//    {
//        vector<int>v_temp1 = it -> second;
//        if (v_temp1[v_temp1.size()-1]  == maxTemp)
//        {
//            v_hotestTown.push_back(it -> first);
//        }
//    }
//    
//    return v_hotestTown;
//}
//
////2) било най-студено , за всеки от градовете
////град -> най- ниска температура
//
//map <string , int > mostLowTempInCities(map<string , vector<int> > m_sorted)
//{
//    map<string , int > m_lowTemp;
//    map<string, vector<int> >:: iterator it;
//    for (it = m_sorted.begin(); it != m_sorted.end(); it++)
//    {
//        vector<int>v_temp = it -> second;
//        int min = v_temp[0];
//        m_lowTemp[it -> first] = min;
//        
//    }
//    
//    return m_lowTemp;
//}
//
////3) петте най-високи темп. за стараната : град -> темп.
//
//multimap <string , int > fiveHightTempInCountry(map<string , vector<int> > m_sorted)
//{
//    vector<int> v_vector;
//    multimap<string , int> m_hightTemp;
//    map<string, vector<int> >:: iterator it;
//    for (it = m_sorted.begin(); it != m_sorted.end(); it++)
//    {
//        vector<int>v_temp = it -> second;
//        copy(v_temp.begin(), v_temp.end(), inserter(v_vector, v_vector.end()));
//        
//    }
//    sort(v_vector.begin(),v_vector.begin()+v_vector.size());
//    vector<int> v_fiveTemp;
//    for (size_t i = v_vector.size()-1; i > v_vector.size()-6; i--)
//    {
//        v_fiveTemp.push_back(v_vector.at(i));
//    }
//    
//    for (size_t i = 0 ; i < v_fiveTemp.size(); i++)
//    {
//        int fiveTemp = v_fiveTemp.at(i);
//        
//        map<string , vector<int> > ::iterator itr;
//        
//        for (itr = m_sorted.begin(); itr != m_sorted.end(); ++itr)
//        {
//            vector<int>v_vec = itr -> second;
//            if (find(v_vec.begin(), v_vec.end(), fiveTemp) != v_vec.end())
//            {
//                m_hightTemp.insert(pair<string, int> (itr -> first , fiveTemp));
//            }
//        }
//    }
//    return m_hightTemp;
//}
//
//
//// 4) колко пъти във всеки град е било > 15 : град -> бройка
//
//map<string,int> counterTempMoreThan15InTown(map<string , vector<int> > m_sorted)
//{
//    map<string,int> counterTemp;
//    int counter = 0;
//    map<string, vector<int> >:: iterator it;
//    for (it = m_sorted.begin(); it != m_sorted.end(); it++)
//    {
//        
//        vector<int>v_temp = it -> second;
//        for (size_t i = 0 ; i < v_temp.size(); i++)
//        {
//            
//            if (v_temp.at(i) > 15 )
//            {
//                counter++;
//            }
//        }
//        counterTemp[it -> first] = counter;
//    }
//    
//    
//    return counterTemp;
//}
//
//
////5) колко дни е било <= 10, колко дни е било <=20,
////колко дни е било над 20 : брой дни -> гранична температура
//
//multimap <int,int> countTemp1(map<string , vector<int> > m_sorted)
//{
//    int counter1 = 0 ;
//    int counter2 = 0 ;
//    int counter3 = 0 ;
//    vector<int>v_allTemperature;
//    multimap<int,int> mm_countTemp;
//    map <string , vector<int> > :: iterator it ;
//    for (it = m_sorted.begin(); it != m_sorted.end(); it++)
//    {
//      
//        vector<int> v_allTemp = it -> second;
//        copy(v_allTemp.begin(), v_allTemp.end(),inserter(v_allTemperature, v_allTemperature.end()));
//    }
//    sort(v_allTemperature.begin(), v_allTemperature.begin()+v_allTemperature.size());
//        for (size_t i = 0 ; i < v_allTemperature.size(); i++)
//        {
//            
//            if (v_allTemperature.at(i) <= 10)
//            {
//                counter1++;
//            }
//            if (v_allTemperature . at(i) <= 20)
//            {
//                counter2++;
//            }
//            if (v_allTemperature.at(i) > 20)
//            {
//                counter3++;
//            }
//        }
//        mm_countTemp.insert(pair<int ,int>(counter1 ,10));
//        mm_countTemp.insert(pair<int ,int>(counter2 ,20));
//        mm_countTemp.insert(pair<int ,int>(counter3 ,21));
//        
//        
//        
//    
//    
//    
//    return mm_countTemp;
//}
//
//
//int main()
//
//{
//    
//    vector<int>v_sofia = {12,-12,2,23,36,22,11,8,7,14};
//    vector<int>v_plovdiv = {12,3,24,23,37,22,11,8,7,14};
//    vector<int>v_varna = {12,-11,24,2,35,32,11,38,7,24};
//    
//    map<string,vector<int>> m_sorted;
//    sort(v_sofia.begin(),v_sofia.begin()+v_sofia.size());
//    sort(v_plovdiv.begin(),v_plovdiv.begin()+v_plovdiv.size());
//    sort(v_varna.begin(),v_varna.begin()+v_varna.size());
//    m_sorted["sofia"]= v_sofia;
//    m_sorted["plovdiv"] = v_plovdiv;
//    m_sorted["varna"] = v_varna;
//    
//    vector<string> hotestTown = mostHotTown(m_sorted);
//    for (size_t i = 0 ; i < hotestTown.size(); i++)
//    {
//        cout << hotestTown.at(i)<< endl;
//    }
//    cout <<"-------------------"<<endl;
//    map <string , int > m_lowTemp = mostLowTempInCities(m_sorted);
//    map<string , int > :: iterator it;
//    for (it = m_lowTemp.begin(); it != m_lowTemp.end(); it++)
//    {
//        cout << it -> first <<"--"<<it -> second<<endl ;
//    }
//    cout <<"-----task3-----"<<endl ;
//    
//    multimap<string , int> fiveTemp = fiveHightTempInCountry(m_sorted);
//    multimap<string , int > :: iterator it1;
//    for (it1 = fiveTemp.begin(); it1 != fiveTemp.end(); it1++)
//    {
//        cout << it1 -> first <<"--"<< it1 -> second << endl ;
//    }
//    cout <<"------task4---------"<<endl;
//    map<string , int > moreThan = counterTempMoreThan15InTown(m_sorted);
//    map<string , int > :: iterator it2;
//    for (it2 = moreThan.begin(); it2 != moreThan.end(); it2++)
//    {
//        cout << it2 -> first <<"--"<<it2 -> second <<endl;
//    }
//    cout <<"-----task5---------"<<endl;
//    multimap<int,int>countTemp = countTemp1(m_sorted);
//    multimap<int , int > :: iterator it3;
//    for (it3 = countTemp.begin(); it3 != countTemp.end(); it3++)
//    {
//        cout << it3 -> first <<"-"<<it3 -> second<<endl;
//    }
//    
//    
//    
//    return 0;
//}
