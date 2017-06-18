//
//  card.hpp
//  Deck_of_card
//
//  Created by Pepi on 4/13/17.
//  Copyright � 2017 Pepi. All rights reserved.
//

#ifndef card_hpp
#define card_hpp

#include <stdio.h>

#endif /* card_hpp */
class DeckOfCards
{
public:
    DeckOfCards(); // constructor initializes deck
    void shuffle(); // shuffles cards in deck
    
    
    void deal(); // deals cards in deck
    
    //functions for Player1 Hand
    bool TpairPlayer1();
    bool twoPairPlayer1();
    bool threePlayer1();
    bool hasFourPlayer1();

    bool hasStraightPlayer1();
    bool hasAFlushPlayer1();
    
    //functions for Player2 Hand
    bool TpairPlayer2();
    bool twoPairPlayer2();
    bool threePlayer2();
    bool hasFourPlayer2();
    bool hasStraightPlayer2();
    
    
    
private:
    int deck[ 4 ][ 13 ]; // represents deck of cards
    int handRow[5];      // kakvi sa kartite
    int handCol[4];     // boite
    
    int handRowPlayer2[5];      // kakvi sa kartite
    int handColPlayer2[4];     // boite
    
    
}; // end class DeckOfCards



