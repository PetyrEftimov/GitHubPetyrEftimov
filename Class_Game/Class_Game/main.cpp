//
//  main.cpp
//  Class_Game
//
//  Created by Pepi on 4/6/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include "Game.hpp"
using namespace std;

int main(){
    
   // Game gamer1("2","8","6","10", 3 , " ");
    
  //  gamer1.showResult();
    
    
    int answer ;
    int correctAnswers=0;
    int wrongAnswers=0;
  /*
    Game gamers( "1.Sofia", "2.Burgas", "3.Varna", "4.Plovdiv", 1, "Koq e stolicata na BG:" ) ;
    
    
        cout << "Please, choose the correct answer";
        cout << gamers.getQuestion()<<endl;
        cout << gamers.getAnswer1()<<endl;
        cout << gamers.getAnswer2()<<endl;
        cout << gamers.getAnswer3()<<endl;
        cout << gamers.getAnswer4()<<endl;
        cin >> answer;
        if(answer == gamers.getCorrectAnswer()){
            correctAnswers++;
        }
        else{
            wrongAnswers++;
        }
        
    */
    
    Game gamers[15];
    
 //below is code for the first question
    gamers[0] = { "1.Sofia", "2.Burgas", "3.Varna", "4.Plovdiv", 1, "Koq e stolicata na BG:" };
    
    cout << "Please, choose the correct answer"<< endl;
    cout << gamers[0].getQuestion()<<endl;
    cout << gamers[0].getAnswer1()<<endl;
    cout << gamers[0].getAnswer2()<<endl;
    cout << gamers[0].getAnswer3()<<endl;
    cout << gamers[0].getAnswer4()<<endl;
    cin >> answer;
   
    if(answer == gamers[0].getCorrectAnswer()){
        correctAnswers++;
    }
    else{
        wrongAnswers++;
    }
    
    
    
    
  //below is code for the second question
    gamers[1] = { "1.Moskva", "2.Germaniq", "3.Italiq", "4.Romaniq", 1, "Koq e stolicata na Russia:" };
    
    cout << "Please, choose the correct answer"<< endl;
    cout << gamers[1].getQuestion()<<endl;
    cout << gamers[1].getAnswer1()<<endl;
    cout << gamers[1].getAnswer2()<<endl;
    cout << gamers[1].getAnswer3()<<endl;
    cout << gamers[1].getAnswer4()<<endl;
    cin >> answer;
        
        
    if(answer == gamers[1].getCorrectAnswer()){
        correctAnswers++;
    }
    else{
        wrongAnswers++;
    }
    
    
//below is code for the third question
    gamers[2] = { "1.Viena", "2.Munchen", "3.Plovdiv", "4.Rim", 4, "Koq e solicata na Italiq:" };
    
    cout << "Please, choose the correct answer"<< endl;
    cout << gamers[2].getQuestion()<<endl;
    cout << gamers[2].getAnswer1()<<endl;
    cout << gamers[2].getAnswer2()<<endl;
    cout << gamers[2].getAnswer3()<<endl;
    cout << gamers[2].getAnswer4()<<endl;
    cin >> answer;
    
    
    if(answer == gamers[2].getCorrectAnswer()){
        correctAnswers++;
    }
    else{
        wrongAnswers++;
    }
    
  //she trqbva da razpishesh i drugite vuprosi do 15
    //gledai v gornite primeri indexa kak se dviji
    
    
    
    
   
    
  //tezi couti se izvejdat samo nakraq
    cout<<"users correct answers are:" << correctAnswers<< endl;
    
    cout<<"users wrongß answers are:" << wrongAnswers<< endl;
    
    
    return 0;
}
