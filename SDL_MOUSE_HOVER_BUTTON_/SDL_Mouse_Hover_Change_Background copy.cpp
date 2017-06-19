//
//
//#include <SDL2/SDL.h>
//#include <SDL2_image/SDL_image.h>
//#include <stdio.h>
//#include <string>
//#include <iostream>
//using namespace std;
////Screen dimension constants
//const int SCREEN_WIDTH = 500;
//const int SCREEN_HEIGHT = 500;
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
//LTexture img2;
//LTexture gBackground1;
//LTexture gBackground2;
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
//            int counter = 0 ;
//            int currentX = 0 ;
//            int currentY = 0 ;
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
//                    if (e.type == SDL_MOUSEBUTTONDOWN)
//                    {
//                        counter++;
//                        SDL_GetMouseState(&currentX, &currentY);
//                        currentX = e.button.x;
//                        currentY = e.button.y; 
//                    }
//
//                    if (e.type == SDL_MOUSEMOTION)
//                    {
//                        /* If the mouse is moving to the left */
//                        if (e.motion.xrel < 0)
//                        {
//                           
//                            gBackground1.setWidth(500);
//                            gBackground1.setheight(500);
//                            //Render background
//                              gBackground1.render( 0, 0, NULL );
//                            img1.setWidth(img1.getWidth());
//                            img1.setheight(img1.getHeight());
//                            img1.render( currentX, currentY, NULL );
//                            SDL_RenderPresent( gRenderer );
//                            SDL_RenderClear( gRenderer );
//                            SDL_Delay(500);
//
//                        }
//                        /* If the mouse is moving to the right */
//                        if (e.motion.xrel > 0)
//                        {
//
//                            gBackground2.setWidth(500);
//                            gBackground2.setheight(500);
//                            //Render background
//                            gBackground2.render( 0, 0, NULL );
//                            img1.setWidth(img1.getWidth());
//                            img1.setheight(img1.getHeight());
//                            img1.render( currentX, currentY, NULL );
//                            SDL_RenderPresent( gRenderer );
//                            SDL_RenderClear( gRenderer );
//                            SDL_Delay(500);
//
//                        }
//                        /* If the mouse is moving up */
//                        else if (e.motion.yrel < 0)
//                        {
//                      //     SDL_GetMouseState(&currentX, &currentY);
//
//                        }
//                        /* If the mouse is moving down */
//                        else if (e.motion.yrel > 0)
//                        {
//                       //      SDL_GetMouseState(&currentX, &currentY);
//
//                        }
//
//                    }
//
//                }
//
//                //Clear screen
//                SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );
//                SDL_RenderClear( gRenderer );
//
//                gBackground.setWidth(500);
//                gBackground.setheight(500);
//                //Render background
//                gBackground.render( 0, 0, NULL );
//
//                //                //Render image
//                img1.setWidth(img1.getWidth());
//                img1.setheight(img1.getHeight());
//                img1.render( currentX, currentY, NULL );
//
//
//                //Update screen
//                SDL_RenderPresent( gRenderer );
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
//        gWindow = SDL_CreateWindow( "pepi", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
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
//    if( !gBackground.loadFromFile( "moon3.jpg" ) )
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
//    if( !gBackground1.loadFromFile( "moon4.jpg" ) )
//    {
//        printf( "Failed to load texture!\n" );
//        success = false;
//    }
//    if( !gBackground2.loadFromFile( "moon6.jpg" ) )
//    {
//        printf( "Failed to load texture!\n" );
//        success = false;
//    }
//    if( !img2.loadFromFile( "dot.png" ) )
//    {
//        printf( "Failed to load texture!\n" );
//        success = false;
//    }
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
