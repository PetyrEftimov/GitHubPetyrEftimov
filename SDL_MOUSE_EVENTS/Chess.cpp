////
////  Chess.cpp
////  SDL_MOUSE_EVENTS
////
////  Created by Pepi on 6/6/17.
////  Copyright © 2017 Pepi. All rights reserved.
////
//
//#include <SDL2/SDL.h>
//#include <SDL2_image/SDL_image.h>
//#include <stdio.h>
//#include <string>
//#include <iostream>
//#include <vector>
//using namespace std;
//#define WIDTH 500
//#define HEIGHT 500
//#define IMG_PATH  "Chess.jpg"
//#define IMG_PATHX "Chess_x.jpg"
//#define IMG_PATHO "Chess_o.jpg"
//
//int main (int argc, char *argv[]) {
//    
//    
//    SDL_Window *win = NULL;
//    SDL_Renderer *renderer = NULL;
//    SDL_Texture *imgTable = NULL;
//    SDL_Texture *imgX = NULL;
//    SDL_Texture *imgO = NULL;
//       int w, h;
//    if (SDL_Init(SDL_INIT_VIDEO) < 0)
//        return 1;
//    
//    win = SDL_CreateWindow("MORSKI SHAH", 70, 70, WIDTH, HEIGHT, 0);
//    renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
//    
//    imgTable = IMG_LoadTexture(renderer, IMG_PATH);
//    SDL_QueryTexture(imgTable, NULL, NULL, &w, &h);
//    
//    SDL_Rect texr; texr.x = 0 ; texr.y = 0; texr.w = 300; texr.h = 300;
//    
//    SDL_RenderClear(renderer);
//    
//    SDL_RenderCopy(renderer, imgTable, NULL, &texr);
//    SDL_RenderPresent(renderer);
//    
//    
//    
//    
//    
//    
//    
//    int counter = 0 ;
//    while (true)
//    {
//        
//        
//        SDL_Event e;
//        if ( SDL_PollEvent(&e) )
//        {
//            if (e.type == SDL_QUIT)
//                break;
//            else if (e.type == SDL_MOUSEBUTTONDOWN)
//            {
//                
//                counter++;
//                
//                
//                cout << counter<<endl;
//                int currentX ;
//                int currentY ;
//                
//                SDL_GetMouseState(&currentX, &currentY);
//                
//                // pri pyrvi click "x" pri vtri v drugo kvadratche i ne syshtoto "o"
//                // nechetno "x" chetno "o"
//                
//                if (counter % 2 == 0)
//                {
//                    if (currentX >= 0 && currentX <= 100 && currentY >= 0 && currentY <= 100 )
//                    {
//                        
//                        
//                                            
////                        
////                        imgO = IMG_LoadTexture(renderer, IMG_PATHO);
////                        
////                        SDL_QueryTexture(imgO, NULL, NULL, &w, &h);
////                        SDL_Rect texrO; texrO.x = 0 ; texrO.y = 0; texrO.w = 100; texrO.h = 100;
////                        SDL_RenderClear(renderer);
////                        SDL_RenderCopy(renderer, imgO, NULL , &texrO);
////                        SDL_RenderPresent(renderer);
//                        
//                        
//                        
//                    }
//                    if (currentX >= 0 && currentX <= 100 && currentY >= 0 && currentY <= 100 )
//                    {
//                        //
//                    }
//                    if (currentX >= 0 && currentX <= 100 && currentY >= 0 && currentY <= 100 )
//                    {
//                        //
//                    }
//                    if (currentX >= 0 && currentX <= 100 && currentY >= 0 && currentY <= 100 )
//                    {
//                        //
//                    }
//                    if (currentX >= 0 && currentX <= 100 && currentY >= 0 && currentY <= 100 )
//                    {
//                        //
//                    }
//                    if (currentX >= 0 && currentX <= 100 && currentY >= 0 && currentY <= 100 )
//                    {
//                        //
//                    }
//                    if (currentX >= 0 && currentX <= 100 && currentY >= 0 && currentY <= 100 )
//                    {
//                        //
//                    }
//                    if (currentX >= 0 && currentX <= 100 && currentY >= 0 && currentY <= 100 )
//                    {
//                        //
//                    }
//                    if (currentX >= 0 && currentX <= 100 && currentY >= 0 && currentY <= 100 )
//                    {
//                        //
//                    }
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
//                }
//                else
//                {
//                    //"x"
//                }
//                
//                
//                
//                
//            }
//            
//        }
//        
//    }
//    
//    
//    SDL_DestroyTexture(imgTable);
//    SDL_DestroyRenderer(renderer);
//    SDL_DestroyWindow(win);
//    
//    
//    
//    
//    
//    
//    
//    
//    return 0;
//}
