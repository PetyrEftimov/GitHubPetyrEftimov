//
//  main.cpp
//  SDL_TiC_TAC_TOE
//
//  Created by Pepi on 6/8/17.
//  Copyright © 2017 Pepi. All rights reserved.
//
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <string>
#include "GameObject.hpp"
#include "GridObject.hpp"
#include "ButtonObject.hpp"
#include "Constants.h"
#include "PieceObject.hpp"
// Global variables
GridObject gGrid;
PieceObject gCircle;
PieceObject gCross;

PieceObject gGridPieces[GRID_HORIZONTAL_SIZE][GRID_VERTICAL_SIZE];

ButtonObject gNewGame;
ButtonObject gQuit;

// Structure which holds a set of X and Y coordinates
struct GridCoord
{
    int x;
    int y;
};

// Function to load media, require SDL_Window and SDL_Renderer passed in
bool loadMedia(SDL_Window* window, SDL_Renderer* renderer)
{
    // Set successful load to true
    bool success = true;
    
    // Load files, if any failed to load, change successful to fail
    if (!gGrid.loadFromFile("Grid.png", renderer))
    {
        cout << "Failed to load grid" << endl;
        success = false;
    }
    
    if (!gCircle.loadFromFile("Circle.png", renderer))
    {
        cout << "Failed to load circle" << endl;
        success = false;
    }
    
    if (!gCross.loadFromFile("Cross.png", renderer))
    {
        cout << "Failed to load cross" << endl;
        success = false;
    }
    
    if (!gNewGame.loadFromFile("NewGameButton.png", renderer))
    {
        cout << "Failed to new game button" << endl;
        success = false;
    }
    
    if (!gQuit.loadFromFile("QuitButton.png", renderer))
    {
        cout << "Failed to quit button" << endl;
        success = false;
    }
    
    // If successful
    if (success)
    {
        // Set the grid position
        
         gGrid.setPosition(GRID_X_OFFSET, GRID_Y_OFFSET);
        // Set the button positions
        gNewGame.setPosition(BUTTON_NEW_X, BUTTON_NEW_Y);
        gNewGame.setButtonType(BUTTON_NEW);
        
        gQuit.setPosition(BUTTON_QUIT_X, BUTTON_QUIT_Y);
        gQuit.setButtonType(BUTTON_QUIT);
        
        // Set the positions for the grid piece locations
        int currentX = 0;
        int currentY = 0;
        
        for (int j = 0; j < GRID_VERTICAL_SIZE; j++)
        {
            for (int i = 0; i < GRID_HORIZONTAL_SIZE; i++)
            {
                currentY = j * PIECE_HEIGHT;
                
                gGridPieces[i][j].setPosition(currentX + GRID_X_OFFSET, currentY + GRID_Y_OFFSET);
                
                gGridPieces[i][j].setWidth(PIECE_WIDTH);
                gGridPieces[i][j].setHeight(PIECE_HEIGHT);
                
                currentX += PIECE_WIDTH;
                
                if (currentX == GRID_WIDTH)
                {
                    currentX = 0;
                }
            }
        }
       
    }

    
    return success;
}

// Check if a mouse click is inside grid, both the down and up click has to be inside to count
GridCoord checkMouseInsideGrid(int mouseDownX, int mouseDownY, int mouseUpX, int mouseUpY)
{
    GridCoord clickedGrid;
    clickedGrid.x = GRID_HORIZONTAL_SIZE;
    clickedGrid.y = GRID_VERTICAL_SIZE;
    
    // Check if inside game grid
    if (gGrid.isInside(mouseDownX, mouseDownY) & gGrid.isInside(mouseUpX, mouseUpY))
    {
        // If inside grid, check each single grid, if inside one of the grids, set the grid coordinate
        for (int j = 0; j < GRID_VERTICAL_SIZE; j++)
        {
            for (int i = 0; i < GRID_HORIZONTAL_SIZE; i++)
            {
                bool inside = false;
                
                if (gGridPieces[i][j].isInside(mouseDownX, mouseDownY) &
                    gGridPieces[i][j].isInside(mouseUpX, mouseUpY))
                {
                    inside = true;
                    clickedGrid.x = i;
                    clickedGrid.y = j;
                }
            }
        }
    }
    
    // Return the grid position, returns the default grid size if mouse click was outside
    return clickedGrid;
}

