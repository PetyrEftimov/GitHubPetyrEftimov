//
//  Hall.cpp
//  Kontrolno_5.06
//
//  Created by Pepi on 6/5/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Hall.hpp"


Hall:: Hall()
{
    
}


MM_GameToRevenue Hall::LoadXml(string path, string path2, string path3 )
{
    //create multimap that  function will return finally
    MM_GameToRevenue multimap_GameToRevenue;
    
    //read XML 1 and push into Vector1 and in Total Vector
    pugi::xml_document doc;
    
    if (!doc.load_file(path.c_str()))
    {
        cerr << "no such file"<<endl;
    }
    
    
    
    pugi::xml_node temp = doc.child("HALL");
    for (pugi::xml_node it = temp.first_child(); it; it=it.next_sibling())
    {
        Game game1;
        game1.setName(it.child_value("NAME"));
        game1.setId(it.child("ID").text().as_int());
        game1.setLevel(it.child("LEVEL").text().as_int());
        game1.setStartCredit(it.child("STARTCREDIT").text().as_int());
        game1.setEndCredit(it.child("ENDCREDIT").text().as_int());
        
        //for each xml - push data into single vector
        //also push all data from all xmls in one total vector
        //finally 4 vectors willbe populated
        if( path == "hall1.xml"){
            v_hall1.push_back(game1);
            v_allHalls.push_back(game1);
        }
    }
    
    
    //read XML 2 and push into Vector2 and in Total Vector
    pugi::xml_document doc2;
    
    if (!doc2.load_file(path2.c_str()))
    {
        cerr << "no such file"<<endl;
    }
    
    
    pugi::xml_node temp2 = doc2.child("HALL");
    for (pugi::xml_node it = temp2.first_child(); it; it=it.next_sibling())
    {
        Game game1;
        game1.setName(it.child_value("NAME"));
        game1.setId(it.child("ID").text().as_int());
        game1.setLevel(it.child("LEVEL").text().as_int());
        game1.setStartCredit(it.child("STARTCREDIT").text().as_int());
        game1.setEndCredit(it.child("ENDCREDIT").text().as_int());
        
        //for each xml - push data into single vector
        //also push all data from all xmls in one total vector
        //finally 4 vectors willbe populated
        if( path2 == "hall2.xml"){
            v_hall2.push_back(game1);
            v_allHalls.push_back(game1);
        }
    }
    
    
    
    
    
    
    //read XML 3 and push into Vector3 and in Total Vector
    pugi::xml_document doc3;
    
    if (!doc3.load_file(path3.c_str()))
    {
        cerr << "no such file"<<endl;
    }
    
    
    pugi::xml_node temp3 = doc3.child("HALL");
    for (pugi::xml_node it = temp3.first_child(); it; it=it.next_sibling())
    {
        Game game1;
        game1.setName(it.child_value("NAME"));
        game1.setId(it.child("ID").text().as_int());
        game1.setLevel(it.child("LEVEL").text().as_int());
        game1.setStartCredit(it.child("STARTCREDIT").text().as_int());
        game1.setEndCredit(it.child("ENDCREDIT").text().as_int());
        
        //for each xml - push data into single vector
        //also push all data from all xmls in one total vector
        //finally 4 vectors willbe populated
        if( path3 == "hall3.xml"){
            v_hall3.push_back(game1);
            v_allHalls.push_back(game1);
        }
    }
    
    
    
    
    //check if 3 vectors are full with data
    //then iterate over totalVector and push all data into multimap
    //and function will return multimap with all info all 3 xml files
    if (v_hall1.size() > 0 && v_hall2.size() > 0 && v_hall3.size() > 0) {
        //iterate over vector and push into multimap
        for (int i = 0 ; i< v_allHalls.size(); i++)
        {
            multimap_GameToRevenue.insert(pair<string, int>(v_allHalls.at(i).getName(), v_allHalls.at(i).getStartCredit()- v_allHalls.at(i).getEndCredit() ));
        }
        
    }
    
    return multimap_GameToRevenue;
    
}
int Hall::dailyRevenueCasino()
{
    int sum = 0;
    for (int i = 0 ; i< v_allHalls.size(); i++ ){
        sum += v_allHalls.at(i).getStartCredit() -  v_allHalls.at(i).getEndCredit();
    }
    return sum;
}

MM_GameToRevenue Hall::searchByGameName(string name){
    
    MM_GameToRevenue mm_findedGameNamesWithLevel;
    
    for(int i = 0; i< v_allHalls.size(); i++){
        //if name is finded
        if(name == v_allHalls.at(i).getName()){
            //push into multimap finded info
            string gameName = v_allHalls.at(i).getName();
            int gameLevel = v_allHalls.at(i).getLevel();
            mm_findedGameNamesWithLevel.insert(pair<string,int>(gameName , gameLevel));
        }
    }
    
    return mm_findedGameNamesWithLevel;
}

