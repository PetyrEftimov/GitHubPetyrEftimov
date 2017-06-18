//
//  Game.hpp
//  Class_Game
//
//  Created by Pepi on 4/6/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp
#include <iostream>

#include <stdio.h>

#endif /* Game_hpp */
using namespace std;


class Game {
public:
    
    Game();
    
    Game(string , string , string ,string , int, string  );
    
    void setAnswer1(string);
    void setAnswer2(string);
    void setAnswer3(string);
    void setAnswer4(string);
    void setCorrectAnswer(int);
    void setQuestion(string);
    
    
    
    string getAnswer1();
    string getAnswer2();
    string getAnswer3();
    string getAnswer4();
    int getCorrectAnswer();
    string getQuestion();
    
    void showResult();
    
private:
    
    string answer1;
    string answer2;
    string answer3;
    string answer4;
    int correctAnswer;
    string question;
    
    
    
    
    
    
    
    
    
    
    
};
