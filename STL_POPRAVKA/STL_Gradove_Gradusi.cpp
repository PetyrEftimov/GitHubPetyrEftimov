////
////  STL_Gradove_Gradusi.cpp
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
//
//vector<string> findMostHotTowns(map<string , vector<int> > m_sorted)
//{
//    
//    map<string , vector<int> > :: iterator itr;
//    int tempMax = -100;
//    vector<string> cities ;
//    string city;
//    for (itr = m_sorted.begin(); itr != m_sorted.end(); itr++)
//    {
//        vector<int> v_teperatures = itr -> second;
//        //        cout << v_teperatures[v_teperatures.size() -1] << endl;
//        //        cout << v_teperatures[0]<< endl ;
//        //
//        int max = v_teperatures[v_teperatures.size()-1];
//        if (max > tempMax)
//        {
//            tempMax = max;
//            city = itr -> first;
//        }
//    }
//    
//    for (itr = m_sorted.begin(); itr != m_sorted.end(); itr++)
//    {
//        vector<int> v_temperature = itr -> second;
//        if (v_temperature[v_temperature.size()-1] == tempMax)
//        {
//            cities.push_back(itr -> first);
//        }
//    }
//    return cities;
//
//}
//map<string ,int > findMostHotTownsReturnMap(map<string , vector<int> > m_sorted)
//{
//    
//    map<string , vector<int> > :: iterator itr;
//    int tempMax = -100;
//    map<string , int> m_cities;
//    string city;
//    for (itr = m_sorted.begin(); itr != m_sorted.end(); itr++)
//    {
//        vector<int> v_teperatures = itr -> second;
//        //        cout << v_teperatures[v_teperatures.size() -1] << endl;
//        //        cout << v_teperatures[0]<< endl ;
//        //
//        int max = v_teperatures[v_teperatures.size()-1];
//        if (max > tempMax)
//        {
//            tempMax = max;
//            city = itr -> first;
//        }
//    }
//    
//    for (itr = m_sorted.begin(); itr != m_sorted.end(); itr++)
//    {
//        vector<int> v_temperature = itr -> second;
//        if (v_temperature[v_temperature.size()-1] == tempMax)
//        {
//            m_cities[itr ->first] = tempMax;
//        }
//    }
//    return m_cities;
//    
//}
//
//map <string , int> eachTownMinTemperature(map <string , vector<int> > m_sorted)
//{
//    map<string , int> m_cityMapMinTemp;
//    map<string , vector<int>> :: iterator itr;
//    for (itr = m_sorted.begin(); itr != m_sorted.end(); itr++)
//    {
//        vector<int> temp = itr -> second;
//        int minTemp = temp[0];
//        m_cityMapMinTemp[itr -> first] = minTemp;
//    }
//    return m_cityMapMinTemp;
//}
//
//
//
//map <string , int> eachTownMaxTemperature(map <string , vector<int> > m_sorted)
//{
//    map<string , int> m_cityMapMaxTemp;
//    map<string , vector<int>> :: iterator itr;
//    for (itr = m_sorted.begin(); itr != m_sorted.end(); itr++)
//    {
//        vector<int> temp = itr -> second;
//        int minTemp = temp[temp.size() - 1];
//        m_cityMapMaxTemp[itr -> first] = minTemp;
//    }
//    return m_cityMapMaxTemp;
//}
//
//
//map <string , int> eachTownAVGTemperature(map <string , vector<int> > m_sorted)
//{
//    double sum = 0 ;
//    int count = 0 ;
//    double average = 0 ;
//    map<string , int> m_avg;
//    map<string , vector<int>> :: iterator itr;
//    for (itr = m_sorted.begin(); itr != m_sorted.end(); itr++)
//    {
//        sum = 0 ;
//        vector<int> temp = itr -> second;
//        count = (int)temp.size();
//        for (int i = 0 ; i < temp .size(); i++)
//        {
//            sum += temp.at(i);
//        }
//        
//        average = sum / count;
//        
//        m_avg[itr -> first] = average;
//       
//    }
//    return m_avg;
//}
//
//
//
//multimap<string , int > fiveMostHotTemperatures(map <string , vector <int> > m_sorted)
//{
//    vector<int> allTemp;
//    map<string , vector<int>>::iterator itr;
//    for (itr = m_sorted.begin(); itr != m_sorted.end(); itr++)
//    {
//        vector <int> v_vector = itr -> second;
//        copy(v_vector.begin(),v_vector.end(),inserter(allTemp , allTemp.end()));
//    }
//    sort(allTemp.begin(),allTemp.begin() + allTemp.size());
//    vector<int> fiveHotTemp;
//    for (int i = (int)allTemp.size()- 1; i > (int)allTemp.size()-6; i--)
//    {
//        fiveHotTemp.push_back(allTemp[i]);
//    }
//    
//    multimap<string , int > result ;
//    for (int i = 0; i < fiveHotTemp.size(); i++)
//    {
//        int mTemp = fiveHotTemp[i];
//        for (map<string, vector<int> >::iterator itr6 = m_sorted.begin(); itr6 != m_sorted.end(); ++itr6)
//        {
//            vector<int> v_vec = itr6 -> second;
//            
//            if (find(v_vec.begin() , v_vec.end() , mTemp) != v_vec.end())
//            {
//                result.insert(pair<string , int >(itr6 -> first , mTemp));
//            }
//        }
//    }
//    
//    return result;
//    
//}
//
//// 4) колко пъти във всеки град е било > 15 : град -> бройка
//
////iterate over sortedMap
////counter
//// coutner ++ when itr->second
////za vseki key(town) prebroi kolko puti vyv vseki maluk vector ima chislo > 15
//
//
//map <string , int > counterTownTempGreaterThan15(map<string ,vector<int>> m_sorted)
//{
//    map<string, int > m_than15;
//    int counter ;
//    map <string , vector<int> > :: iterator itr ;
//    for (itr = m_sorted.begin(); itr != m_sorted.end(); itr++)
//    {
//        counter = 0 ;
//        vector<int> v_townTempVect = itr -> second;
//        for (size_t i = 0; i < v_townTempVect.size(); i++)
//        {
//            if (v_townTempVect.at(i) > 15)
//            {
//                counter++;
//                
//            }
//        }
//        m_than15[itr -> first] = counter;
//    }
//    
//    
//    
//    return m_than15;
//}
////5) колко дни е било <= 10, колко дни е било <=20,
//// колко дни е било над 20 : брой дни -> гранична температура
//
//multimap<int , int > countDaysBorderTemp(map<string ,vector<int>> m_sorted)
//{
//    multimap<int , int > mm_retuned;
//    vector<int> allTemp;
//    map<string , vector<int>>::iterator itr;
//    for (itr = m_sorted.begin(); itr != m_sorted.end(); itr++)
//    {
////puhame vsicko ot map negovot value v obsh vector
//        vector <int> v_vector = itr -> second;
//        copy(v_vector.begin(),v_vector.end(),inserter(allTemp , allTemp.end()));
//    }
////sortirame vectora
//    sort(allTemp.begin(),allTemp.begin() + allTemp.size());
//    int counter1 = 0 ;
//    int counter2 = 0;
//    int counter3 = 0;
//    
//    
//    for (size_t i = 0; i < allTemp.size(); i++)
//    {
//        if (allTemp.at(i) <= 10)
//        {
//            counter1++;
//        }
//        if (allTemp.at(i) <= 20)
//        {
//            counter2++;
//        }
//        if (allTemp.at(i) > 20)
//        {
//            counter3++;
//        }
//        
//    }
//    
//    mm_retuned.insert(pair<int,int> (counter1,10));
//    mm_retuned.insert(pair<int,int> (counter2,20));
//    mm_retuned.insert(pair<int,int> (counter3,21));
//    
//    
//    return mm_retuned;
//}
//
//// kolko pyti za vseki grad e bilo nad 15 gradusa;
//
//map<string , int > moreThan15InEachTown(map<string ,vector<int>> m_sorted)
//{
//    map<string , int > m_eachTownTempMoreThan15;
//    int counter ;
//    map<string , vector<int> >:: iterator it ;
//    for (it = m_sorted.begin(); it != m_sorted.end(); it++)
//    {
//        counter = 0 ;
//        vector<int>v_temp = it -> second;
//    
//       for (size_t i = 0 ; i < v_temp.size(); i++)
//        {
//            if (v_temp.at(i) > 15)
//            {
//                counter++;
//            }
//        }
//        m_eachTownTempMoreThan15[it -> first] = counter;
//    }
//    return m_eachTownTempMoreThan15;
//}
//
//
//
//
//
//
//int main()
//{
//    vector<int> v_sofiq = {12,34,17,23,27};
//    vector<int> v_plovdiv = {15,17,19,32,12};
//    vector<int> v_varna = {35,22,8,9,17};
//    
//  // create map whit key and vector for value ;
//    map<string , vector<int> > m_townnTemperature;
//    m_townnTemperature["sofia"] = v_sofiq;
//    m_townnTemperature["plovdiv"] = v_plovdiv;
//    m_townnTemperature["varna"] = v_varna;
//    
//    map <string , vector<int> > m_sorted;
//        sort(v_sofiq.begin(), v_sofiq.begin()+ v_sofiq.size());
//        sort(v_plovdiv.begin(), v_plovdiv.begin()+ v_plovdiv.size());
//        sort(v_varna.begin(), v_varna.begin()+ v_varna.size());
//        m_sorted["sofia"] = v_sofiq;
//        m_sorted["plovdiv"] = v_plovdiv;
//        m_sorted["varna"] = v_varna;
// 
//    vector<string>v_towns = findMostHotTowns(m_sorted);
//    for (int i = 0; i < v_towns.size(); i++) {
//        cout << v_towns.at(i)<<endl;
//    }
//    
//    map<string , int > m_towns = findMostHotTownsReturnMap(m_sorted);
//    map<string , int >::iterator it;
//    for (it = m_towns.begin(); it!= m_towns.end(); it++)
//    {
//        cout << it -> first << "-"<<it -> second << endl ;
//    }
//    
//    map <string , int> m_townsMinTemp = eachTownMinTemperature(m_sorted);
//    map<string , int>::iterator itr2;
//    for (itr2 = m_townsMinTemp.begin();itr2 != m_townsMinTemp.end(); itr2++)
//    {
//        cout << itr2 -> first << "-" << itr2 -> second << endl ;
//    }
//    
//    map <string , int> m_townsMaxTemp = eachTownMaxTemperature(m_sorted);
//    map<string , int>::iterator itr3;
//    for (itr3 = m_townsMaxTemp.begin();itr3 != m_townsMaxTemp.end(); itr3++)
//    {
//        cout << itr3 -> first << "-" << itr3 -> second << endl ;
//    }
//    cout <<"============="<<endl ;
//    map <string , int> m_avg = eachTownAVGTemperature(m_sorted);
//    map<string , int>::iterator itr4;
//    for (itr4 = m_avg.begin();itr4 != m_avg.end(); itr4++)
//    {
//        cout << itr4 -> first << "-" << itr4 -> second << endl ;
//    }
//    cout <<"----task3-----------"<<endl;
//    multimap<string , int > fiveHotTempInCountry = fiveMostHotTemperatures(m_sorted);
//    multimap<string , int > :: iterator itr5;
//    for (itr5 = fiveHotTempInCountry.begin(); itr5 != fiveHotTempInCountry.end(); itr5++)
//    {
//        cout << itr5 -> first <<"--"<<itr5 -> second << endl ;
//    }
//    cout <<"----task4---------"<<endl ;
//    
//    map<string , int > m_than15 = counterTownTempGreaterThan15(m_sorted);
//    map<string , int > :: iterator itr6 ;
//    for (itr6 = m_than15.begin(); itr6 != m_than15.end(); itr6++)
//    {
//        cout << itr6->first <<"--"<<itr6 -> second<<endl ;
//    }
//    
//    cout <<"-----task5---------"<<endl;
//    multimap<int , int > mm_temp = countDaysBorderTemp(m_sorted);
//    multimap<int , int > :: iterator itr7;
//    for (itr7 = mm_temp.begin(); itr7 != mm_temp.end(); itr7++)
//    {
//        cout << itr7 -> first <<"--"<<itr7 -> second << endl ;
//    }
//    
//    cout <<"------task4-again-----"<<endl;
//    map<string,int> m_moreThan16 = moreThan15InEachTown(m_sorted);
//    map<string , int >::iterator it4;
//    for (it4 = m_moreThan16.begin(); it4 != m_moreThan16.end(); it4++)
//    {
//        cout << it4 -> first <<"-"<<it4 -> second << endl ;
//    }
//    
//    
//    
//  
//    
//  
//    
//    
//    
//    
//    
//    
//    
//    return 0;
//}
