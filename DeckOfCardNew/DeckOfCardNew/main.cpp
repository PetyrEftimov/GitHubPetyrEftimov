//
//  main.cpp
//  Deck_of_card
//
//  Created by Pepi on 4/13/17.
//  Copyright � 2017 Pepi. All rights reserved.
//

#include <iostream>
#include "DeckOfCardNew.hpp"
using namespace std;

int main()
{
    
    DeckOfCards deckOfCards; // create DeckOfCards object
    
    deckOfCards.shuffle(); // shuffle the cards in the deck
    deckOfCards.deal();
    
    cout << "INFO FIRST PLAYER: " <<endl;
    bool has1Pair = deckOfCards.TpairPlayer1();
    cout <<"Has Player1 one Pair: " <<has1Pair<<endl;
    
    bool aa = deckOfCards.TpairPlayer1();
    cout <<"Has Player1 one Pair: " <<aa<<endl;
    
    bool has2Pairs = deckOfCards.twoPairPlayer1();
    cout << "Has Player1 two Pairs: "<<has2Pairs<<endl;
    
    bool hasThree = deckOfCards.threePlayer1();
    cout << "Has Player1 three same cards: "<<hasThree<<endl;
    
    bool hasFourPlayer1 = deckOfCards.hasFourPlayer1();
    cout <<"Has Player1 four same cards:"<< hasFourPlayer1<<endl;
    
    bool hasAStreightPlayer1 = deckOfCards.hasStraightPlayer1();
    cout << "Has Player1 Streight :" << hasAStreightPlayer1 << endl ;
    
    
    bool hasAFlushPlayer1 = deckOfCards.hasAFlushPlayer1();
    cout << "Has Player1 Flush " << hasAFlushPlayer1<<endl ;
    
    
    
    cout << "INFO SECOND PLAYER: " <<endl;
    cout << "INFO SECOND PLAYER: " <<endl;
    
    
    bool hasPairPlayer2 =  deckOfCards.TpairPlayer2();
    cout <<"Has Player2 one Pair: " <<hasPairPlayer2<<endl;
    
    
    
    bool has2PairsPlayer2 = deckOfCards.twoPairPlayer2();
    cout << "Has Player2 two Pairs: "<<has2PairsPlayer2<<endl;
    
    bool imali3kaPlayer2= deckOfCards.threePlayer2();
    cout << "Has Player2 three same cards: "<< imali3kaPlayer2 <<endl;
    
    
    bool hasFourPlayer2 = deckOfCards.hasFourPlayer2();
    cout <<"Has Player2 four same cards:"<< hasFourPlayer2<<endl;
    
    bool hasAStreightPlayer2 =deckOfCards.hasStraightPlayer2();
    cout<<" Has a Player2 Streight : " << hasAStreightPlayer2<< endl ;
    
    
    
    return 0; // indicates successful termination
    
} // end main


