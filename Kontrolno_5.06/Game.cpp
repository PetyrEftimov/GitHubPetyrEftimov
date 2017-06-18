//
//  Game.cpp
//  Kontrolno_5.06
//
//  Created by Pepi on 6/5/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "Game.hpp"
Game:: Game()
{
}
Game::Game(string name, int id , int level , int startCredit , int endCredit )
{
    m_name = name;
    m_id = id;
    m_level = level;
    m_startCredit = startCredit;
    m_endCredit = endCredit;
    
}
Game:: ~Game()
{
    
}

void Game:: setName(string name)
{
    m_name = name;
}
void Game:: setId(int id)
{
    m_id = id;
}
void Game:: setLevel(int level)
{
    m_level = level;
}
void Game:: setStartCredit(int startCredit)
{
    m_startCredit = startCredit;
}
void Game:: setEndCredit(int endCredit)
{
    m_endCredit = endCredit;
}

string Game::  getName()
{
    return m_name;
}
int  Game::   getId()
{
    return m_id;
}
int  Game::   getLevel()
{
    return m_level;
}
int  Game::   getStartCredit()
{
    return m_startCredit;
}
int Game::    getEndCredit()
{
    return m_endCredit;
}


void Game:: GameInfo()
{
    cout << getName()<<"--"<<getId()<<"--"<<getLevel()<<"--"<<getStartCredit()<<"--"<<getEndCredit()<<endl;
}

