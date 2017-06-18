// Fig. 8.25: DeckOfCards.h
// Definition of class DeckOfCards that
// represents a deck of playing cards.

// DeckOfCards class definition
class DeckOfCards
{
public:
    DeckOfCards(); // constructor initializes deck
    void shuffle(); // shuffles cards in deck
    void deal(int Player1Cards[4][13], int player2Cards2[4][13]); // deals cards in deck
    bool hasPair(int PlayerXCards[4][13]);
private:
    int deck[ 4 ][ 13 ]; // represents deck of cards
}; // end class DeckOfCards

