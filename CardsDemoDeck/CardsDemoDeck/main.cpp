// Fig. 8.27: main.cpp
// Card shuffling and dealing program.
#include "DeckOfCards.hpp" // DeckOfCards class definition
#include <iostream>
using namespace std;
int main()
{
    int Player1Cards[4][13]={0};
    int Player2Cards[4][13]={0};
    
    DeckOfCards deckOfCards; // create DeckOfCards object
    
    deckOfCards.shuffle(); // shuffle the cards in the deck
    deckOfCards.deal(Player1Cards, Player2Cards); // deal the cards in the deck
    
    
    //obhojdame masivite
    cout << "Player 1 cards: " <<endl;
    for(int i = 0 ; i<4;i++){
        for (int j=0; j<13; j++) {
            cout<< Player1Cards[i][j];
        }
        cout<< endl;
    }

    
    cout << "Player 2 cards: " <<endl;
    for(int i = 0 ; i<4;i++){
        for (int j=0; j<13; j++) {
            cout<< Player2Cards[i][j];
        }
        cout << endl;
    }
    
    cout << "Player 1 has a pair: ";
    bool hasPair = deckOfCards.hasPair(Player1Cards);
    cout << hasPair<< endl;

    
    cout << "Player 2 has a pair: ";
    bool hasPair2 = deckOfCards.hasPair(Player2Cards);
    cout << hasPair2<< endl;

    
    
    return 0; // indicates successful termination
} // end main


