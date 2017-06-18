//
//  main.cpp
//  Kontrolno_13.06
//
//  Created by Pepi on 6/13/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
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
using namespace std;
map<int,int> countInts(vector<int> ints){
    map<int, int> countedInts;
    for(int i=0; i<ints.size();i++)
    {
        int cnt = ints[i];
        if(countedInts.find(cnt) == countedInts.end())
        {
            countedInts[cnt]=1;
        }else{
            countedInts[cnt]=countedInts[cnt]+1;
        }
    }
    
    return countedInts;
}

vector<int> findByKey(map<string, vector<int> > keyValues, string key)
{
    vector<int> findVectorByKey;
    map<string, vector<int> >::iterator itr;
    for(itr = keyValues.begin() ;  itr!= keyValues.end(); itr++)
    {
        if(itr-> first == key)
        {
            findVectorByKey = itr ->second;
        }
    }
    
    return findVectorByKey;
}
//да се напише функция която връща мап със сортираните вектори
map<string, vector<int> > sortSecond( map<string, vector<int> > keyValues){
    
    map<string, vector<int> > mapWithSortVectors;
    map<string, vector<int> >::iterator itr;
    for(itr = keyValues.begin(); itr != keyValues.end(); itr++)
    {
        vector<int> sortVect = itr->second;
        sort(sortVect.begin(), sortVect.begin() + sortVect.size());
        mapWithSortVectors[itr->first]=sortVect;
    }
    return mapWithSortVectors;
}

//да се напише функция която връща мап, за който вторият елемент са всички числа от вектора , които са по-големи от К
map<string, vector<int> > greaterK( map<string, vector<int> > keyValues, int K){
    map<string, vector<int> > m_greaterThanK;
    map<string, vector<int> >::iterator itr;
    for(itr = keyValues.begin(); itr != keyValues.end(); itr++)
    {
        vector<int> v_withGreaterThanK;
        vector<int> tempVector = itr -> second;
        for(int i = 0 ; i< tempVector.size(); i++)
        {
            if(tempVector.at(i) > K)
            {
                v_withGreaterThanK.push_back(tempVector.at(i));
            }
        }
        
        m_greaterThanK[itr->first] = v_withGreaterThanK;
        
    }
    
    return m_greaterThanK;
}

//да се напише функция , която връща 3те ключа на елемента, за който сумата от числата във вектора е най-голяма
vector<string> max3( map<string, vector<int> > keyValues){
    vector<string> v_max3;
    
    map<int, string, less<int> > m_helpTempMap;
    
    map<string, vector<int> >::iterator itr;
    for(itr = keyValues.begin(); itr != keyValues.end(); itr++)
    {
        int sum = 0;
        vector<int> v_tempCalcSum = itr -> second;
        for(int i = 0 ; i< v_tempCalcSum.size(); i++)
        {
            sum+=v_tempCalcSum.at(i);
        }
        //in temp map will put[key], [sum for each vector]
        m_helpTempMap[sum] = itr->first;
    }
    
    //traverse map from end to beginning and get only last 3 elements and put in vector
    //my map is sorted
    map<int, string, greater<int> >::reverse_iterator itr_helpMap;
    int counter = 1;
    for(itr_helpMap = m_helpTempMap.rbegin(); itr_helpMap != m_helpTempMap.rend(); itr_helpMap++)
    {
        if(counter < 4)
        {
            v_max3.push_back(itr_helpMap->second);
        }
        counter++;
    }
    return v_max3;
    
    
}


