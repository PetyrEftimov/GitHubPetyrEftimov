//#include <SDL2/SDL.h>
//#include <SDL2_image/SDL_image.h>
//#include <stdio.h>
//#include <string>
//
////Screen dimension constants
//
//#include <string>
//#include <stdio.h>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//
//
//const int SCREEN_WIDTH = 500;
//const int SCREEN_HEIGHT = 500;
//
//vector<SDL_Rect> v_figures_line_1;
//vector<SDL_Rect> v_figures_line_2;
//
//void cropFigures()
//{
//    SDL_Rect tempRect;
//    int xPos = 0 ;
//    int yPos = 10 ;
//    
//    //push first line in vector 1
//    for (int i = 0; i < 1; i++)
//    {
//        xPos = 0 ;
//        for (int i = 0; i < 6; i++)
//        {
//            
//            tempRect.x = xPos;
//            tempRect.y = yPos;
//            tempRect.w = 50.7;
//            tempRect.h = 38.5;
//            v_figures_line_1.push_back(tempRect);
//            xPos += 50.7;
//            
//        }
//        yPos = 38.5;
//    }
//    
//    //push second line in vector 2
//    for (int i = 1; i < 2; i++)
//    {
//        xPos = 0 ;
//        for (int i = 0; i < 6; i++)
//        {
//            
//            tempRect.x = xPos;
//            tempRect.y = yPos;
//            tempRect.w = 50.7;
//            tempRect.h = 38.5;
//            v_figures_line_2.push_back(tempRect);
//            xPos += 50.7;
//            
//        }
//        yPos = 38.5;
//    }
//    
//}
//
//
//
//
////Texture wrapper class
//class LTexture
//{
//public:
//    //Initializes variables
//    LTexture();
//    
//    //Deallocates memory
//    ~LTexture();
//    
//    //Loads image at specified path
//    bool loadFromFile( std::string path );
//    
//    //Deallocates texture
//    void free();
//    
//    //Set color modulation
//    void setColor( Uint8 red, Uint8 green, Uint8 blue );
//    
//    //Set blending
//    void setBlendMode( SDL_BlendMode blending );
//    
//    //Set alpha modulation
//    void setAlpha( Uint8 alpha );
//    
//    //Renders texture at given point
//    void render( int x, int y, SDL_Rect* clip = NULL );
//    
//    //Gets image dimensions
//    int getWidth();
//    int getHeight();
//    void setWidth(int);
//    void setheight(int);
//    
//private:
//    //The actual hardware texture
//    SDL_Texture* mTexture;
//    
//    //Image dimensions
//    int mWidth;
//    int mHeight;
//};
//
////Starts up SDL and creates window
//bool init();
//
////Loads media
//bool loadMedia();
//
////Frees media and shuts down SDL
//void close();
//
////The window we'll be rendering to
//SDL_Window* gWindow = NULL;
//
////The window renderer
//SDL_Renderer* gRenderer = NULL;
//
////Images
//LTexture gBackground;
//LTexture img1;
//LTexture cutImages;
//
////LTexture gBluePawn;
////LTexture gGreenPawn;
////LTexture gYellowPawn;
//
//LTexture::LTexture()
//{
//    //Initialize
//    mTexture = NULL;
//    mWidth = 0;
//    mHeight = 0;
//}
//
//LTexture::~LTexture()
//{
//    //Deallocate
//    free();
//}
//
//bool LTexture::loadFromFile( std::string path )
//{
//    //Get rid of preexisting texture
//    free();
//    
//    //The final texture
//    SDL_Texture* newTexture = NULL;
//    
//    //Load image at specified path
//    SDL_Surface* loadedSurface = IMG_Load( path.c_str() );
//    if( loadedSurface == NULL )
//    {
//        printf( "Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError() );
//    }
//    else
//    {
//        //Color key image
//        SDL_SetColorKey( loadedSurface, SDL_TRUE, SDL_MapRGB( loadedSurface->format, 0, 0xFF, 0xFF ) );
//        
//        //Create texture from surface pixels
//        newTexture = SDL_CreateTextureFromSurface( gRenderer, loadedSurface );
//        if( newTexture == NULL )
//        {
//            printf( "Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );
//        }
//        else
//        {
//            //Get image dimensions
//            mWidth = loadedSurface->w;
//            mHeight = loadedSurface->h;
//        }
//        
//        //Get rid of old loaded surface
//        SDL_FreeSurface( loadedSurface );
//    }
//    
//    //Return success
//    mTexture = newTexture;
//    return mTexture != NULL;
//}
//
//void LTexture::free()
//{
//    //Free texture if it exists
//    if( mTexture != NULL )
//    {
//        SDL_DestroyTexture( mTexture );
//        mTexture = NULL;
//        mWidth = 0;
//        mHeight = 0;
//    }
//}
//
//void LTexture::setColor( Uint8 red, Uint8 green, Uint8 blue )
//{
//    //Modulate texture rgb
//    SDL_SetTextureColorMod( mTexture, red, green, blue );
//}
//
//void LTexture::setBlendMode( SDL_BlendMode blending )
//{
//    //Set blending function
//    SDL_SetTextureBlendMode( mTexture, blending );
//}
//
//void LTexture::setAlpha( Uint8 alpha )
//{
//    //Modulate texture alpha
//    SDL_SetTextureAlphaMod( mTexture, alpha );
//}
//
//void LTexture::render( int x, int y, SDL_Rect* clip )
//{
//    //Set rendering space and render to screen
//    SDL_Rect renderQuad = { x, y, mWidth, mHeight };
//    
//    //Set clip rendering dimensions
//    if( clip != NULL )
//    {
//        renderQuad.w = clip->w;
//        renderQuad.h = clip->h;
//    }
//    
//    //Render to screen
//    SDL_RenderCopy( gRenderer, mTexture, clip, &renderQuad );
//}
//
//int LTexture::getWidth()
//{
//    return mWidth;
//}
//
//int LTexture::getHeight()
//{
//    return mHeight;
//}
//
//void LTexture::setWidth( int width)
//{
//    mWidth = width;
//}
//void LTexture::setheight(int height)
//{
//    mHeight = height;
//}
//
//
//int main( int argc, char* args[] )
//{
//    //Start up SDL and create window
//    if( !init() )
//    {
//        printf( "Failed to initialize!\n" );
//    }
//    else
//    {
//        //Load media
//        if( !loadMedia() )
//        {
//            printf( "Failed to load media!\n" );
//        }
//        else
//        {
//            //Main loop flag
//            bool quit = false;
//            
//            //Event handler
//            SDL_Event e;
//            cropFigures();
//            SDL_Rect prinTo ;
//            
//            //While application is running
//            while( !quit )
//            {
//                //Handle events on queue
//                while( SDL_PollEvent( &e ) != 0 )
//                {
//                    //User requests quit
//                    if( e.type == SDL_QUIT )
//                    {
//                        quit = true;
//                    }
//                    
//                }
//
//                SDL_SetRenderDrawColor( gRenderer, 0xff, 0xff, 0xfF, 0xFF );
//                SDL_RenderClear( gRenderer );
//                
//                
////                SDL_Rect rect1 = v_figures_line_1[0];
////                cutImages.render(0,0, &rect1);
////                
////                
////                
////                SDL_Rect rect2 = v_figures_line_1[1];
////                cutImages.render(20,20, &rect2);
//                
//                for(int i=0; i< v_figures_line_1.size(); i++)
//                {
//                    
//                    
//                    SDL_Rect temp = v_figures_line_1[i];
//                    
//                    cutImages.render(temp.x, temp.y, &temp);
//                    
//                }
//                
//                
//                
//                
//                
//            }
//        }
//    }
//    
//    //Free resources and close SDL
//    close();
//    
//    return 0;
//}
//bool init()
//{
//    //Initialization flag
//    bool success = true;
//    
//    //Initialize SDL
//    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
//    {
//        printf( "SDL could not initialize! SDL Error: %s\n", SDL_GetError() );
//        success = false;
//    }
//    else
//    {
//        //Set texture filtering to linear
//        if( !SDL_SetHint( SDL_HINT_RENDER_SCALE_QUALITY, "1" ) )
//        {
//            printf( "Warning: Linear texture filtering not enabled!" );
//        }
//        
//        //Create window
//        gWindow = SDL_CreateWindow( "Pepi", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
//        if( gWindow == NULL )
//        {
//            printf( "Window could not be created! SDL Error: %s\n", SDL_GetError() );
//            success = false;
//        }
//        else
//        {
//            //Create vsynced renderer for window
//            gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC );
//            if( gRenderer == NULL )
//            {
//                printf( "Renderer could not be created! SDL Error: %s\n", SDL_GetError() );
//                success = false;
//            }
//            else
//            {
//                //Initialize renderer color
//                SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );
//                
//                //Initialize PNG loading
//                int imgFlags = IMG_INIT_PNG;
//                if( !( IMG_Init( imgFlags ) & imgFlags ) )
//                {
//                    printf( "SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError() );
//                    success = false;
//                }
//            }
//        }
//    }
//    
//    return success;
//}
//
//bool loadMedia()
//{
//    //Loading success flag
//    bool success = true;
//    
//    //Load sprite sheet texture
//    if( !gBackground.loadFromFile( "moon4.jpg" ) )
//    {
//        printf( "Failed to load texture!\n" );
//        success = false;
//    }
//    
//    if( !img1.loadFromFile( "alienware.png" ) )
//    {
//        printf( "Failed to load texture!\n" );
//        success = false;
//    }
//    
//    
//    if( !cutImages.loadFromFile( "new.png" ) )
//    {
//        printf( "Failed to load texture!\n" );
//        success = false;
//    }
//    
//    
//    
//    
//    return success;
//}
//
//void close()
//{
//    
//    gBackground.free();
//    img1.free();
//    
//    
//    //Destroy window
//    SDL_DestroyRenderer( gRenderer );
//    SDL_DestroyWindow( gWindow );
//    gWindow = NULL;
//    gRenderer = NULL;
//    
//    //Quit SDL subsystems
//    IMG_Quit();
//    SDL_Quit();
//}
//
//
////#include <SDL2/SDL.h>
////#include <SDL2_image/SDL_image.h>
////#include <stdio.h>
////#include <string>
////#include <stdio.h>
////#include <vector>
////using namespace std;
////SDL_Window * window = NULL;
////const int SCREEN_WIDTH = 320 ;
////const int SCREEN_HEIGHT = 320 ;
////SDL_Renderer  * renderer = NULL;
////SDL_Texture * texture = NULL;
////SDL_Texture * texturFigures = NULL;
//
//
////SDL_Rect prinTo ;
////                for (int i = 0; i < 8 ; i++)
////            {
////                for (int j = 0 ; j < 8; j++)
////                {
////                    prinTo.x = array1[i][j].x;
////                    prinTo.y = array1[i][j].y + 10;
////                    prinTo.h = 40;
////                    prinTo.w = 40;
////                    SDL_RenderCopy(renderer, texturFigures, & v_figures[2], &prinTo);
////                    SDL_RenderPresent(renderer);
////
////                }
//
//
