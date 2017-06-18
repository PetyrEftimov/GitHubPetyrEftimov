//
//  main.cpp
//  Deck_of_card
//
//  Created by Pepi on 4/13/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <iostream>
#include "card.hpp"
using namespace std;

int main()
{
    
    DeckOfCards deckOfCards; // create DeckOfCards object
    
    deckOfCards.shuffle(); // shuffle the cards in the deck
    deckOfCards.deal();
    
    
    bool has1Pair = deckOfCards.Tpair();
    cout << has1Pair<<endl;
    bool has2Pairs = deckOfCards.twoPair();
    cout << has2Pairs<<endl;
 //   bool hasThree = deckOfCards.three();
 //   cout << hasThree <<endl;
   // cout << "Deal Player1: "<< endl;
   // deckOfCards.deal(); // deal the cards in the deck
    
    
    
   // cout << "Deal Player2: "<<endl;
   // deckOfCards2.deal();
    

    
    // cout<< endl<<endl;
   // deckOfCards2.deal();
    
   // deckOfCards.shuffleSecondPlayer();
    
//   deckOfCards.dealSecondPlayer();
    
    // deckOfCards.three();
   
 //  bool isPair = deckOfCards.Tpair();
 //  cout << isPair;
    
 //   bool isPair2 = deckOfCards2.Tpair();
 //   cout << isPair2;
    
    
    
  //  cout << isPair;
  //  bool isTwoPair = deckOfCards.twoPair();
  //  cout << isTwoPair;
  //  deckOfCards.three();
    
  //  deckOfCards.twoOfSuit();
    
   // bool isThreeOfKind = deckOfCards.three();
   // cout << isThreeOfKind;
   
    return 0; // indicates successful termination
} // end main