//// Check for winner
//PieceType checkForWinner(GridCoord placedPiece)
//{
//    // Get the row and column of the placed piece
//    int col = placedPiece.x;
//    int row = placedPiece.y;
//    
//    bool isDiag = false;
//    
//    PieceType winner = PIECE_EMPTY;
//    
//    // If the piece position's sum is a multiple of 2, then its on a diagonal position
//    // (0,0, 2,0, 1,1, 0,2, 2,2)
//    if (((row + col) % 2) == 0)
//    {
//        isDiag = true;
//    }
//    
//    // To keep track of the player that won
//    int wonCheck = 0;
//    
//    // check row of the placed piece
//    for (int i = 0; i < GRID_HORIZONTAL_SIZE; i++)
//    {
//        // If the piece is circle, add 1 to wonCheck
//        if (gGridPieces[i][row].getPieceType() == PIECE_CIRCLE)
//        {
//            wonCheck++;
//        }
//        // If the piece is cross, minus 1 to wonCheck
//        if (gGridPieces[i][row].getPieceType() == PIECE_CROSS)
//        {
//            wonCheck--;
//        }
//    }
//    
//    if (wonCheck == 3)
//    {
//        // Circle won
//        winner = PIECE_CIRCLE;
//    }
//    else if (wonCheck == -3)
//    {
//        // Cross won
//        winner = PIECE_CROSS;
//    }
//    
//    // Reset wonCheck and repeat for the column
//    wonCheck = 0;
//    
//    for (int i = 0; i < GRID_VERTICAL_SIZE; i++)
//    {
//        // If piece is circle, add 1 to wonCheck
//        if (gGridPieces[col][i].getPieceType() == PIECE_CIRCLE)
//        {
//            wonCheck++;
//        }
//        // If piece of cross, minus 1 to wonCheck
//        if (gGridPieces[col][i].getPieceType() == PIECE_CROSS)
//        {
//            wonCheck--;
//        }
//    }
//    
//    if (wonCheck == 3)
//    {
//        // Circle won
//        winner = PIECE_CIRCLE;
//    }
//    else if (wonCheck == -3)
//    {
//        // Cross won
//        winner = PIECE_CROSS;
//    }
//    
//    // check diag
//    if (isDiag)
//    {
//        // If the piece in the diagonal is equal, and its not equal to empty, then someone won
//        if ((gGridPieces[0][0].getPieceType() == gGridPieces[1][1].getPieceType()) &
//            (gGridPieces[1][1].getPieceType() == gGridPieces[2][2].getPieceType()) &
//            (gGridPieces[1][1].getPieceType() != PIECE_EMPTY))
//        {
//            if (gGridPieces[1][1].getPieceType() == PIECE_CIRCLE)
//            {
//                winner = PIECE_CIRCLE;
//            }
//            else if (gGridPieces[1][1].getPieceType() == PIECE_CROSS)
//            {
//                winner = PIECE_CROSS;
//            }
//        }
//        // Check the other diagonal
//        if ((gGridPieces[0][2].getPieceType() == gGridPieces[1][1].getPieceType()) &
//            (gGridPieces[1][1].getPieceType() == gGridPieces[2][0].getPieceType()) &
//            (gGridPieces[1][1].getPieceType() != PIECE_EMPTY))
//        {
//            if (gGridPieces[1][1].getPieceType() == PIECE_CIRCLE)
//            {
//                winner = PIECE_CIRCLE;
//            }
//            else if (gGridPieces[1][1].getPieceType() == PIECE_CROSS)
//            {
//                winner = PIECE_CROSS;
//            }
//        }
//    }
//    
//    return winner;
//}

