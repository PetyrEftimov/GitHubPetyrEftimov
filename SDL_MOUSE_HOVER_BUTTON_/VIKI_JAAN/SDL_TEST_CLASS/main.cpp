////
////  main.cpp
////  SDL_TEST_CLASS
////
////  Created by Pepi on 6/8/17.
////  Copyright © 2017 Pepi. All rights reserved.
////
//
//#include <iostream>
//#include <SDL2/SDL.h>
//#include <SDL2_image/SDL_image.h>
//#include <iostream>
//#include <vector>
//#include <string>
//#include "BaseGameObject.hpp"
//#include "Constants.hpp"
//using namespace std;
// vector<BaseGameObject> v_baseGameObjs;
//vector<string> v_picNames;
//struct GridCoord
//{
//    int x;
//    int y;
//};
//BaseGameObject pic1;
//BaseGameObject pic2;
//BaseGameObject pic3;
//BaseGameObject pic4;
//BaseGameObject pic5;
//BaseGameObject pic6;
//
//
//// Function to load media, require SDL_Window and SDL_Renderer passed in
//bool loadMedia(SDL_Window* window, SDL_Renderer* renderer)
//{
//    
//    // Set successful load to true
//    bool success = true;
//    
//    
//   
//        v_baseGameObjs.push_back(pic1);
//        v_baseGameObjs.push_back(pic2);
//        v_baseGameObjs.push_back(pic3);
//        v_baseGameObjs.push_back(pic4);
//        v_baseGameObjs.push_back(pic5);
//        v_baseGameObjs.push_back(pic6);
//    
//    
//    v_picNames.push_back("moon2.jpg");
//    v_picNames.push_back("moon3.jpg");
//    v_picNames.push_back("moon4.jpg");
//    v_picNames.push_back("moon6.jpg");
//    v_picNames.push_back("moon6.jpg");
//    v_picNames.push_back("moon4.jpg");
//    
//    for (int i = 0 ; i < v_baseGameObjs.size(); i++)
//    {
//        pic1.loadFromFile("moon2.jpg", renderer);
//        v_baseGameObjs.at(i).loadFromFile(v_picNames.at(i), renderer);
//            
////            success = false;
// //           cout << "Error oading image"<<i<<endl;
//
//        
//    //    if (success)
//            
//   //     {
//            cout << "success";
//            
//            v_baseGameObjs.at(i).setWidth(PIECE_WIDTH);
//            v_baseGameObjs.at(i).setHeight(PIECE_HEIGHT);
//            v_baseGameObjs.at(i).setPosition((PIECE_WIDTH + GRID_X_OFFSET)*i, SCREEN_HEIGHT/2);
//            
//       // }
////        SDL_RenderCopy(renderer, v_baseGameObjs.at(i).getTexture(), NULL, NULL);
////        SDL_RenderPresent(renderer);
////        
////        SDL_Delay(100);
//    }
//    
//    
//    
//
//  
//    
//    //iterate over vector
//    //for each element setWidth
//    //for each element setHeight
//    //for each element setposition
//    
//    
//    
//    
//    // Load files, if any failed to load, change successful to fail
////    if (!pic1.loadFromFile("moon2.jpg", renderer))
////    {
////        cout << "Failed to load grid" << endl;
////        success = false;
////    }
////    
////    if (!pic2.loadFromFile("moon3.jpg", renderer))
////    {
////        cout << "Failed to load circle" << endl;
////        success = false;
////    }
////    
////    if (!pic3.loadFromFile("moon4.jpg", renderer))
////    {
////        cout << "Failed to load cross" << endl;
////        success = false;
////    }
////    
////    if (!pic4.loadFromFile("moon6.jpg", renderer))
////    {
////        cout << "Failed to new game button" << endl;
////        success = false;
////    }
////    
////    if (!pic5.loadFromFile("moon6.jpg", renderer))
////    {
////        cout << "Failed to quit button" << endl;
////        success = false;
////    }
////    if (!pic6.loadFromFile("moon4.jpg", renderer))
////    {
////        cout << "Failed to load grid" << endl;
////        success = false;
////    }
////    
////    // If successful
////    if (success)
////    {
////        //set pics size
////        pic1.setWidth(PIECE_WIDTH);
////        pic1.setHeight(PIECE_HEIGHT);
////        
////        pic2.setWidth(PIECE_WIDTH);
////        pic2.setHeight(PIECE_HEIGHT);
////        
////        pic3.setWidth(PIECE_WIDTH);
////        pic3.setHeight(PIECE_HEIGHT);
////        
////        pic4.setWidth(PIECE_WIDTH);
////        pic4.setHeight(PIECE_HEIGHT);
////        
////        pic5.setWidth(PIECE_WIDTH);
////        pic5.setHeight(PIECE_HEIGHT);
////        
////        
////        // Set the pics position
//////        pic2.setPosition(PIECE_WIDTH + GRID_X_OFFSET, PIECE_HEIGHT + GRID_Y_OFFSET);
//////        pic3.setPosition((PIECE_WIDTH + GRID_X_OFFSET)*2, (PIECE_HEIGHT + GRID_Y_OFFSET)*2);
//////        pic4.setPosition((PIECE_WIDTH + GRID_X_OFFSET)*3, (PIECE_HEIGHT + GRID_Y_OFFSET)*3);
//////        pic5.setPosition((PIECE_WIDTH + GRID_X_OFFSET)*4, (PIECE_HEIGHT + GRID_Y_OFFSET)*4);
////
////        pic1.setPosition((PIECE_WIDTH + GRID_X_OFFSET)*0, SCREEN_HEIGHT/2);
////        pic2.setPosition(PIECE_WIDTH + GRID_X_OFFSET*1, SCREEN_HEIGHT/2);
////        pic3.setPosition((PIECE_WIDTH + GRID_X_OFFSET)*2, SCREEN_HEIGHT/2);
////        pic4.setPosition((PIECE_WIDTH + GRID_X_OFFSET)*3, SCREEN_HEIGHT/2);
////        pic5.setPosition((PIECE_WIDTH + GRID_X_OFFSET)*4, SCREEN_HEIGHT/2);
////        
////        
////        
////        pic6.setWidth(PIECE_WIDTH);
////        pic6.setHeight(PIECE_HEIGHT);
////        pic6.setPosition(0, SCREEN_HEIGHT/2);
////           
////    
////    
////        cout << "Success";
////    }
////    else {
////        cout << "Not success";
////    }
//    
//    
//   return success;
//}
//bool isClickInPicture(BaseGameObject picture,  GridCoord currentCoord)
//{
//    bool click = false;
//   
//    
//    if (currentCoord.x >= picture.getX() && currentCoord.x <= picture.getX() + picture.getWidth()
//        && currentCoord.y >= picture.getY() && currentCoord.y <= picture.getY() + picture.getHeight())
//    {
//        click = true;
//    }
//   
//    
//   
//    return click;
//}
//
//
//int main(int argc, const char * argv[])
//{
//    // Initialise SDL Sub systems
//    SDL_Init(SDL_INIT_VIDEO);
//    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1");
//    IMG_Init(IMG_INIT_PNG);
//    
//    // Initialise SDL Window and Renderer
//    SDL_Window* window = NULL;
//    SDL_Renderer* renderer = NULL;
//    
//    window = SDL_CreateWindow("Template SDL", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
//                              SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
//    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
//    if (loadMedia(window, renderer))
//    {
//        
//        int currentX = 0;
//        int currentY = 0;
//        
//        bool isPlaying = true;
//        
//        bool isClickInPic = false;
//        bool showPic1OnSecondClick = false;
//        
//        // main game loop
//        while (isPlaying)
//        {
//            // Handle events
//            SDL_Event e;
//            
//            
//            
//            while (SDL_PollEvent(&e) != 0)
//            {
//                int counter = 0;
//                
//                // Quit event
//                if (e.type == SDL_QUIT)
//                {
//                    isPlaying = false;
//                }
//                // Mouse left down, set the mouse down coordinates
//                if (e.type == SDL_MOUSEBUTTONDOWN )
//                {
//                     //count Mouse Click
//                    counter++;
//                    
//                    currentX = e.button.x;
//                    currentY = e.button.y;
//                    GridCoord currentCord;
//                    currentCord.x = currentX;
//                    currentCord.y = currentY;
//                    
//                    cout << currentX << endl ;
//                    cout << currentY << endl;
//                    cout << counter << endl;
//                    
//                
//                    if ( counter % 2 != 0 )
//                    {
//                        isClickInPic = isClickInPicture(pic1, currentCord);
//                    }
//                    if ( counter % 2 == 0 )
//                    {
//                        showPic1OnSecondClick = true;
//                    }
//                
//                    
//                    
//                    
//                }
//           
//            }
//            
//        
//            // Render
//            SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 0x00);
//            SDL_RenderClear(renderer);
//            
//            // Render grid
//            for (int i = 0; i < 6; i++)
//            {
//                v_baseGameObjs.at(i).render(renderer);
//            }
////            pic1.render(renderer);
////            pic2.render(renderer);
////            pic3.render(renderer);
////            pic4.render(renderer);
////            pic5.render(renderer);
////            
//            
//            if (isClickInPic == true)
//            {
//                pic6.render(renderer);
//            }
//            
//            if(showPic1OnSecondClick == true)
//            {
//                pic1.render(renderer);
//
//            }
//            
//            
//            SDL_RenderPresent(renderer);
//        }
//    }
//
//    SDL_DestroyRenderer(renderer);
//    SDL_DestroyWindow(window);
//    
//    renderer = NULL;
//    window = NULL;
//    
//    IMG_Quit();
//    SDL_Quit();
//   
//
//    
//    return 0;
//}
