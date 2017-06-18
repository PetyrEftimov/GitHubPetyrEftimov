//
//  STL_TEST.cpp
//  STL_POPRAVKA
//
//  Created by Pepi on 6/10/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int CountingValues(vector<int> ints , int value) // kolko pyti se sreshta podadenoto chislo v vectora //
{
    int count = 0 ;
    for (size_t i = 0 ; i < ints.size(); i++)
    {
        if (ints.at(i) == value)
        {
            count ++;
        }
    }
    
    return count;
}
map<string, int>  mapForGradeCount(vector<int> ints)
{
    int result2 = CountingValues(ints, 2); // promenliva koqto priema funciqta koqto izchislqva
    int result3 = CountingValues(ints, 3); // kolko pyti se sreshta vyv vectora podadenata ocenka
    int result4 = CountingValues(ints, 4);
    int result5 = CountingValues(ints, 5);
    int result6 = CountingValues(ints, 6);
    
    map<string , int> gradesCount;
    gradesCount["two"]   = result2;
    gradesCount["three"] = result3;
    gradesCount["four"]  = result4;
    gradesCount["five"]  = result5;
    gradesCount["six"]   = result6;
    
return gradesCount;
    
}

map <int , int > mapSalariesCount(vector<int> salari)
{
    map <int , int > salariesCount;
    for (size_t i = 0 ; i < salari.size(); i++)
    {
        int  salary = salari.at(i);
        if (salariesCount.find(salary) == salariesCount.end()) // check salary is in map
        {
            salariesCount[salary] = 1 ; // not in map
        }
        else
        {
            salariesCount[salary]++; // increasa the count
        }
    }
    return salariesCount;
}

map<int , int > gradesCount(vector<int>grades)
{
    map<int , int > CountedGrades;
    for (size_t i = 0 ; i < grades.size(); i++)
    {
        int count = grades.at(i);
        if (CountedGrades.find(count) == CountedGrades.end() )
        {
            CountedGrades[count]=1;
        }
        else
        {
            CountedGrades[count]++;
        }
    }
    return CountedGrades;
}

vector <int> findMostFriquentNtimes(vector<int> ints , int n )
{
    map <int , int > countsNumber;
    for (size_t i = 0 ; i < ints.size(); i++)
    {
        int number = ints.at(i);
        if (countsNumber.find(number) == countsNumber.end())
        {
            countsNumber[number] = 1 ;
        }
        else
        {
            countsNumber[number]++;
        }
        
    }
    int maxCont = 0 ;
    map<int , int> :: iterator itr2;
    for (itr2 = countsNumber.begin(); itr2 != countsNumber.end(); itr2++)
    {
        int val = itr2 -> second ;
        if (val > maxCont)
        {
            maxCont = val;
        }
    }
    vector<int> numersMaxCount;
    for (itr2 = countsNumber.begin(); itr2 != countsNumber.end(); itr2++)
    {
        int val = itr2 -> second;
        if (val == maxCont)
        {
            numersMaxCount.push_back(itr2 -> first);
        }
    }
    vector<int> result ;
    for (size_t i = 0; i < n; i++)
    {
        result.push_back(numersMaxCount.at(i));
    }
    return result;
}

map <string , double> calculateAverage(map <string , vector<int> > m_studenGrades)
{
    map<string , double> result;
    map<string , vector<int> > :: iterator itr3;
    for (itr3 = m_studenGrades.begin(); itr3 != m_studenGrades.end(); itr3++)
    {
        vector<int> v = itr3 -> second;
        double sum = 0 ;
        for (int i = 0 ; i < v.size(); i++)
        {
            sum += v.at(i);
        }
        double avg = sum / v.size();
        result[itr3 -> first] = avg;
    }
    return result;
}


vector<string> v_studentToNexLevel (map<string , vector<int> > m_studentGrades)
{
    vector<string> result;
    map<string , vector<int> > :: iterator itr5 ;
    for (itr5 = m_studentGrades.begin() ; itr5 != m_studentGrades.end(); itr5 ++)
    {
        vector<int> v = itr5 -> second;
        for (int i = 0 ; i < v.size(); i++)
        {
            if (v.at(i) >= 5 )
            {
                result.push_back(itr5 -> first);
                break;
            }
        }
    }
    return result;
}

















int main()
{
    // kolko pyti se sreshta vsqka ocenka vyv vectora
    vector<int> grades = {3,5,6,4,5,6,3,3,5,5,5,2,6,6,4,5,5,6,6,5};
    map<string , int> mapGradesCount = mapForGradeCount(grades);
    map<string , int> :: iterator it ;
    for (it = mapGradesCount.begin(); it != mapGradesCount.end(); it++)
    {
        cout << it -> first <<"-"<<it -> second<<endl;
    }
 ///////////////////////////////////////////////////////////////////////////////////////////////////////
 // koq zaplata  kolko pyti sa  vzeli
    cout <<"======task========="<<endl;
    vector<int> salaries = {1234,3456,1234,5678,6544,1234,3456,5678,6789,6789,4567};
    map<int , int > salaryCounts = mapSalariesCount(salaries);
    map<int , int >::iterator itr;
    for (itr =  salaryCounts.begin(); itr != salaryCounts.end(); itr++)
    {
        cout << itr -> first <<"--"<< itr -> second<<endl ;
    }
    cout<<"-----task-----------"<<endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////
// koq ocenka kolko pyti se sreshta bez stringove samo s int ;
    map<int, int> countGrades = gradesCount(grades);
    map<int , int>:: iterator itr1;
    for (itr1 = countGrades.begin(); itr1 != countGrades.end(); itr1++)
    {
        cout << itr1 ->first <<"--"<<itr1 -> second<<endl;
    }
/////////////////////////////////////////////////////////////////////////////////////////////////////////
    // task 3
    cout << "=====task=N======="<<endl;
    // da se napishe funciq koqto namira N- te chisla s nai mnogo sreshtaniq  v daden vector;
    vector<int> v_digit = {1234,1234,2345,2345,5678,5678,4567,32435,43445,54444};
    vector<int> results = findMostFriquentNtimes(v_digit, 3);
    for (size_t i = 0 ; i < results.size(); i++) {
        cout << results.at(i)<<endl;
    }
////////////////////////////////////////////////////////////////////////////////////////////////////////
// namirane na sredno aritmetichno za vseki student ;
    cout << "---task--------"<<endl;
    map <string , vector<int> > m_mapStudentGrades ;
      vector<int> st1 = {3,3,3,3,3,4,3,3,3,3,3,3,3,3,3,3};
      vector<int> st2 = {5,6,6,5,5,3,3,3,4,3,5,6};
      vector<int> st3 = {4,4,4,2,2,2,4,4,4,3,4,4};
        m_mapStudentGrades["pepi"] = st1;
        m_mapStudentGrades["viki"] = st2;
        m_mapStudentGrades["muto"] = st3;
    map <string , double> Average = calculateAverage(m_mapStudentGrades);
    map <string , double> :: iterator itr4;
    for (itr4 = Average.begin(); itr4 != Average.end(); itr4++)
    {
        cout << itr4 -> first << "--" << itr4 -> second << endl ;
    }
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//koi student ima ocenka v ocenkite si nad 5
    cout <<  "------last task-------"<<endl ;
    vector<string> v_nextLevel = v_studentToNexLevel(m_mapStudentGrades);
    for (int i = 0 ; i < v_nextLevel.size(); i++)
    {
        cout << v_nextLevel.at(i)<<endl;
        
    }
    
    
    
    return 0;
};

