//
//  Show_Png_At_Position_and_Size.cpp
//  SDL_MOUSE_EVENTS
//
//  Created by Pepi on 6/6/17.
//  Copyright © 2017 Pepi. All rights reserved.
//

#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
using namespace std;


#define WIDTH 1024
#define HEIGHT 768
#define IMG_PATH "beach.jpg"
#define IMG_PATH1 "Chess.jpg"

int main (int argc, char *argv[]) {
    
    
    
    SDL_Window *win = NULL;
    SDL_Renderer *renderer = NULL;
    SDL_Texture *img = NULL;
    SDL_Texture *imgNew = NULL;
    int w, h;
 
    // izrqzva parchence ot poslednata kartinka // podavame go render copy vmesto NULL//
    SDL_Rect rect1 ;
    rect1.x = 110;
    rect1.y = 110;
    rect1.w = 110;
    rect1.h = 110;
 
    ////////////////

    
    
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
        return 1;
    
    win = SDL_CreateWindow("Image Loading", 110, 110, WIDTH, HEIGHT, 0);
    renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
    
    img = IMG_LoadTexture(renderer, IMG_PATH);
    SDL_QueryTexture(img, NULL, NULL, &w, &h);
    
    SDL_Rect texr; texr.x = 20 ; texr.y = 20; texr.w = 200; texr.h = 200;
    
    SDL_RenderClear(renderer);
    
    SDL_RenderCopy(renderer, img, NULL, &texr);
    
    SDL_RenderPresent(renderer);
    
    
    
    
    while (1) {
        int counter ;
        
        
        SDL_Event e;
        if ( SDL_PollEvent(&e) ) {
            if (e.type == SDL_QUIT)
                break;
            else if (e.type == SDL_MOUSEBUTTONDOWN)
            {
                cout << "Mouse press"<<endl;
                counter++;
                cout << counter<<endl;
                int x_ ;
                int y_ ;
                
                SDL_GetMouseState(&x_, &y_);
                cout <<counter<< "Times " << endl ;
                cout << "position x -> " <<x_<<endl;
                cout <<" position y -> " <<y_<<endl;
                
                if (x_ >= 20 && x_ <= 220 && y_ >= 20 && y_ <= 220 && counter == 1 )
                {
                
                    // clear image ; load new image with x ,y ;
                    
                    SDL_DestroyTexture(img);
                    imgNew = IMG_LoadTexture(renderer, IMG_PATH);
                    SDL_QueryTexture(imgNew, NULL, NULL, &w, &h);
                    
                    SDL_Rect texr; texr.x = 40; texr.y = 40; texr.w = 200; texr.h = 200;
                    
                    SDL_RenderClear(renderer);
                    
                    SDL_RenderCopy(renderer, imgNew, NULL, &texr);
                    SDL_RenderPresent(renderer);
                    
                }
                
                if (x_ >= 40 && x_ <= 240 && y_ >= 40 && y_ <= 240 && counter == 2 )
                {
                    SDL_DestroyTexture(img);
                    imgNew = IMG_LoadTexture(renderer, IMG_PATH);
                    SDL_QueryTexture(imgNew, NULL, NULL, &w, &h);
                    
                    SDL_Rect texr; texr.x = 40; texr.y = 40; texr.w = 100; texr.h = 100;
                    
                    SDL_RenderClear(renderer);
                    
                    SDL_RenderCopy(renderer, imgNew, NULL, &texr);
                    SDL_RenderPresent(renderer);
                }
                if (x_ >= 40 && x_ <= 240 && y_ >= 40 && y_ <= 240 && counter == 3 )
                {
                    SDL_DestroyTexture(img);
                    imgNew = IMG_LoadTexture(renderer, IMG_PATH);
                    SDL_QueryTexture(imgNew, NULL, NULL, &w, &h);
                    
                    SDL_Rect texr; texr.x = 100; texr.y = 100; texr.w = 110; texr.h = 110;
                    
                    SDL_RenderClear(renderer);
                    
                    SDL_RenderCopy(renderer, imgNew, NULL, &texr);
                    SDL_RenderPresent(renderer);
                    
                }
                if (x_ >= 40 && x_ <= 240 && y_ >= 40 && y_ <= 240 && counter == 4 )
                {
                    SDL_DestroyTexture(img);
                    imgNew = IMG_LoadTexture(renderer, IMG_PATH);
                    SDL_QueryTexture(imgNew, NULL, NULL, &w, &h);
                    
                    SDL_Rect texr; texr.x = 100; texr.y = 100; texr.w = 110; texr.h = 110;
                    
                    SDL_RenderClear(renderer);
                    
                    SDL_RenderCopy(renderer, imgNew, &rect1, &texr);
                    SDL_RenderPresent(renderer);
                    
                }
                if (x_ >= 40 && x_ <= 240 && y_ >= 40 && y_ <= 240 && counter == 5 )
                {
                    SDL_DestroyTexture(img);
                    imgNew = IMG_LoadTexture(renderer, IMG_PATH);
                    SDL_QueryTexture(imgNew, NULL, NULL, &w, &h);
                    
                    
                    SDL_Rect texr; texr.x = 200; texr.y = 200; texr.w = 110; texr.h = 110;
                    
                    SDL_RenderClear(renderer);
                    
                    SDL_RenderCopy(renderer, imgNew, NULL, &texr);
                    SDL_RenderPresent(renderer);
                    
                    
                }

                
            }
            
        }
        
    }
    
    SDL_DestroyTexture(img);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(win);
    
    return 0;
}
//
//int main(int argc, char ** argv)
//{
//    bool quit = false;
//    SDL_Event event;
//
//    SDL_Init(SDL_INIT_VIDEO);
//
//    SDL_Window * window = SDL_CreateWindow("SDL2 Displaying Image",20, 20, 640, 480, 0);
//
//    SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);
//    SDL_Surface * image = IMG_Load("Frame1.png");
//    SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer, image);
//
//    while (!quit)
//    {
//        SDL_WaitEvent(&event);
//
//        switch (event.type)
//        {
//            case SDL_QUIT:
//                quit = true;
//                break;
//        }
//
//        SDL_Rect dstrect = { 5, 5, 200, 200 };
//        SDL_RenderCopy(renderer, texture, NULL, &dstrect);
//   //     SDL_RenderCopy(renderer, texture, NULL, NULL);
//        SDL_RenderPresent(renderer);
//    }
//
//    SDL_DestroyTexture(texture);
//    SDL_FreeSurface(image);
//    SDL_DestroyRenderer(renderer);
//    SDL_DestroyWindow(window);
//
//    SDL_Quit();
//
//    return 0;
//}
