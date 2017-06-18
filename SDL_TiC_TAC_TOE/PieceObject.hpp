//
//  PieceObjekt.hpp
//  SDL_TiC_TAC_TOE
//
//  Created by Pepi on 6/8/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef PieceObject_hpp
#define PieceObject_hpp
#include <stdio.h>
#include "GameObject.hpp"
#pragma once


// Game piece type enumeration
enum PieceType
{
    PIECE_EMPTY = 0,
    PIECE_CIRCLE = 1,
    PIECE_CROSS = 2,
    PEICE_TOTAL = 3
};

// Class which handles the game piece placed onto the board, child class of GameObject
class PieceObject : public GameObject
{
public:
    // Constructor
    PieceObject();
    // Destructor
    ~PieceObject();
    
    // Getter and setter of piece type
    PieceType getPieceType();
    void setPieceType(PieceType pieceType);
    
    // Render the piece object
    void render(SDL_Renderer* renderer);
    
private:
    // The piece type
    PieceType pieceType;
};


#endif /* PieceObject_hpp */
