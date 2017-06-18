//
////  main.cpp
////  STL_POPRAVKA
////
////  Created by Pepi on 6/9/17.
////  Copyright © 2017 Pepi. All rights reserved.
////
//
//#include <iostream>
//#include <vector>
//#include <map>
//#include <algorithm>
//using namespace std;
//int countingValues(vector<int> ints , int value)
//{
//    int count = 0 ;
//    for (int i = 0 ; i < ints.size(); i++)
//    {
//        if (ints.at(i) == value )
//        {
//            count++;
//        }
//    }
//    return count;
// 
//}
//
//map<string , int> mapForGradesCount(vector<int> ints )
//{
//    int res2 = countingValues(ints, 2);
//    int res3 = countingValues(ints, 3);
//    int res4 = countingValues(ints, 4);
//    int res5 = countingValues(ints, 5);
//    int res6 = countingValues(ints, 6);
//    
//    // two - 1
//    // five - 2
//    map<string , int > gradesCount;
//    
//    //  gradesCount[key] == value;
//    
//    gradesCount["two"] = res2;
//    gradesCount["three"] = res3;
//    gradesCount["four"] = res4;
//    gradesCount["five"] = res5;
//    gradesCount["six"] = res6;
//    
//    map<string,int>:: iterator itr;
//    for (itr = gradesCount.begin(); itr != gradesCount.end(); itr++)
//    {
//     //   cout << itr -> first <<" "<<itr -> second<<endl ;
//    }
//    return gradesCount;
//
//    
//}
//
// map<int,int> mapForSalariesCount(vector<int> salaries)
//{
//    map<int,int>salariesCount;
//    
//    for (size_t i = 0 ; i < salaries.size(); i++)
//    {
//        int salary = salaries.at(i);
//        // salary / how many(count);
//        if (salariesCount.find(salary) == salariesCount.end())  // chek if salary is in map
//            // not in map
//        {
//            salariesCount[salary] = 1 ; // put in map : salary - (count) first meeting salary
//        }
//        else
//        {
//            // in map
//            salariesCount[salary]++ ;  // increase counter
//            
//        }
//    }
//    cout <<"------------------"<<endl ;
//    
//    map<int , int> :: iterator it;
//    
//    for (it = salariesCount.begin(); it != salariesCount.end(); it++) {
//       // cout << it -> first <<" " << it -> second<<endl;
//    }
//    
//    return salariesCount;
//}
//
//vector<int> findNMostFriquent(vector<int> ints , int n )
//{
//    map<int, int> countsNumber;                                 //key number , value - kolko pyti go ima v vec
//    for (size_t i = 0; i < ints.size(); i++)
//    {
//        int number = ints.at(i);
//        if (countsNumber.find(number)== countsNumber.end())
//        {
//            countsNumber[number]= 1;
//        }
//        else
//            
//        {
//            countsNumber[number]++;
//        }
//    }
//    
//        int maxCount = 0;               //max shte dyrji nai golqmoto value v mapa
//        map<int , int >::iterator it1;
//        for (it1=countsNumber.begin(); it1 != countsNumber.end(); it1 ++) {
//            int val = it1 -> second ;   // broikata
//            if (val > maxCount)
//            {                           // if za namirane na nai-golqmo chislo  v
//                maxCount = val;
//            }
//        }
//    
//    // slagame vyv vektora numbersMacount keys za koito imame nai golqmoto value(moje da sa nqkolko)
//        vector<int>numbersMaxCount;
//        for (it1 = countsNumber.begin(); it1 != countsNumber.end(); it1 ++)
//        {
//            int val = it1 -> second;
//            if (val == maxCount)
//            {
//                numbersMaxCount.push_back(it1 -> first);
//            }
//        }
//    // da pokaje tolkova chisla kolkoto sme podali na funkciqta s "n" //
//        vector<int>result;
//    
//        for (size_t i = 0; i < n; i++)
//        {
//            result.push_back(numbersMaxCount.at(i));
//        }
//    
//    
//        return result;
//    
//    }
//
//map<string,double> claculateAverage(map<string,vector<int> > v_StudentGredes )
//{
//    map<string , double> result;
//    map<string ,vector<int>>::iterator itr;
//    for (itr = v_StudentGredes.begin(); itr != v_StudentGredes.end(); itr++)
//    {
//        vector<int> v = itr -> second ;
//        double sum = 0;
//        for (int i = 0 ; i < v.size(); i++) {
//            sum = sum+v.at(i);
//        }
//        double avg = sum / v.size();
//        result[itr -> first] = avg;
//        
//    }
//    return result;
//}
//
//
//vector<string> v_studentToNextLevel(map<string,vector<int> > v_StudentGredes)
//{
//    vector<string>result;
//    map<string ,vector<int>>::iterator itr;
//    for (itr = v_StudentGredes.begin(); itr != v_StudentGredes.end(); itr++)
//    {
//        vector<int> v = itr -> second;
//        for (int i = 0 ; i < v.size(); i++)
//        {
//            if (v.at(i)>=5)
//            {
//                result.push_back(itr -> first);
//                break;
//            }
//            
//        }
//        
//    }
//    return result;
//}
//    
//
//
//
//
//
//
//
//
//    int main()
//{
//    
//    
//    
//// 3,4,3,4,6,6,5,5,2
//    vector<int> grades;
//    grades.push_back(3);
//    grades.push_back(4);
//    grades.push_back(3);
//    grades.push_back(4);
//    grades.push_back(6);
//    grades.push_back(6);
//    grades.push_back(5);
//    grades.push_back(5);
//    grades.push_back(2);
//    
//    map<string , int> mapGradesCount = mapForGradesCount(grades);
//    map<string , int> :: iterator it;
//    for (it = mapGradesCount.begin(); it != mapGradesCount.end(); it++)
//    {
//        cout << it -> first << " " <<it-> second << endl ;
//    }
//    
//    
//  //  2- zadacha koq zpalata kolko pyti sa q vzeli
//    
//  // 1299 4550 445 5667 888 4550 889
//
//    
//    vector<int> salaries = {1299,4550, 445, 5667,888,4550,1299};
//
//    map<int, int> mapSalCount = mapForSalariesCount(salaries);
//    
//    map<int , int >::iterator itr ;
//    for (itr= mapSalCount.begin(); itr != mapSalCount.end(); itr++)
//    {
//        cout << itr ->first << " " << itr -> second<<endl ;
//    }
//    
// // task 3
// // da se napishe funciq koqto namira N- te chisla s nai mnogo sreshtaniq  v daden vector;
// //23 56 77 23 44 55 77 23 5 8 9 0 77 9
//    vector<int> digits = {23,56,77,23,44,55,77,23,5,8,9,0,77,9,9};
//    cout <<"---------------------"<<endl;
//    vector <int>  digit1 = findNMostFriquent(digits, 3);
//    for (int i = 0; i < digit1.size(); i++)
//    {
//        cout << digit1.at(i)<<endl;
//    }
//    
//    // task 4
//    //studenti : po ime - ocenki
//     //             ivan - 4-5-6-2-4-6
//    //              dragan - 5-6-3-5-3-4
//    
//    map<string , vector<int> > mapStudentGredes;
//    vector<int> v_st1 ={2,4,3,3,2,4,3};
//    vector<int> v_st2 ={5,6,3,5,3,4,6};
//    vector<int> v_st3 ={3,3,3,3,3,3,3};
//    
//    mapStudentGredes["ivan"] = v_st1;
//    mapStudentGredes["dimo"] = v_st2;
//    mapStudentGredes["pepi"] = v_st3;
//    
//    map<string,double> avgStudenGrades = claculateAverage( mapStudentGredes );
//    map<string , double> :: iterator itr1;
//    for (itr1 = avgStudenGrades.begin(); itr1 != avgStudenGrades.end(); itr1++)
//    {
//        cout << "Student " << itr1 -> first << "has average of " << itr1 -> second<<endl;
//    }
//    
//    vector<string>nextLevel = v_studentToNextLevel( mapStudentGredes);
//    for (int i = 0 ; i < nextLevel.size(); i++) {
//        cout << "next level " << nextLevel.at(i)<< endl;
//    }
//    
//    
//    
//    return 0;
//}
