//
//  GameObjeckt.cpp
//  SDL_TiC_TAC_TOE
//
//  Created by Pepi on 6/8/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include "GameObject.hpp"
// Constructor
GameObject::GameObject()
{
    texture = NULL;
    width = 0;
    height = 0;
    x = 0;
    y = 0;
}

// Destructor
GameObject::~GameObject()
{
    free();
}

// Get width
int GameObject::getWidth()
{
    return width;
}

// Get height
int GameObject::getHeight()
{
    return height;
}

// Set width
void GameObject::setWidth(int width)
{
    this->width = width;
}

// Set height
void GameObject::setHeight(int height)
{
    this->height = height;
}

// Get x
int GameObject::getX()
{
    return x;
}

// Get y
int GameObject::getY()
{
    return y;
}

// Set position
void GameObject::setPosition(int x, int y)
{
    this->x = x;
    this->y = y;
}

// Get texture
SDL_Texture* GameObject::getTexture()
{
    return texture;
}

// Set texture
void GameObject::setTexture(SDL_Texture* texture)
{
    this->texture = texture;
}

// Method to release resources
void GameObject::free()
{
    if (texture != NULL)
    {
        SDL_DestroyTexture(texture);
        texture = NULL;
        width = 0;
        height = 0;
    }
}

// Load texture for given filepath and renderer
bool GameObject::loadFromFile(std::string filepath, SDL_Renderer* renderer)
{
    // Free any texture first
    free();
    
    // Load the surface
    SDL_Surface* loadedSurface = IMG_Load(filepath.c_str());
    
    if (loadedSurface == NULL)
    {
        std::cout << "Failed Surface Load Error: " << IMG_GetError() << std::endl;
    }
    else
    {
        // Set transparent colour to white
        SDL_SetColorKey(loadedSurface, SDL_TRUE, SDL_MapRGB(loadedSurface->format, 0xFF, 0xFF, 0xFF));
        
        // Create the texture
        texture = SDL_CreateTextureFromSurface(renderer, loadedSurface);
        
        if (texture == NULL)
        {
            std::cout << "Failed Texture Load Error: " << SDL_GetError() << std::endl;
        }
        else
        {
            // Set texture width and height
            width = loadedSurface->w;
            height = loadedSurface->h;
        }
        
        // Free resources
        SDL_FreeSurface(loadedSurface);
    }
    
    // Return true if texture exists
    return (texture != NULL);
}

// Render texture
void GameObject::render(SDL_Renderer* renderer)
{
    SDL_Rect renderRectangle = { x, y, width, height };
    
    SDL_RenderCopy(renderer, texture, NULL, &renderRectangle);
}

// Check if a given point x, y is inside the game object
bool GameObject::isInside(int x, int y)
{
    int leftEdge = this->x;
    int rightEdge = this->x + width;
    int topEdge = this->y;
    int bottomEdge = this->y + height;
    
    bool isInside = true;
    
    if (x <= leftEdge)
    {
        isInside = false;
    }
    
    if (x >= rightEdge)
    {
        isInside = false;
    }
    
    if (y <= topEdge)
    {
        isInside = false;
    }
    
    if (y >= bottomEdge)
    {
        isInside = false;
    }
    
    return isInside;
}


