////
////  My_First_SDL.cpp
////  SDL_TEST_CLASS
////
////  Created by Pepi on 6/15/17.
////  Copyright © 2017 Pepi. All rights reserved.
////
//#include <SDL2/SDL.h>
//#include <SDL2_image/SDL_image.h>
//#include <stdio.h>
//#include <string>
//#include <stdio.h>
//#include <vector>
//using namespace std;
//SDL_Window * window = NULL;
//const int SCREEN_WIDTH = 320 ;
//const int SCREEN_HEIGHT = 320 ;
//SDL_Renderer  * renderer = NULL;
//SDL_Texture * texture = NULL;
//SDL_Texture * texturFigures = NULL;
//vector<SDL_Rect> v_figures;
//SDL_Rect array1[8][8];
//vector<SDL_Rect> v_table;
//void cropFigures()
//{
//    SDL_Rect tempRect;
//    int xPos = 0 ;
//    int yPos = 10 ;
//    
//    for (int i = 0; i < 2; i++)
//    {
//        xPos = 0 ;
//        for (int i = 0; i < 6; i++)
//        {
//            
//            tempRect.x = xPos;
//            tempRect.y = yPos;
//            tempRect.w = 50.7;
//            tempRect.h = 38.5;
//            v_figures.push_back(tempRect);
//            xPos += 50.7;
//            
//        }
//        yPos = 38.5;
//    }
//}
//void cropTable()
//{
//    int xPos = 0;
//    int yPos = 0 ;
//    SDL_Rect tempRect ;
//    for (int i = 0; i < 2 ; i++) {
//        xPos = 0;
//        for (int j = 0; j < 8; j++) {
//            tempRect.x = xPos;
//            tempRect.y = yPos;
//            tempRect.h = 40;
//            tempRect.w = 40;
//            array1[i][j] = tempRect;
//            xPos += 40 ;
//        }
//        yPos += 40;
//    }
//}
//
//
//
//
//int main(){
//    
//    SDL_Init(SDL_INIT_VIDEO);
//    // s tova syzdavame window //
//    window = SDL_CreateWindow("pepi window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
//    // svyrzvame rendera s window
//    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
//    SDL_RenderClear(renderer);
//    //   SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 0x00);
//    
//    
//    SDL_Surface * loadSurface = IMG_Load("Chess15.06.png");
//    texture = SDL_CreateTextureFromSurface(renderer, loadSurface);
//    SDL_FreeSurface(loadSurface);
//    
//
//    loadSurface = IMG_Load("new.png");
//    SDL_SetColorKey(loadSurface, SDL_TRUE, SDL_MapRGB(loadSurface-> format, 0xc9, 0xc9, 0xc9));
//    texturFigures = SDL_CreateTextureFromSurface(renderer, loadSurface);
//    SDL_FreeSurface(loadSurface);
//    
//    
//    
//    SDL_Rect prinTo ;
//    SDL_RenderCopy(renderer, texture, NULL, NULL);
//    bool quit = false ;
//    SDL_Event e ;
//    cropFigures();
//    cropTable();
//    
//    while (!quit)
//    {
//        while ( SDL_PollEvent(&e) != 0)
//        {
//            if (e.type == SDL_QUIT)
//            {
//                quit = true ;
//            }
//            for (int i = 0; i < 8 ; i++)
//            {
//                for (int j = 0 ; j < 8; j++)
//                {
//                    prinTo.x = array1[i][j].x;
//                    prinTo.y = array1[i][j].y + 10;
//                    prinTo.h = 40;
//                    prinTo.w = 40;
//                    SDL_RenderCopy(renderer, texturFigures, & v_figures[2], &prinTo);
//                    SDL_RenderPresent(renderer);
//                    
//                }
//                
//                
//            }
//            
//        }
//        
//        
//    }
//    
//
//    
//    SDL_RenderCopy(renderer, texture, NULL, NULL);
//    
//    
//    
//    
//    
//    
//    
//    
//    
//    
//    
//    return 0 ;
//}
