////
////  main.cpp
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
//using namespace std;
//
//
//SDL_Window  *WindowPtr = NULL ;
//SDL_Surface *surfacePtr = NULL ;
//SDL_MouseButtonEvent *mousePtr = NULL;
//
//bool initVideo();
//
//int main(int argc,const char* argv[])
//{
//    
//    int counter = 0 ;
//    
//    initVideo();
//    
//    SDL_Event event ;
//    
//    bool exit = true ;
//    while (exit == true)
//    {
//        while (SDL_PollEvent(&event) != 0)
//        {
//            if (event.type == SDL_QUIT)
//            {
//                exit = false;
//            }
//            else if (event.type == SDL_MOUSEBUTTONDOWN)
//            {
//                cout << "Mouse press"<<endl;
//                counter++;
//                cout << counter<<endl;
//                int x ;
//                int y ;
//            
//                SDL_GetMouseState(&x, &y);
//                cout <<counter<< "Times " << endl ;
//                cout << "position x -> " <<x<<endl;
//                cout <<" position y -> " <<y<<endl;
//                
//            }
//        }
//    }
//    
//    
//
//    
//    
//    
//    return 0 ;
//}
//
//
//
//
//
//
//
//
//bool  initVideo ()
//{
//    bool verify = true ;
//    if (SDL_Init(SDL_INIT_VIDEO) < 0 ) {
//        cerr << "Texture problem ";
//        verify = false ;
//    }
//    else
//    {
//        WindowPtr = SDL_CreateWindow("pepi", 0, 0, 640, 480, SDL_WINDOW_SHOWN);
//        if (WindowPtr == NULL)
//        {
//            cerr << "problem to create the window";
//            verify = false;
//        }
//        else
//        {
//            surfacePtr = SDL_GetWindowSurface(WindowPtr);
//        }
//        
//    }
//    return verify;
//}