// Main function
int main(int argc, char* args[])
{
    // Initialise SDL Sub systems
    SDL_Init(SDL_INIT_VIDEO);
    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1");
    IMG_Init(IMG_INIT_PNG);
    
    // Initialise SDL Window and Renderer
    SDL_Window* window = NULL;
    SDL_Renderer* renderer = NULL;
    
    window = SDL_CreateWindow("Tic Tac Toe", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                              SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    
    // If successfully loaded media, play the game
    if (loadMedia(window, renderer))
    {
        // Placed piece coord default to grid size
        GridCoord placedPiece;
        placedPiece.x = GRID_HORIZONTAL_SIZE;
        placedPiece.y = GRID_VERTICAL_SIZE;
        
        // Initial clicked grid coord default to grid size
        GridCoord clickedGrid;
        clickedGrid.x = GRID_HORIZONTAL_SIZE;
        clickedGrid.y = GRID_VERTICAL_SIZE;
        
        int mouseDownX = 0;
        int mouseDownY = 0;
        int mouseUpX = 0;
        int mouseUpY = 0;
        
        int currentTurn = 0;
        
        bool isPlaying = true;
        
        // main game loop
        while (isPlaying)
        {
            // Handle events
            SDL_Event e;
            
            while (SDL_PollEvent(&e) != 0)
            {
                // Quit event
                if (e.type == SDL_QUIT)
                {
                    isPlaying = false;
                }
                // Mouse left down, set the mouse down coordinates
                if ((e.type == SDL_MOUSEBUTTONDOWN) & (e.button.button == SDL_BUTTON_LEFT))
                {
                    mouseDownX = e.button.x;
                    mouseDownY = e.button.y;
                }
                // Mouse left up, set the mouse up coordinates
                if ((e.type == SDL_MOUSEBUTTONUP) & (e.button.button == SDL_BUTTON_LEFT))
                {
                    mouseUpX = e.button.x;
                    mouseUpY = e.button.y;
                }
            }
            
            // If mouse is clicked inside screen, by checking both down and up coordinates exists
            if ((mouseDownX != 0) &	(mouseUpX != 0) & (mouseDownY != 0) & (mouseUpY != 0))
            {
                // Check if the momuse click is inside the grid
                clickedGrid = checkMouseInsideGrid(mouseDownX, mouseDownY, mouseUpX, mouseUpY);
                
                // If the mouse click is in
                if ((clickedGrid.x != GRID_HORIZONTAL_SIZE) & (clickedGrid.y != GRID_VERTICAL_SIZE))
                {
                    // Set a piece if the grid location is empty
                    if (gGridPieces[clickedGrid.x][clickedGrid.y].getPieceType() == PIECE_EMPTY)
                    {
                        // Circle or cross depending on the current turn
                        if ((currentTurn % 2) == 1)
                        {
                            gGridPieces[clickedGrid.x][clickedGrid.y].setTexture(gCircle.getTexture());
                            gGridPieces[clickedGrid.x][clickedGrid.y].setPieceType(PIECE_CIRCLE);
                        }
                        // Cross always play first
                        else
                        {
                            gGridPieces[clickedGrid.x][clickedGrid.y].setTexture(gCross.getTexture());
                            gGridPieces[clickedGrid.x][clickedGrid.y].setPieceType(PIECE_CROSS);
                        }
                        // Increment current turn
                        currentTurn++;
                        
                        // And set the placed piece location
                        placedPiece.x = clickedGrid.x;
                        placedPiece.y = clickedGrid.y;
                    }
                }
                else
                {
                    // If new game is pressed
                    if (gNewGame.isInside(mouseDownX, mouseDownY) & gNewGame.isInside(mouseUpX, mouseUpY))
                    {
                        // Wipe the board
                        for (int j = 0; j < GRID_VERTICAL_SIZE; j++)
                        {
                            for (int i = 0; i < GRID_HORIZONTAL_SIZE; i++)
                            {
                                gGridPieces[i][j].setTexture(NULL);
                                gGridPieces[i][j].setPieceType(PIECE_EMPTY);
                            }
                        }
                        // And reset the current turn to 0, to start a new game
                        currentTurn = 0;
                    }
                    // If quit is pressed, quit game
                    if (gQuit.isInside(mouseDownX, mouseDownY) & gQuit.isInside(mouseUpX, mouseUpY))
                    {
                        isPlaying = false;
                    }
                 
                }
                
                // Reset the mouse click
                mouseDownX = 0;
                mouseUpX = 0;
                mouseDownY = 0;
                mouseUpY = 0;
            }
            
            PieceType winner = PIECE_EMPTY;
            
            // If a piece is placed
            if ((placedPiece.x != GRID_HORIZONTAL_SIZE) & (placedPiece.y != GRID_VERTICAL_SIZE))
            {
                // Check for winning conditions
            //    winner = checkForWinner(placedPiece);
                
                // Reset placed piece
                placedPiece.x = GRID_HORIZONTAL_SIZE;
                placedPiece.y = GRID_VERTICAL_SIZE;
            }
            
            if (winner == PIECE_CIRCLE)
            {
                cout << "circle won!" << std::endl;
            }
            if (winner == PIECE_CROSS)
            {
                cout << "cross won!" << std::endl;
            }
            
            // Render
            SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
            SDL_RenderClear(renderer);
            
            // Render grid
            gGrid.render(renderer);
            
            // Render buttons
            gNewGame.render(renderer);
            gQuit.render(renderer);
            
            // Render pieces
            for (int j = 0; j < GRID_VERTICAL_SIZE; j++)
            {
                for (int i = 0; i < GRID_HORIZONTAL_SIZE; i++)
                {
                    gGridPieces[i][j].render(renderer);
                }
            }
            
            // Show render
            SDL_RenderPresent(renderer);
        }
    }
    
    // Close everything and terminate program
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    
    renderer = NULL;
    window = NULL;
    
    IMG_Quit();
    SDL_Quit();
    
    return 0;
}
