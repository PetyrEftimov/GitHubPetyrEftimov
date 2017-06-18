//
//  GridObjekt.hpp
//  SDL_TiC_TAC_TOE
//
//  Created by Pepi on 6/8/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef GridObject_hpp
#define GridObject_hpp
#include <stdio.h>
#pragma once
#include "GameObject.hpp"
// Child class of GameObject which is used to display the grid
class GridObject : public GameObject
{
public:
    // Constructor
    GridObject();
    // Destructor
    ~GridObject();
};



#endif /* GridObject_hpp */
