////
////  SDL_First_My_Test.cpp
////  SDL_TEST_CLASS
////
////  Created by Pepi on 6/15/17.
////  Copyright © 2017 Pepi. All rights reserved.
////
//
//#include <stdio.h>
//#include <SDL2/SDL.h>
//#include <SDL2_image/SDL_image.h>
//#include <stdio.h>
//#include <string>
//#include <stdio.h>
//#include <vector>
//#include "BaseGameObject.hpp"
//using namespace std;
//
//SDL_Window *window;
//const int SCREEN_WIDTH = 320 ;
//const int SCREEN_HIGHT = 320 ;
//SDL_Renderer *renderer;
//SDL_Texture *texture = NULL ;
//SDL_Texture *texturePicture = NULL;
//int x ;
//int y ;
//
//int main()
//{
//    SDL_Init(SDL_INIT_VIDEO);
//    window = SDL_CreateWindow("pepi window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HIGHT, SDL_WINDOW_SHOWN);
//    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
//    SDL_RenderClear(renderer);
//    SDL_Surface * loadSurface = IMG_Load("Chess15.06.png");
//    texture = SDL_CreateTextureFromSurface(renderer, loadSurface);
//    SDL_FreeSurface(loadSurface);
//    SDL_RenderCopy(renderer, texture, NULL, NULL);
//    
//    
//    
//    
//    
//    BaseGameObject pic1;
//    BaseGameObject pic2;
//    BaseGameObject pic3;
//    BaseGameObject pic4;
//    vector<BaseGameObject> v_baseGameObjekt ;
//    v_baseGameObjekt.push_back(pic1);
//    v_baseGameObjekt.push_back(pic2);
//    v_baseGameObjekt.push_back(pic3);
//    v_baseGameObjekt.push_back(pic4);
//    vector<string> v_picNames;
//    v_picNames.push_back("moon1.jpg");
//    v_picNames.push_back("moon2.jpg");
//    v_picNames.push_back("moon3.jpg");
//    v_picNames.push_back("moon4.jpg");
//    int position = 0;
//    for (int i = 0; i < v_baseGameObjekt.size() ; i++)
//    {
//        v_baseGameObjekt.at(i).loadFromFile(v_picNames.at(i), renderer);
//        v_baseGameObjekt.at(i).setWidth(40);
//        v_baseGameObjekt.at(i).setHeight(40);
//        v_baseGameObjekt.at(i).setPosition(position, 0);
//        position = position+40;
//    }
//    
//    
//    
//    
//    
//    int currentX = 0 ;
//    int currentY = 0 ;
//    
//    
//    
//    
//    SDL_Rect prinTo ;
//    
//    bool quit = false ;
//    SDL_Event e ;
//    
//    int counter = 0 ;
//    while (!quit)
//    {
//        while ( SDL_PollEvent(&e) != 0)
//        {
//            if (e.type == SDL_QUIT)
//            {
//                quit = true ;
//            }
//            if (e.type == SDL_MOUSEBUTTONDOWN)
//            {
//                counter++;
//                SDL_GetMouseState(&currentX, &currentY);
//                
//                currentX = e.button.x;
//                currentY = e.button.y;
//                
//                cout << currentX<<endl;
//                cout << currentY<<endl;
//               
//                
//                
//                for (int i = 0; i < v_baseGameObjekt.size() ; i++)
//                {
//                    v_baseGameObjekt.at(i).render(renderer);
//                    
//                }
//                
//                
//                
//            }
//            
//            
//            SDL_RenderPresent(renderer);
//            
//        }
//        
//        
//        
//    }
//    
//    
//    
//    // Mouse left down, set the mouse down coordinates
//    //                if (e.type == SDL_MOUSEBUTTONDOWN )
//    //                {
//    //                     //count Mouse Click
//    //                    counter++;
//    //
//    //                    currentX = e.button.x;
//    //                    currentY = e.button.y;
//    //                    GridCoord currentCord;
//    //                    currentCord.x = currentX;
//    //                    currentCord.y = currentY;
//    //
//    //                    cout << currentX << endl ;
//    //                    cout << currentY << endl;
//    //                    cout << counter << endl;
//    //
//    //
//    //                    if ( counter % 2 != 0 )
//    //                    {
//    //                        isClickInPic = isClickInPicture(pic1, currentCord);
//    //                    }
//    //                    if ( counter % 2 == 0 )
//    //                    {
//    //                        showPic1OnSecondClick = true;
//    //                    }
//    //                
//
//  
//    
//    
//    
//    
//    SDL_RenderCopy(renderer, texture, NULL, NULL);
//    
//    
//    return 0;
//}
//
//
//
//
//
//
//
//
//
