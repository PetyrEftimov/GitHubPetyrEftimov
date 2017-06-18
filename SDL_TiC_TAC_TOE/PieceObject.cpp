//
//  PieceObjekt.cpp
//  SDL_TiC_TAC_TOE
//
//  Created by Pepi on 6/8/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "PieceObject.hpp"
// Constructor which sets the piece of empty
PieceObject::PieceObject() : GameObject()
{
    pieceType = PIECE_EMPTY;
}

// Destructor
PieceObject::~PieceObject()
{
    pieceType = PIECE_EMPTY;
}

// Getter of PieceType
PieceType PieceObject::getPieceType()
{
    return pieceType;
}

// Setter of PieceType
void PieceObject::setPieceType(PieceType pieceType)
{
    this->pieceType = pieceType;
}

// Render the piece if exists and have texture
void PieceObject::render(SDL_Renderer* renderer)
{
    if ((pieceType != PIECE_EMPTY) & (texture != NULL))
    {
        SDL_Rect renderRectangle = { x, y, width, height };
        
        SDL_RenderCopy(renderer, texture, NULL, &renderRectangle);
    }
}
