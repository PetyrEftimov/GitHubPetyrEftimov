//
//  main.cpp
//  Kontrolno_5.06
//
//  Created by Pepi on 6/5/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include "Hall.hpp"
#include "Game.hpp"
using namespace std;

//int main()
//{
//
//    cout <<"----task 1----------"<<endl;
//    MM_GameToRevenue mm_gameToRevenue;
//    mm_gameToRevenue = hl1.LoadXml("hall1.xml","hall2.xml", "hall3.xml" );
//
//    for(multimap<string, int>::iterator itr = mm_gameToRevenue.begin(); itr != mm_gameToRevenue.end(); ++itr)
//    {
//        cout << "Game Name : " << itr -> first << ", Revenue: "<< itr -> second<<endl;
//
//    }
//
//    cout <<"--------task2------------"<<endl;
//    int dailYRevenueCasino;
//    dailYRevenueCasino = hl1.dailyRevenueCasino();
//    cout <<"Total Casino Daily Revenue:"<< dailYRevenueCasino<<endl;
//
//    cout <<"-------task search-----------------"<<endl;
//    MM_GameToRevenue mm_findedGameNamesWithLevel;
//    mm_findedGameNamesWithLevel = hl1.searchByGameName("POKER");
//			 for(multimap<string, int>::iterator itr = mm_findedGameNamesWithLevel.begin(); itr != mm_findedGameNamesWithLevel.end(); ++itr)
//             {
//                 cout << "Searched info is: Name/Level: "<< itr -> first << "-" << itr-> second << endl;
//             }
//    cout <<"-----------task----"<<endl;
//
//    M_MostProfitableGameInCasino m_MostProfitableGameInCasino;
//			 m_MostProfitableGameInCasino = hl1.mostProfitableGameInCasino();
//			 cout << "Most Profitable game in Casino:" << m_MostProfitableGameInCasino.begin() -> second << " - " << m_MostProfitableGameInCasino.begin() -> first;
//
//    cout <<"------tasks----"<<endl;
//
//    MM_MostPlay  mm_MostPlayngGame;
//    mm_MostPlayngGame = hl1.MostPlaingGame();
//    for (multimap<string , int>::iterator itr = mm_MostPlayngGame.begin(); itr !=
//         mm_MostPlayngGame.end(); itr++) {
//        cout << "Most plying game is : "<<mm_MostPlayngGame.begin()->first <<":"<<mm_MostPlayngGame.begin()->second<<endl;
//    }
//
//    cout <<"-------task-------"<<endl;
//    M_MostProfitableGameInCasino m_MostProfitableFiveGamesInCasino;
//			 m_MostProfitableFiveGamesInCasino = hl1.mostFiveProfitableGamesInCasino();
//			 cout << "Top five most profitable games in Casino"<<endl;
//			 for(map<int,string>::iterator itr = m_MostProfitableFiveGamesInCasino.begin(); itr!= m_MostProfitableFiveGamesInCasino.end(); itr++)
//             {
//                 cout << itr -> second << " - " << itr->first<<endl;
//             }
//
//
//    return 0;
//}

int main()
{
    
    cout << "MENU"<<endl;
    cout << "Please do not choose 1 more than once."<<endl;
    
    cout << "Make you choice, starting from 1 !!! :"<<endl;
    
    cout <<endl<< "Make you choice:"<<endl;
    cout << "1 - Initialize XMLs and show daily revenue per Halls"<<endl;
    cout << "2 - Daily revenue of Casino"<<endl;
    cout << "3 - Most Played Game in Casino"<<endl;
    cout << "4 - Search game by name" << endl;
    cout << "5 - Most profitable game in Casino "<< endl;
    cout << "6 - Top five profitable games in Casino" << endl;
    cout << "-1 - Exit"<< endl;
    int choice;
    cin >> choice;
    
    while(choice != -1)
    {
        if(choice == 1)
        {
            //start task 1
            cout <<"----task 1----------"<<endl;
            MM_GameToRevenue mm_gameToRevenue;
            mm_gameToRevenue = hl1.LoadXml("hall1.xml","hall2.xml", "hall3.xml" );
            
            for(multimap<string, int>::iterator itr = mm_gameToRevenue.begin(); itr != mm_gameToRevenue.end(); ++itr)
            {
                cout << "Game Name : " << itr -> first << ", Revenue: "<< itr -> second<<endl;
                
            }
            //end task 1
        }
        if(choice == 2)
        {
            //start task 2
            int dailYRevenueCasino;
            dailYRevenueCasino = hl1.dailyRevenueCasino();
            cout <<"Total Casino Daily Revenue:"<< dailYRevenueCasino;
            //end task 2
        }
        if(choice == 3)
        {
            MM_MostPlay  mm_MostPlayngGame;
            mm_MostPlayngGame = hl1.MostPlaingGame();
            for (multimap<string , int>::iterator itr = mm_MostPlayngGame.begin(); itr !=
                 mm_MostPlayngGame.end(); itr++) {
                cout << "Most plying game is : "<<mm_MostPlayngGame.begin()->first <<":"<<mm_MostPlayngGame.begin()->second<<endl;
            }
        }
        
        if(choice == 4)
        {
            // start function search by name
            MM_GameToRevenue mm_findedGameNamesWithLevel;
            mm_findedGameNamesWithLevel = hl1.searchByGameName("POKER");
            for(multimap<string, int>::iterator itr = mm_findedGameNamesWithLevel.begin(); itr != mm_findedGameNamesWithLevel.end(); ++itr)
            {
                cout << "Searched info is: Name/Level: "<< itr -> first << "-" << itr-> second << endl;
            }
            // end function search by name
            
        }
        
        
        if(choice == 5)
        {
            // start task most profitable game in casino
            M_MostProfitableGameInCasino m_MostProfitableGameInCasino;
            m_MostProfitableGameInCasino = hl1.mostProfitableGameInCasino();
            cout << "Most Profitable game in Casino:" << m_MostProfitableGameInCasino.begin() -> second << " - " << m_MostProfitableGameInCasino.begin() -> first;
            // end task most profitable game in casino
            
        }
        if(choice == 6)
        {
            //start task top five most profitable games
            M_MostProfitableGameInCasino m_MostProfitableFiveGamesInCasino;
            m_MostProfitableFiveGamesInCasino = hl1.mostFiveProfitableGamesInCasino();
            cout << "Top five most profitable games in Casino"<<endl;
            for(map<int,string>::iterator itr = m_MostProfitableFiveGamesInCasino.begin(); itr!= m_MostProfitableFiveGamesInCasino.end(); itr++)
            {
                cout << itr -> second << " - " << itr->first<<endl;
            }
            //end task top five most profitable games
        }
        if (choice == 7)
        {
            vector<string> v_mostPlaydGame;
            
            cout<< "cnt:" << v_allHalls.size();
            v_mostPlaydGame = hl1.findMostPlayedGameNtimes(v_allHalls, 1);
            cout << v_mostPlaydGame[0];
        }
        if(choice == -1)
        {
            exit(1);
        }
        
        cout <<endl<< "Make you choice:"<<endl;
        cout << "1 - Initialize XMLs and show daily revenue per Halls"<<endl;
        cout << "2 - Daily revenue of Casino"<<endl;
        cout << "3 - Most Played Game in Casino"<<endl;
        cout << "4 - Search game by name" << endl;
        cout << "5 - Most profitable game in Casino "<< endl;
        cout << "6 - Top five profitable games in Casino" << endl;
        cout << "7 - Most Playd Games N times " << endl ;
        cout << "-1 - Exit"<< endl;
        
        cin>>choice;
        
        
    }
    return 0;
    
}
