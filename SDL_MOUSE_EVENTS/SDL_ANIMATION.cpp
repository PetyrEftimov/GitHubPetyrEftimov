////
////  SDL_ANIMATION.cpp
////  SDL_MOUSE_EVENTS
////
////  Created by Pepi on 6/6/17.
////  Copyright © 2017 Pepi. All rights reserved.
////
//
//#include <stdio.h>
//#include <SDL2/SDL.h>
//#include <SDL2_image/SDL_image.h>
//#include <stdio.h>
//#include <string>
//#include <iostream>
//#include <vector>
//using namespace std;
//
//SDL_Window  *WindowPtr = NULL ;
//SDL_Surface *surfacePtr = NULL ;
////SDL_Renderer *rendererPtr = NULL ;
//SDL_Surface  *png1 = NULL;
//SDL_Surface  *png2 = NULL;
//SDL_Surface  *png3 = NULL;
//SDL_Surface  *png4 = NULL;
//SDL_Surface  *png5 = NULL;
//SDL_Surface  *png6 = NULL;
//SDL_Surface  *png7 = NULL;
//SDL_Surface  *png8 = NULL;
//SDL_Surface  *png9 = NULL;
//SDL_Surface  *png10 = NULL;
//SDL_Surface  *png11 = NULL;
//SDL_Surface  *png12 = NULL;
//vector<SDL_Surface *> v_myVector ;
//
//
//bool initVideo();
//
//SDL_Surface *loadImage(string path);
//
//
//
//
//
//int main (int argc,const char* argv[])
//
//{
//    
//    initVideo();
//    
//    png1 = loadImage("Frame1.png");
//    png2 = loadImage("frame2.png");
//    png3 = loadImage("frame3.png");
//    png4 = loadImage("frame4.png");
//    png5 = loadImage("frame5.png");
//    png6 = loadImage("frame6.png");
//    png7 = loadImage("frame7.png");
//    png8 = loadImage("frame8.png");
//    png9 = loadImage("frame9.png");
//    png10 = loadImage("frame10.png");
//    
//  
//    
//     v_myVector.push_back(png1);
//     v_myVector.push_back(png2);
//     v_myVector.push_back(png3);
//     v_myVector.push_back(png4);
//     v_myVector.push_back(png5);
//     v_myVector.push_back(png6);
//     v_myVector.push_back(png7);
//     v_myVector.push_back(png8);
//     v_myVector.push_back(png9);
//     v_myVector.push_back(png10);
//    
//    
//    for (size_t i = 0 ; i < v_myVector.size(); i++) {
//        SDL_BlitSurface(v_myVector.at(i),NULL,surfacePtr,NULL);
//        SDL_UpdateWindowSurface(WindowPtr);
//        SDL_Delay(100);
//    }
//    for (size_t i = 0 ; i < v_myVector.size(); i++) {
//        SDL_BlitSurface(v_myVector.at(i),NULL,surfacePtr,NULL);
//        SDL_UpdateWindowSurface(WindowPtr);
//        SDL_Delay(100);
//    }
//    for (size_t i = 0 ; i < v_myVector.size(); i++) {
//        SDL_BlitSurface(v_myVector.at(i),NULL,surfacePtr,NULL);
//        SDL_UpdateWindowSurface(WindowPtr);
//        SDL_Delay(100);
//    }
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
//    return 0;
//}
//bool  initVideo ()
//{
//    bool verify = true ;
//    if (SDL_Init(SDL_INIT_VIDEO) < 0 ) {
//        cerr << "Texture problem ";
//        verify = false ;
//    }
//    else
//    {
//        WindowPtr = SDL_CreateWindow("ANIMATION", SDL_HAT_CENTERED,SDL_HAT_CENTERED, 640, 480, SDL_WINDOW_SHOWN);
//        
//        if (WindowPtr == NULL)
//        {
//            cerr << "problem to create the window";
//            verify = false;
//        }
//        else{
//        
//            int pngConvertor = IMG_INIT_PNG;
//            if (!(IMG_Init(pngConvertor)&pngConvertor)) {
//                cerr << "ERROR with FILE";
//            }
//            else
//            {
//                surfacePtr = SDL_GetWindowSurface(WindowPtr);
//            }
//        }
//        
//
//    }
//    return verify;
//}
//
//SDL_Surface *loadImage(string path)
//
//{
//    
//    SDL_Surface *imageReturn = NULL ;
//    SDL_Surface *Path = IMG_Load(path.c_str());
//    if (Path == NULL) {
//        cerr <<"Error 12";
//    }
//    else
//    {
//        imageReturn = SDL_ConvertSurface(Path,surfacePtr -> format, NULL);
//    }
//    if (imageReturn == NULL) {
//        cerr  << "Error Image";
//    }
//    else
//    {
//        SDL_FreeSurface(Path);
//    }
//    return  imageReturn;
//}
