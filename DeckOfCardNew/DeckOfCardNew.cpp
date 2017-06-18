//
//  card.cpp
//  Deck_of_card
//
//  Created by Pepi on 4/13/17.
//  Copyright � 2017 Pepi. All rights reserved.
//

#include "DeckOfCardNew.hpp"
#include <iostream>
using std::cout;
using std::left;
using std::right;
#include <vector>
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
        handCol[i]=0;
        
        //    	handRowPlayer2[i]=0;
        //    	handColPlayer2[i]=0;
        
    }
    
    
    for (int i = 0 ; i < 5 ; i++) {
        
        handRowPlayer2[i]=0;
        handColPlayer2[i]=0;
        
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
    { "Spades", "Hearts", "Diamonds", "Clubs" };
    
    // initialize face array
    static const char *face[ 13 ] =
    { "Ace", "King", "Queen", "Jack", "Ten", "Nine", "Eight", "Seven", "Six", "Five","Four", "Three", "Two"};
    int i = 0 ;
    int j=0;
    // for each of the 52 cards
    
    cout << "Player 1 Cards: "<<endl;
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
                    if(card==1 || card==2 || card==3 || card==4 || card==5){
                        {
                            cout << setw( 5 ) << right << face[ column ]
                            << " of " << setw( 8 ) << left << suit[ row ]
                            << ( card % 2 == 0 ? '\n' : '\t' ) <<endl;
                            handRow[i]=row;
                            handCol[i]=column;
                            i++;
                        }
                    } // end if
                    
                } // end innermost for
            } // end inner for
        } // end outer for
    }
    
    cout << "Player 2 Cards: "<<endl;
    for ( int card = 6; card <= 10; card++ )
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
                    if(card==6 || card==7 || card==8 || card==9 || card==10){
                        {
                            cout << setw( 5 ) << right << face[ column ]
                            << " of " << setw( 8 ) << left << suit[ row ]
                            << ( card % 2 == 0 ? '\n' : '\t' ) <<endl;
                            handRowPlayer2[j]=row;
                            handColPlayer2[j]=column;
                            j++;
                        }
                    } // end if
                    
                } // end innermost for
            } // end inner for
        } // end outer for
    }
    
    
} // end function deal

bool  DeckOfCards::TpairPlayer1(){
    int counters[13]={0};
    for (int i = 0 ; i < 5 ; i++) {
        
        counters[handCol[i]]++;
        
        //todo : fix bug with latest card( when in part of a pair) is not working. do not count as a second card from the same type
   	}
    cout << endl;
    for (int i =0; i < 13 ; i++) {
        if (counters[i] == 2) {
            return true;
        }
    }
    return false;
}

bool  DeckOfCards::TpairPlayer2(){
    
    int counters[13]={0};
    for (int i = 0 ; i < 5 ; i++) {
        
        counters[handColPlayer2[i]]++;
        
        //todo : fix bug with latest card( when in part of a pair) is not working. do not count as a second card from the same type
   	}
    cout << endl;
    for (int i =0; i < 13 ; i++) {
        if (counters[i] == 2) {
            return true;
        }
    }
    return false;
    
    
}

bool DeckOfCards::twoPairPlayer1(){
    
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

bool DeckOfCards::twoPairPlayer2(){
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



bool DeckOfCards::threePlayer1(){
    
    int counters[13]={0};
    int counter3 = 0 ;
    
    for (int i = 0 ; i < 5 ; i++) {
        counters[handCol[i]]++;
    }
    
    for (int i = 0 ; i < 13 ; i++) {
        if (counters[i] == 3) {
            counter3++;
            return true;
        }
    }
    return false;
}

bool DeckOfCards::threePlayer2(){
    
    int counters[13]={0};
    int counter3 = 0 ;
    
    for (int i = 0 ; i < 5 ; i++) {
        counters[handColPlayer2[i]]++;
    }
    
    for (int i = 0 ; i < 13 ; i++) {
        if (counters[i] == 3) {
            counter3++;
            return true;
        }
    }
    return false;
}

bool DeckOfCards::hasFourPlayer1(){
    int counters[13]={0};
    int suit = 0 ;
    for (int i = 0 ; i < 5 ; i++) {
        counters[handRow[i]]++;
    }
    for (int i = 0 ; i < 13; i++) {
        if (counters[i] == 4) {
            suit++;
            return true;
        }
    }
    return false;
}

bool DeckOfCards::hasFourPlayer2(){
    int counters[13]={0};
    int suit = 0 ;
    for (int i = 0 ; i < 5 ; i++) {
        counters[handRowPlayer2[i]]++;
    }
    for (int i = 0 ; i < 13; i++) {
        if (counters[i] == 4) {
            suit++;
            return true;
        }
    }
    return false;
}


bool DeckOfCards::hasStraightPlayer1(){
    
    
    int min = handRow[0];
    
    for (int i = 1 ; i <= 5 ; i++) {
        if (handRow[i] < min) {
            min = handRow[i];
        }
    }
    
    int next = min+1;
    
    int i = 0 ;
    
    while (i < 5) {
        if (handRow[i] == next) {
            next++;
            i = 0 ;
        }
        else{
            i++;
        }
    }
    
    if (next == (min + 5 )) {
        return true;
    }
    else{
        return false;
        
    }
    
}

bool DeckOfCards::hasStraightPlayer2(){
    
    
    int min = handRowPlayer2[0];
    
    for (int i = 1 ; i <= 5 ; i++) {
        if (handRowPlayer2[i] < min) {
            min = handRowPlayer2[i];
        }
    }
    
    int next = min+1;
    
    int i = 0 ;
    
    while (i < 5) {
        if (handRowPlayer2[i] == next) {
            next++;
            i = 0 ;
        }
        else{
            i++;
        }
    }
    
    if (next == (min + 5 )) {
        return true;
    }
    else{
        return false;
        
    }
    
}

bool DeckOfCards::hasAFlushPlayer1(){
    
    int counter[5]={0};
    
   for (int i = 0 ; i < 5; i++) {
       cout << handRow[i]<< endl ;
       counter[handRow[i]]++;
 }
    for (int i = 0 ; i < 5 ; i++) {
        cout << counter[i] << "  ";
    }
    cout <<endl ;
    
    for (int i = 0 ; i < 5 ; i++) {
        if (counter[i] == 5) {
            return true;
        }
    }
    
    return false;



}
