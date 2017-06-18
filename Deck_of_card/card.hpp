//
//  card.hpp
//  Deck_of_card
//
//  Created by Pepi on 4/13/17.
//  Copyright © 2017 Pepi. All rights reserved.
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
    void shuffleSecondPlayer();
    void dealSecondPlayer();
    bool  Tpair();
    bool twoPair();
    void three();
    void twoOfSuit();
    void check();
    
private:
    int deck[ 4 ][ 13 ]; // represents deck of cards
    int handRow[5];      // kakvi sa kartite
    int handCol[4];     // boite
    
    
}; // end class DeckOfCards



