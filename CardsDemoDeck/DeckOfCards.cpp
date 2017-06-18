// Fig. 8.26: DeckOfCards.cpp
// Member-function definitions for class DeckOfCards that simulates
// the shuffling and dealing of a deck of playing cards.
#include <iostream>
using std::cout;
using std::left;
using std::right;

#include <iomanip>
using std::setw;

#include <cstdlib> // prototypes for rand and srand
using std::rand;
using std::srand;

#include <ctime> // prototype for time
using std::time;

#include "DeckOfCards.hpp" // DeckOfCards class definition
using namespace std;
// DeckOfCards default constructor initializes deck
DeckOfCards::DeckOfCards()
{
    // loop through rows of deck
    for ( int row = 0; row <= 3; row++ )
    {
        // loop through columns of deck for current row
        for ( int column = 0; column <= 12; column++ )
        {
            deck[ row ][ column ] = 0; // initialize slot of deck to 0
        } // end inner for
    } // end outer for
    
    srand( time( 0 ) ); // seed random number generator
} // end DeckOfCards default constructor

// shuffle cards in deck
void DeckOfCards::shuffle()
{
    int row; // represents suit value of card
    int column; // represents face value of card
    
    // for each of the 52 cards, choose a slot of the deck randomly
    for ( int card = 1; card <= 52; card++ )
    {
        do // choose a new random location until unoccupied slot is found
        {
            row = rand() % 4; // randomly select the row
            column = rand() % 13; // randomly select the column
        } while( deck[ row ][ column ] != 0 ); // end do...while
        
        // place card number in chosen slot of deck
        deck[ row ][ column ] = card;
    } // end for
} // end function shuffle

// deal cards in deck
void DeckOfCards::deal(int Player1Cards[4][13], int player2Cards2[4][13])
{
    Player1Cards[4][13]={0};
    player2Cards2[4][13]={0};
    
    // initialize suit array
    static const char *suit[ 4 ] =
    { "Spades" , "Hearts", "Diamonds", "Clubs"};
    
    // initialize face array
    static const char *face[ 13 ] =
    { "Ace", "King", "Queen", "Jack", "Ten", "Nine", "Eight", "Seven", "Six", "Five", "Four", "Three", "Two" };
    // for each of the 52 cards
    for ( int card = 1; card <= 10; card++ )
    {
        // loop through rows of deck
        for ( int row = 0; row <= 3; row++ )
        {
            // loop through columns of deck for current row
            for ( int column = 0; column <= 12; column++ )
            {
                // if slot contains current card, display card
                if ( deck[ row ][ column ] == card )
                {
                  //  cout << setw( 5 ) << right << face[ column ]
                  //  << " of " << setw( 8 ) << left << suit[ row ]
                  //  << ( card % 2 == 0 ? '\n' : '\t' )<<endl;
                    
                    //akoe e chetno
                    //razdai na player1, inache na Player2
                    if(card%2==0)
                    {
                        Player1Cards[row][column]=1;
                    }
                    else{
                        player2Cards2[row][column]=1;
                    }
                } // end if
            } // end innermost for
        } // end inner for
    } // end outer for
} // end function deal



bool DeckOfCards::hasPair(int playerXCards[4][13]){
  
    for (int i=0; i<1; i++)
    {
        for (int j=0; j<13; j++) {
            //compare only the 5 cards of player
         //   if(playerXCards[i][j] == 1)
          //  {
                if( playerXCards[i][j] == playerXCards[i+1][j] &&  playerXCards[i][j] == 1)
                {
                    
                  //  cout << playerXCards[i][j];
                    return true;
                }
                if( playerXCards[i][j] == playerXCards[i+2][j] && playerXCards[i][j] == 1)
                {
                  ///  cout << playerXCards[i][j];
                  

                    return  true;
                }
                if( playerXCards[i][j] == playerXCards[i+3][j] && playerXCards[i][j] == 1)
                {
                  
                  //  cout << playerXCards[i][j];

                    return  true;
                }
                if( playerXCards[i+1][j] == playerXCards[i+2][j]  && playerXCards[i][j] == 1)
                {
                  //  cout << playerXCards[i][j];

                    return  true;
                }
                if( playerXCards[i+1][j] == playerXCards[i+3][j] && playerXCards[i][j] == 1)
                {
                   //// cout << playerXCards[i][j];

                    return true;
                }
                if( playerXCards[i+2][j] == playerXCards[i+3][j] && playerXCards[i][j] == 1)
                {
                  //  cout << playerXCards[i][j];

                    return true;
                }
                
                return 0;
            //}
           // return  0 ;
        }
        return  0 ;
    }
    return 0;
    }