int main()
{
    cout<<"----task2-----"<<endl;
    int ints_arr[] = {1, 2, 2, 1, 5, 4, 5};
    vector<int> ints(ints_arr, ints_arr+ 7);
    
    map<int, int> countedIntegers  = countInts(ints);
    map<int, int>::iterator it;
    for(it = countedIntegers .begin(); it != countedIntegers .end(); ++it){
        cout << "Number:" <<   it->first << " count: " << it->second << endl;
    }
    
    cout <<"----task3------"<<endl ;
    
    int arr1[] = {14, 25, 16, 42, 54, 36};
    int arr2[] = {35, 16, 23, 55, 33, 44};
    vector<int> vect1(arr1, arr1+6);
    vector<int> vect2(arr2, arr2+6);
    map<string, vector<int> > m_keyValues;
    m_keyValues["key1"] = vect1;
    m_keyValues["key2"] = vect2;
    
    vector<int> v_resut = findByKey(m_keyValues, "key1");
    cout << "Your searched for 'key1' and below is returned its vector values."<<endl;
    for(int i = 0 ; i< v_resut.size();i++)
    {
        cout<< v_resut.at(i)<<","<<endl;
    }
    
    cout <<"----task4-----"<<endl;
    int a1[] = {14, 25, 16, 42, 54, 36};
    int a2[] = {35, 16, 23, 55, 33, 44};
    vector<int> v1(a1, a1+6);
    vector<int> v2(a2, a2+6);
    map<string, vector<int> > m_keyValuesNotSorted;
    m_keyValuesNotSorted["str1"] = v1;
    m_keyValuesNotSorted["str2"] = v2;
    
    map<string, vector<int> > map_withSortedVectors = sortSecond(m_keyValuesNotSorted);
    map<string, vector<int> >::iterator itr;
    for(itr = map_withSortedVectors.begin(); itr != map_withSortedVectors.end(); itr++)
    {
        cout <<"Key: "<< itr->first<<endl;
        vector<int> sortVect = itr->second;
        cout << "Values in sorted vector are:"<<endl;
        for(int i = 0 ; i< sortVect.size(); i++)
        {
            cout <<sortVect.at(i)<<" "<<endl;
        }
    }
    
    cout <<"---task5-------"<<endl;
    int array1[] = {14, 25, 16, 42, 54, 36};
    int array2[] = {35, 16, 23, 55, 33, 44};
    vector<int> vector1(array1, array1+6);
    vector<int> vector2(array2, array2+6);
    map<string, vector<int> > mapWithVectorValues;
    mapWithVectorValues["values1"] = vector1;
    mapWithVectorValues["values2"] = vector2;
    
    int K = 40;
    map<string, vector<int> > m_withVectorValuesGreaterThanK = greaterK(mapWithVectorValues,K);
    map<string, vector<int> >::iterator itr1;
    for(itr1 = m_withVectorValuesGreaterThanK.begin(); itr1 != m_withVectorValuesGreaterThanK.end(); itr1++ )
    {
        
        cout <<endl<< "Vector values that should be greater than "<< K << " are: "<<endl;
        vector<int> greaterThanK = itr1->second;
        for(int i = 0 ; i< greaterThanK.size(); i++)
        {
            cout << greaterThanK.at(i) << " ";
        }
    }
    
    cout <<"-----task6------"<<endl;
    int ar1[] = {14, 25, 16, 42, 54, 36};
    int ar2[] = {35, 316, 323, 355, 333, 244};
    int ar3[] = {5, 1, 2, 5, 3, 4};
    int ar4[] = {135, 116, 123, 155, 133, 144};
    
    vector<int> v_1(ar1, ar1+6);
    vector<int> v_2(ar2, ar2+6);
    vector<int> v_3(ar3, ar3+6);
    vector<int> v_4(ar4, ar4+6);
    
    map<string, vector<int> > map_WithVectors;
    map_WithVectors["key1"] = v_1;
    map_WithVectors["key2"] = v_2;
    map_WithVectors["key3"] = v_3;
    map_WithVectors["key4"] = v_4;
    
    vector<string> resultMax3Keys = max3(map_WithVectors);
    cout << "3 keys from map, which vectors has the maximum sum are: "<< endl;
    for(int i = 0 ; i< resultMax3Keys.size(); i++)
    {
        cout <<resultMax3Keys.at(i)<<" "<<endl;
    }
    
    
    

    
    return 0;
}
