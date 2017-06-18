//
//  ButtonObjekt.hpp
//  SDL_TiC_TAC_TOE
//
//  Created by Pepi on 6/8/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef ButtonObject_hpp
#define ButtonObject_hpp
#include <stdio.h>
#include "GameObject.hpp"
#pragma once

// Button type enumeration
enum ButtonType
{
    BUTTON_NULL = 0,
    BUTTON_NEW = 1,
    BUTTON_QUIT = 2,
    BUTTON_TOTAL = 3,
    BUTTON_PEPI = 4
};

// ButtonObject class which handle buttons in the game
class ButtonObject : public GameObject
{
public:
    // Constructor
    ButtonObject();
    // Destructor
    ~ButtonObject();
    
    // Returns the button type
    ButtonType getButtonType();
    // Sets the button type
    void setButtonType(ButtonType buttonType);
    
    // Method to render the button
    void render(SDL_Renderer* renderer);
    
private:
    // Button class keep track of its type
    ButtonType buttonType;
};




#endif /* ButtonObject_hpp */







