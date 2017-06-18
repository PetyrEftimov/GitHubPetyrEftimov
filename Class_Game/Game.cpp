//
//  Game.cpp
//  Class_Game
//
//  Created by Pepi on 4/6/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
#include <iostream>
#include "Game.hpp"
using namespace std;


Game::Game(){}

Game::Game(string answer1,string answer2,string answer3,string answer4 ,int correctAnswer , string question){
    
    
  //  if (correctAnswer == 1) {
       this -> answer1 = answer1;
  //  }
    this -> answer2 = answer2;
    this -> answer3 = answer3;
    this -> answer4 = answer4;
    this -> correctAnswer = correctAnswer;
    this -> question = question;
}


void Game::setAnswer1(string answer1){
    this -> answer1 = answer1;
}

void Game::setAnswer2(string answer2){
    this -> answer2 = answer2;
}

void Game::setAnswer3(string answer3){
    this -> answer3 = answer3;
}
void Game::setAnswer4(string answer4){
    this -> answer4 = answer4;
}
void Game::setCorrectAnswer(int correctAnswer){
    this -> correctAnswer = correctAnswer;
}
void Game::setQuestion(string question){
    this -> question = question;
}



string Game::getAnswer1(){
    return this-> answer1;
    }

    
    

string Game::getAnswer2(){
    return this-> answer2;
}

string Game::getAnswer3(){
    return this-> answer3;
}

string Game::getAnswer4(){
    return this -> answer4;
}

int Game::getCorrectAnswer(){
    return this -> correctAnswer;
}
string Game::getQuestion(){
    return this -> question;
}




void Game::showResult(){
    
    int sum = 0 ;
    
    string Array[8]={"1+1","2+2","3+3","4+4","5+5","6+6","7+7","8+8"};
    
 
    cout << Array[0] << " / " <<Array[1];
    cout << "Enter answrd 1 or 2 " << endl ;
   
    cin >> correctAnswer;
    if (correctAnswer == 1) {
        sum++;
    }
    
    cout << Array[2] << Array[3] ;
    
    cin >> correctAnswer;
    if (correctAnswer == 1) {
        sum++;
    }
    
    cout << Array[4]<<Array[5]<<endl;
    
    cin >> correctAnswer;
    if (correctAnswer == 2) {
        sum++;
    }
    cout<<Array[6] << Array[7]<< endl ;
    cin >> correctAnswer ;
    if (correctAnswer == 2) {
        sum++;
    }
    cout << "corect " << sum ;
    
   }

