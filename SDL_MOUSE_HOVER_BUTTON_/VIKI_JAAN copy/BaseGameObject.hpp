//
//  BaseGameObject.hpp
//  SDL_TEST_CLASS
//
//  Created by Pepi on 6/8/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#ifndef BaseGameObject_hpp
#define BaseGameObject_hpp
#include <stdio.h>

#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <iostream>
using namespace std;

class BaseGameObject
{
public:
    // Constructor
    BaseGameObject();
    // Destructor
    ~BaseGameObject();
    
    // Deallocate texture
    void free();
    
    // Getter and setter for texture dimensions
    int getWidth();
    int getHeight();
    void setWidth(int width);
    void setHeight(int height);
    
    // Getter and setter for texture position
    int getX();
    int getY();
    void setPosition(int x, int y);
    
    // Getter and setter for the texture
    SDL_Texture* getTexture();
    void setTexture(SDL_Texture* texture);
    
    // Load image at specific path, using a passed in renderer, return true if loaded successfully
    bool loadFromFile(std::string filepath, SDL_Renderer* renderer);
    
    // Render the texture using the given renderer
    void render(SDL_Renderer* renderer);
    
    // Check if point x, y is inside object
    bool isInside(int x, int y);
    
protected:
    // The texture
    SDL_Texture* texture;
    
    // Texture position
    int x;
    int y;
    
    // Texture dimensions
    int width;
    int height;

    
};

#endif /* BaseGameObject_hpp */
