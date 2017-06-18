//
//  ButtonObjekt.cpp
//  SDL_TiC_TAC_TOE
//
//  Created by Pepi on 6/8/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "ButtonObject.hpp"

// Constructor
ButtonObject::ButtonObject() : GameObject()
{
    buttonType = BUTTON_NULL;
}

// Destructor
ButtonObject::~ButtonObject()
{
    buttonType = BUTTON_NULL;
}

// Get ButtonType
ButtonType ButtonObject::getButtonType()
{
    return buttonType;
}

// Set ButtonType
void ButtonObject::setButtonType(ButtonType buttonType)
{
    this->buttonType = buttonType;
}

// Render the button if it exists
void ButtonObject::render(SDL_Renderer* renderer)
{
    if ((buttonType != BUTTON_NULL) & (texture != NULL))
    {
        SDL_Rect renderRectangle = { x, y, width, height };
        
        SDL_RenderCopy(renderer, texture, NULL, &renderRectangle);
    }
}



