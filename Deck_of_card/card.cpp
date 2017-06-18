//
//  card.cpp
//  Deck_of_card
//
//  Created by Pepi on 4/13/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "card.hpp"
#include <iostream>
using std::cout;
using std::left;
using std::right;
using namespace std;

#include <iomanip>
using std::setw;

#include <cstdlib> // prototypes for rand and srand
using std::rand;
using std::srand;

#include <ctime> // prototype for time
using std::time;

// DeckOfCards class definition

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
    }
    // end outer for
    for (int i = 0 ; i < 5 ; i++) {
        handRow[i]=0;
    }
    for (int i = 0 ; i < 5 ; i++) {
        handCol[i]=0;
    }
   // srand( time( 0 ) ); // seed random number generator
} // end DeckOfCards default constructor

// shuffle cards in deck
void DeckOfCards::shuffle()
{
    int row; // represents suit value of card
    int column; // represents face value of card
    srand(time(NULL));
 
    // for each of the 52 cards, choose a slot of the deck randomly
    for ( int card = 1; card <= 52; card++ )
    {
        do // choose a new random location until unoccupied slot is found
        {
            row = rand() % 4 ; // randomly select the row
            column = rand() % 13 ; // randomly select the column
            
         
        } while( deck[ row ][ column ] != 0 ); // end do...while
        
        // place card number in chosen slot of deck
        deck[ row ][ column ] = card;
        
    } // end for
} // end function shuffle


// deal cards in deck
void DeckOfCards::deal()
{
    // initialize suit array
    static const char *suit[ 4 ] =
    { "Hearts", "Diamonds", "Clubs", "Spades" };
    
    // initialize face array
    static const char *face[ 13 ] =
    { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven",
        "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
    int i = 0 ;
    // for each of the 52 cards
    for ( int card = 1; card <= 5; card++ )
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
                    cout << setw( 5 ) << right << face[ column ]
                    << " of " << setw( 8 ) << left << suit[ row ]
                    << ( card % 2 == 0 ? '\n' : '\t' ) <<endl;
                    handRow[i]=row;
                    handCol[i]=column;
                    i++;
                    
                    //5 indexa za 5te razdadeni karti
                    //cout << "row:" << row <<" col: "<< column << endl;
                    
                    
                } // end if
           
            
                
            
            
            } // end innermost for
        } // end inner for
    } // end outer for
    
    //todo
    //return arr[][] ili pointer to arr

   // cout << endl;
   /*
    for(int i=0;i<4;i++){
        for(int j=0;j<13;j++)
        {
            cout<< arrFiveCard[i][j];
        }
        cout << endl;
    }
    */
    
    
} // end function deal

bool  DeckOfCards::Tpair(){
    int counters[13]={0};
 //   int counter4 = 0;
    for (int i = 0 ; i < 5 ; i++) {
        counters[handCol[i]]++;
        
        /*       switch(handRow[i]){
         case 0:
         counters[0]++;
         break;
         case 1 :
         counters[1]++;
         break;
         case 2:
         counters[2]++;
         break;
         case 3:
         counters[3]++;
         break;
         case 4 :
         counters[4]++;
         break;
         case 5:
         counters[5]++;
         break;
         case 6:
         counters[6]++;
         break;
         case 7 :
         counters[7]++;
         break;
         case 8:
         counters[8]++;
         break;
         case 9:
         counters[9]++;
         break;
         case 10 :
         counters[10]++;
         break;
         case 11:
         counters[11]++;
         break;
         case 12:
         counters[12]++;}
         
         */
    }
    for (int i = 0 ; i < 13; i++) {
       // cout << counters[i]<< " " ;
    }
    
    cout << endl;
    
    for (int i =0; i < 13 ; i++) {
        if (counters[i] == 2) {
            
            return true;
        }
        
        
    }
    
    return false;
}

bool DeckOfCards::twoPair(){
    int counters[13] = {0};
    int counters4 = 0 ;
    for (int i = 0 ; i < 5 ; i++) {
        counters[handCol[i]]++;
    }
    for (int i = 0 ; i < 13; i++) {
        if (counters[i] == 2 ){
            counters4++;
        }
        if (counters4 == 2 ) {
            return true;
        }
        
    }
    
    
    return false;
    
}

void DeckOfCards::three(){
    
    int counters[13]={0};
    int counter3 = 0 ;
    
    for (int i = 0 ; i < 5 ; i++) {
        counters[handCol[i]]++;
    }
    
    for (int i = 0 ; i < 13 ; i++) {
        if (counters[i] == 3) {
            counter3++;
            
            cout << " :)" <<counter3;
            
            
        }
        
    }
    
    
    
}

void DeckOfCards::twoOfSuit(){
    int counters[13]={0};
    int suit = 0 ;
    for (int i = 0 ; i < 5 ; i++) {
        counters[handRow[i]]++;
    }
    for (int i = 0 ; i < 13; i++) {
        if (counters[i] == 4) {
            
            
            suit++;
            cout << " :(" << suit;
        }
        
        
    }
    
}

void DeckOfCards::shuffleSecondPlayer(){
    
    
    
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
    
    
    
}



void DeckOfCards::dealSecondPlayer(){
    
   
    // initialize suit array
    static const char *suit[ 4 ] =
    { "Clubs", "Diamonds", "Hearts", "Spades" };
    
    // initialize face array
    static const char *face[ 13 ] =
    { "Ace", "King", "Queen", "Jack", "Ten", "Night", "Eight",
        "Seven", "Six", "Five", "Four", "Three", "Deuce" };
    int i = 0 ;
    // for each of the 52 cards
    for ( int card = 1; card <= 5; card++ )
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
                    cout << setw( 5 ) << right << face[ column ]
                    << " of : " << setw( 8 ) << left << suit[ row ]
                    << ( card % 2 == 0 ? '\n' : '\t' );
                    handRow[i]=row;
                    handCol[i]=column;
                    i++;
            
                    cout << endl ;
                  
                    
                } // end if
            } // end innermost for
        } // end inner for
          } // end outer for
} // end function deal


void DeckOfCards::check(){
    
    
}
  