MM_MostPlay Hall:: MostPlaingGame()
{
    MM_MostPlay mm_gameWiner;
    int counter = 0 ;
    string name ;
    for (size_t i = 0; i < v_allHalls.size(); i++) {
        if (v_allHalls.at(i).getName() == v_allHalls[0].getName())
        {
            
            name = v_allHalls.at(i).getName();
            if (v_allHalls.at(i).getName() == name)
            {
                counter++;
            }
            
        }
    }
    mm_gameWiner.insert(pair<string,int>(name,counter));
    return mm_gameWiner;
    
}





M_MostProfitableGameInCasino  Hall::mostProfitableGameInCasino(){
    
    M_MostProfitableGameInCasino m_MostProfitableGameInCasino;
    
    //del all from new map and populate it each time when call the function
    m_allInfoFromXMLsWithoutDuplicates.erase(m_allInfoFromXMLsWithoutDuplicates.begin(), m_allInfoFromXMLsWithoutDuplicates.end());
    for(int i = 0 ; i< v_allHalls.size(); i++){
        
        int gameProfit = v_allHalls.at(i).getStartCredit() -  v_allHalls.at(i).getEndCredit();
        string gameName = v_allHalls.at(i).getName() ;
        
        if (m_allInfoFromXMLsWithoutDuplicates.find(gameName) != m_allInfoFromXMLsWithoutDuplicates.end()){
            m_allInfoFromXMLsWithoutDuplicates[gameName] = m_allInfoFromXMLsWithoutDuplicates[gameName] + gameProfit ;
        }
        else
        {
            m_allInfoFromXMLsWithoutDuplicates[gameName] = gameProfit;
        }
    }
    
    for(map<string,int>::iterator it  = m_allInfoFromXMLsWithoutDuplicates.begin(); it!= m_allInfoFromXMLsWithoutDuplicates.end();it++){
        
        m_MostProfitableGameInCasino.insert(pair<int,string >(it->second,it ->first));
    }
    return m_MostProfitableGameInCasino;
}

M_MostProfitableGameInCasino Hall::mostFiveProfitableGamesInCasino(){
    M_MostProfitableGameInCasino m_MostProfitableGameInCasino;
    
    //del all from new map and populate it each time when call the function
    m_allInfoFromXMLsWithoutDuplicates.erase(m_allInfoFromXMLsWithoutDuplicates.begin(), m_allInfoFromXMLsWithoutDuplicates.end());
    for(int i = 0 ; i< v_allHalls.size(); i++){
        
        int gameProfit = v_allHalls.at(i).getStartCredit() -  v_allHalls.at(i).getEndCredit();
        string gameName = v_allHalls.at(i).getName() ;
        
        if (m_allInfoFromXMLsWithoutDuplicates.find(gameName) != m_allInfoFromXMLsWithoutDuplicates.end()){
            m_allInfoFromXMLsWithoutDuplicates[gameName] = m_allInfoFromXMLsWithoutDuplicates[gameName] + gameProfit ;
        }
        else
        {
            m_allInfoFromXMLsWithoutDuplicates[gameName] = gameProfit;
        }
    }
    
    int counter = 1;
    for(map<string,int>::iterator it  = m_allInfoFromXMLsWithoutDuplicates.begin(); it!= m_allInfoFromXMLsWithoutDuplicates.end();it++){
        
        if ( counter < 6 ){
            m_MostProfitableGameInCasino.insert(pair<int,string >(it->second,it ->first));
            counter ++;
        }
    }
    return m_MostProfitableGameInCasino;
}

vector <string> Hall:: findMostPlayedGameNtimes(vector<Game> games , int n )
{
    cout << games.size()<< endl;
    
    map <string , int > countsNumber;
    for (size_t i = 0 ; i < games.size(); i++)
    {
        string gameName = games.at(i).getName();
        if (countsNumber.find(gameName) == countsNumber.end())
        {
            countsNumber[gameName] = 1 ;
        }
        else
        {
            countsNumber[gameName]++;
        }
        
    }
    int maxCont = 0 ;
    map<string , int> :: iterator itr2;
    for (itr2 = countsNumber.begin(); itr2 != countsNumber.end(); itr2++)
    {
        int val = itr2 -> second ;
        if (val > maxCont)
        {
            maxCont = val;
        }
    }
    vector<string> mostPlaydGames;
    for (itr2 = countsNumber.begin(); itr2 != countsNumber.end(); itr2++)
    {
        int val = itr2 -> second;
        if (val == maxCont)
        {
            mostPlaydGames.push_back(itr2 -> first);
        }
    }
    vector<string> result ;
    for (size_t i = 0; i < n; i++)
    {
        result.push_back(mostPlaydGames.at(i));
    }
    return result;
}




Hall hl1;


