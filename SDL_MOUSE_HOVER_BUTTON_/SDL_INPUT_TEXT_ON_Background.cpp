//#include <SDL2/SDL.h>
//#include <SDL2_ttf/SDL_ttf.h>
//#include <SDL2_image/SDL_image.h>
//#include <stdio.h>
//#include <string>
//#include <iostream>
//#include <cmath>
//using namespace std;
//
////Screen dimension constants
//const int SCREEN_WIDTH = 640;
//const int SCREEN_HEIGHT = 480;
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
//    //Creates image from font string
//    bool loadFromRenderedText( std::string textureText, SDL_Color textColor );
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
//    void render( int x, int y, SDL_Rect* clip = NULL, double angle = 0.0, SDL_Point* center = NULL, SDL_RendererFlip flip = SDL_FLIP_NONE );
//    
//    //Gets image dimensions
//    int getWidth();
//    int getHeight();
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
////Globally used font
//TTF_Font *gFont = NULL;
//
////Rendered texture
//LTexture gTextTexture;
//
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
//bool LTexture::loadFromRenderedText( std::string textureText, SDL_Color textColor )
//{
//    //Get rid of preexisting texture
//    free();
//    
//    //Render text surface
//    SDL_Surface* textSurface = TTF_RenderText_Solid( gFont, textureText.c_str(), textColor );
//    if( textSurface == NULL )
//    {
//        printf( "Unable to render text surface! SDL_ttf Error: %s\n", TTF_GetError() );
//    }
//    else
//    {
//        //Create texture from surface pixels
//        mTexture = SDL_CreateTextureFromSurface( gRenderer, textSurface );
//        if( mTexture == NULL )
//        {
//            printf( "Unable to create texture from rendered text! SDL Error: %s\n", SDL_GetError() );
//        }
//        else
//        {
//            //Get image dimensions
//            mWidth = textSurface->w;
//            mHeight = textSurface->h;
//        }
//        
//        //Get rid of old surface
//        SDL_FreeSurface( textSurface );
//    }
//    
//    //Return success
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
//void LTexture::render( int x, int y, SDL_Rect* clip, double angle, SDL_Point* center, SDL_RendererFlip flip )
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
//    SDL_RenderCopyEx( gRenderer, mTexture, clip, &renderQuad, angle, center, flip );
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
//        gWindow = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
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
//                
//                //Initialize SDL_ttf
//                if( TTF_Init() == -1 )
//                {
//                    printf( "SDL_ttf could not initialize! SDL_ttf Error: %s\n", TTF_GetError() );
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
//    //Open the font
//    gFont = TTF_OpenFont("Xanadu.ttf", 14 );
//  
//    
//    if( gFont == NULL )
//    {
//        printf( "Failed to load lazy font! SDL_ttf Error: %s\n", TTF_GetError() );
//        success = false;
//    }
//    else
//    {
//        //Render text
//        SDL_Color textColor = { 0, 0, 0 };
//        if( !gTextTexture.loadFromRenderedText( "The quick brown fox jumps over the lazy dog", textColor ) )
//        {
//            printf( "Failed to render text texture!\n" );
//            success = false;
//        }
//    }
//    
//    return success;
//}
//
//void close()
//{
//    //Free loaded images
//    gTextTexture.free();
//    
//    //Free global font
//    TTF_CloseFont( gFont );
//    gFont = NULL;
//    
//    //Destroy window	
//    SDL_DestroyRenderer( gRenderer );
//    SDL_DestroyWindow( gWindow );
//    gWindow = NULL;
//    gRenderer = NULL;
//    
//    //Quit SDL subsystems
//    TTF_Quit();
//    IMG_Quit();
//    SDL_Quit();
//}
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
//        
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
//                }
//                
//                //Clear screen
//                SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );
//                SDL_RenderClear( gRenderer );
//                
//                //Render current frame
//                gTextTexture.render( ( SCREEN_WIDTH - gTextTexture.getWidth() ) / 2, ( SCREEN_HEIGHT - gTextTexture.getHeight() ) / 2 );
//                
//                //Update screen
//                SDL_RenderPresent( gRenderer );
//            }
//        }
//    }
//    
//    //Free resources and close SDL
//    close();
//    
//    return 0;
//}
//
//
////
////
/////*This source code copyrighted by Lazy Foo' Productions (2004-2013)
//// and may not be redistributed without written permission.*/
////
////
//////Screen attributes
////const int SCREEN_WIDTH = 640;
////const int SCREEN_HEIGHT = 480;
////const int SCREEN_BPP = 32;
////
//////The surfaces
////SDL_Surface *background = NULL;
////SDL_Surface *message = NULL;
////SDL_Surface *screen = NULL;
////
//////The event structure
////SDL_Event event;
////
//////The font that's going to be used
////TTF_Font *font = NULL;
////
//////The color of the font
////SDL_Color textColor = { 255, 255, 255 };
////
////SDL_Surface *load_image( std::string filename )
////{
////    //The image that's loaded
////    SDL_Surface* loadedImage = NULL;
////    
////    //The optimized surface that will be used
////    SDL_Surface* optimizedImage = NULL;
////    
////    //Load the image
////    loadedImage = IMG_Load( filename.c_str() );
////    
////    //If the image loaded
////    if( loadedImage != NULL )
////    {
////        //Create an optimized surface
////        optimizedImage = SDL_DisplayFormat( loadedImage );
////        
////        //Free the old surface
////        SDL_FreeSurface( loadedImage );
////        
////        //If the surface was optimized
////        if( optimizedImage != NULL )
////        {
////            //Color key surface
////            SDL_SetColorKey( optimizedImage, SDL_SRCCOLORKEY, SDL_MapRGB( optimizedImage->format, 0, 0xFF, 0xFF ) );
////        }
////    }
////    
////    //Return the optimized surface
////    return optimizedImage;
////}
////
////void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination, SDL_Rect* clip = NULL )
////{
////    //Holds offsets
////    SDL_Rect offset;
////    
////    //Get offsets
////    offset.x = x;
////    offset.y = y;
////    
////    //Blit
////    SDL_BlitSurface( source, clip, destination, &offset );
////}
////
////bool init()
////{
////    //Initialize all SDL subsystems
////    if( SDL_Init( SDL_INIT_EVERYTHING ) == -1 )
////    {
////        return false;
////    }
////    
////    //Set up the screen
////    screen = SDL_SetVideoMode( SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_SWSURFACE );
////    
////    //If there was an error in setting up the screen
////    if( screen == NULL )
////    {
////        return false;
////    }
////    
////    //Initialize SDL_ttf
////    if( TTF_Init() == -1 )
////    {
////        return false;
////    }
////    
////    //Set the window caption
////    SDL_WM_SetCaption( "TTF Test", NULL );
////    
////    //If everything initialized fine
////    return true;
////}
////
////bool load_files()
////{
////    //Load the background image
////    background = load_image( "background.png" );
////    
////    //Open the font
////    font = TTF_OpenFont( "lazy.ttf", 28 );
////    
////    //If there was a problem in loading the background
////    if( background == NULL )
////    {
////        return false;
////    }
////    
////    //If there was an error in loading the font
////    if( font == NULL )
////    {
////        return false;
////    }
////    
////    //If everything loaded fine
////    return true;
////}
////
////void clean_up()
////{
////    //Free the surfaces
////    SDL_FreeSurface( background );
////    SDL_FreeSurface( message );
////    
////    //Close the font that was used
////    TTF_CloseFont( font );
////    
////    //Quit SDL_ttf
////    TTF_Quit();
////    
////    //Quit SDL
////    SDL_Quit();
////}
////
////int main( int argc, char* args[] )
////{
////    //Quit flag
////    bool quit = false;
////    
////    //Initialize
////    if( init() == false )
////    {
////        return 1;
////    }
////    
////    //Load the files
////    if( load_files() == false )
////    {
////        return 1;
////    }
////    
////    //Render the text
////    message = TTF_RenderText_Solid( font, "The quick brown fox jumps over the lazy dog", textColor );
////    
////    //If there was an error in rendering the text
////    if( message == NULL )
////    {
////        return 1;
////    }
////    
////    //Apply the images to the screen
////    apply_surface( 0, 0, background, screen );
////    apply_surface( 0, 150, message, screen );
////    
////    //Update the screen
////    if( SDL_Flip( screen ) == -1 )
////    {
////        return 1;
////    }
////    
////    //While the user hasn't quit
////    while( quit == false )
////    {
////        //While there's events to handle
////        while( SDL_PollEvent( &event ) )
////        {
////            //If the user has Xed out the window
////            if( event.type == SDL_QUIT )
////            {
////                //Quit the program
////                quit = true;
////            }
////        }
////    }
////    
////    //Free surfaces and font then quit SDL_ttf and SDL
////    clean_up();
////    
////    return 0;
////}
////
////
////
//////Screen dimension constants
////const int SCREEN_WIDTH = 500;
////const int SCREEN_HEIGHT = 500;
////
//////The font that's going to be used
////TTF_Font *font = NULL;
////SDL_Surface *message = NULL;
////SDL_Surface *screen = NULL;
////
//////The color of the font
////SDL_Color textColor = { 255, 255, 255 };
////
////
////
////
//////Texture wrapper class
////class LTexture
////{
////public:
////    //Initializes variables
////    LTexture();
////
////    //Deallocates memory
////    ~LTexture();
////
////    //Loads image at specified path
////    bool loadFromFile( std::string path );
////
////    //Deallocates texture
////    void free();
////
////    //Set color modulation
////    void setColor( Uint8 red, Uint8 green, Uint8 blue );
////
////    //Set blending
////    void setBlendMode( SDL_BlendMode blending );
////
////    //Set alpha modulation
////    void setAlpha( Uint8 alpha );
////
////    //Renders texture at given point
////    void render( int x, int y, SDL_Rect* clip = NULL );
////
////    //Gets image dimensions
////    int getWidth();
////    int getHeight();
////    void setWidth(int);
////    void setheight(int);
////
////private:
////    //The actual hardware texture
////    SDL_Texture* mTexture;
////
////    //Image dimensions
////    int mWidth;
////    int mHeight;
////};
////
//////Starts up SDL and creates window
////bool init();
////
//////Loads media
////bool loadMedia();
////
//////Frees media and shuts down SDL
////void close();
////
//////The window we'll be rendering to
////SDL_Window* gWindow = NULL;
////
//////The window renderer
////SDL_Renderer* gRenderer = NULL;
////
//////Images
////LTexture gBackground;
////LTexture img1;
//////LTexture gBluePawn;
//////LTexture gGreenPawn;
//////LTexture gYellowPawn;
////
////LTexture::LTexture()
////{
////    //Initialize
////    mTexture = NULL;
////    mWidth = 0;
////    mHeight = 0;
////}
////
////LTexture::~LTexture()
////{
////    //Deallocate
////    free();
////}
////
////bool LTexture::loadFromFile( std::string path )
////{
////    //Get rid of preexisting texture
////    free();
////
////    //The final texture
////    SDL_Texture* newTexture = NULL;
////
////    //Load image at specified path
////    SDL_Surface* loadedSurface = IMG_Load( path.c_str() );
////    if( loadedSurface == NULL )
////    {
////        printf( "Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError() );
////    }
////    else
////    {
////        //Color key image
////        SDL_SetColorKey( loadedSurface, SDL_TRUE, SDL_MapRGB( loadedSurface->format, 0, 0xFF, 0xFF ) );
////
////        //Create texture from surface pixels
////        newTexture = SDL_CreateTextureFromSurface( gRenderer, loadedSurface );
////        if( newTexture == NULL )
////        {
////            printf( "Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );
////        }
////        else
////        {
////            //Get image dimensions
////            mWidth = loadedSurface->w;
////            mHeight = loadedSurface->h;
////        }
////
////        //Get rid of old loaded surface
////        SDL_FreeSurface( loadedSurface );
////    }
////
////    //Return success
////    mTexture = newTexture;
////    return mTexture != NULL;
////}
////
////void LTexture::free()
////{
////    //Free texture if it exists
////    if( mTexture != NULL )
////    {
////        SDL_DestroyTexture( mTexture );
////        mTexture = NULL;
////        mWidth = 0;
////        mHeight = 0;
////    }
////}
////
////void LTexture::setColor( Uint8 red, Uint8 green, Uint8 blue )
////{
////    //Modulate texture rgb
////    SDL_SetTextureColorMod( mTexture, red, green, blue );
////}
////
////void LTexture::setBlendMode( SDL_BlendMode blending )
////{
////    //Set blending function
////    SDL_SetTextureBlendMode( mTexture, blending );
////}
////
////void LTexture::setAlpha( Uint8 alpha )
////{
////    //Modulate texture alpha
////    SDL_SetTextureAlphaMod( mTexture, alpha );
////}
////
////void LTexture::render( int x, int y, SDL_Rect* clip )
////{
////    //Set rendering space and render to screen
////    SDL_Rect renderQuad = { x, y, mWidth, mHeight };
////
////    //Set clip rendering dimensions
////    if( clip != NULL )
////    {
////        renderQuad.w = clip->w;
////        renderQuad.h = clip->h;
////    }
////
////    //Render to screen
////    SDL_RenderCopy( gRenderer, mTexture, clip, &renderQuad );
////}
////
////int LTexture::getWidth()
////{
////    return mWidth;
////}
////
////int LTexture::getHeight()
////{
////    return mHeight;
////}
////
////void LTexture::setWidth( int width)
////{
////    mWidth = width;
////}
////void LTexture::setheight(int height)
////{
////    mHeight = height;
////}
////
////
////int main( int argc, char* args[] )
////{
////    //Start up SDL and create window
////    if( !init() )
////    {
////        printf( "Failed to initialize!\n" );
////    }
////    else
////    {
////        //Load media
////        if( !loadMedia() )
////        {
////            printf( "Failed to load media!\n" );
////        }
////        else
////        {
////            //Main loop flag
////            bool quit = false;
////
////            //Event handler
////            SDL_Event e;
////           
////      
////            
////            
////
////            //While application is running
////            while( !quit )
////            {
////                //Handle events on queue
////                while( SDL_PollEvent( &e ) != 0 )
////                {
////                    //User requests quit
////                    if( e.type == SDL_QUIT )
////                    {
////                        quit = true;
////                    }
////                }
////
////                //Clear screen
////                SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );
////                SDL_RenderClear( gRenderer );
////
////                gBackground.setWidth(500);
////                gBackground.setheight(500);
////                //Render background
////                gBackground.render( 0, 0, NULL );
////
//////                //Render image
////                img1.setWidth(img1.getWidth());
////                img1.setheight(img1.getHeight());
////                img1.render( 233, 225, NULL );
////
////                
////                
////                //Render the text
////                message = TTF_RenderText_Solid( font, "The quick brown fox jumps over the lazy dog", textColor );
////                SDL_Texture *Message = SDL_CreateTextureFromSurface(gRenderer, message);
////                SDL_RenderCopy(gRenderer, Message, NULL, NULL);
////                
////                
////                //If there was an error in rendering the text
////                if( message == NULL )
////                {
////                    return 1;
////                }
////                
////                //Apply the images to the screen
//////                apply_surface( 0, 0, gBackground, screen );
//////                apply_surface( 0, 150, message, screen );
//////                
//////                //Update the screen
//////                if( SDL_Flip( screen ) == -1 )
//////                {
//////                    return 1;    
//////                }
////
////                //Update screen
////                SDL_RenderPresent( gRenderer );
////
////            }
////        }
////    }
////
////    //Free resources and close SDL
////    close();
////
////    return 0;
////}
////bool init()
////{
////    //Initialization flag
////    bool success = true;
////    
//// 
////    //Initialize SDL
////    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
////    {
////        printf( "SDL could not initialize! SDL Error: %s\n", SDL_GetError() );
////        success = false;
////    }
////    else
////    {
////        //Set texture filtering to linear
////        if( !SDL_SetHint( SDL_HINT_RENDER_SCALE_QUALITY, "1" ) )
////        {
////            printf( "Warning: Linear texture filtering not enabled!" );
////        }
////
////        //Create window
////        gWindow = SDL_CreateWindow( "Ne Se Syrdi Choveche", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
////        if( gWindow == NULL )
////        {
////            printf( "Window could not be created! SDL Error: %s\n", SDL_GetError() );
////            success = false;
////        }
////        else
////        {
////            //Create vsynced renderer for window
////            gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC );
////            if( gRenderer == NULL )
////            {
////                printf( "Renderer could not be created! SDL Error: %s\n", SDL_GetError() );
////                success = false;
////            }
////            else
////            {
////                //Initialize renderer color
////                SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );
////
////                //Initialize SDL_ttf
////                if( TTF_Init() == -1 )
////                {
////                    return false;
////                }
////            
////                
////                //Initialize PNG loading
////                int imgFlags = IMG_INIT_PNG;
////                if( !( IMG_Init( imgFlags ) & imgFlags ) )
////                {
////                    printf( "SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError() );
////                    success = false;
////                }
////            }
////        }
////    }
////
////    return success;
////}
////
////bool loadMedia()
////{
////    //Loading success flag
////    bool success = true;
////
////    //Load sprite sheet texture
////    if( !gBackground.loadFromFile( "moon3.jpg" ) )
////    {
////        printf( "Failed to load texture!\n" );
////        success = false;
////    }
////
////    if( !img1.loadFromFile( "alienware.png" ) )
////    {
////        printf( "Failed to load texture!\n" );
////        success = false;
////    }
////
////    //Open the font
////    font = TTF_OpenFont("Lazy.ttf", 12);
////    
////    //If there was an error in loading the font
////    if( font == NULL )
////    {
////        return false;
////    }
////
////    return success;
////}
////
////void close()
////{
////
////    gBackground.free();
////    img1.free();
////
////
////    //Destroy window
////    SDL_DestroyRenderer( gRenderer );
////    SDL_DestroyWindow( gWindow );
////    gWindow = NULL;
////    gRenderer = NULL;
////
////    SDL_FreeSurface( message );
////    
////    //Close the font that was used
////    TTF_CloseFont( font );
////    
//// 
////    
////    //Quit SDL subsystems
////    TTF_Quit();
////    IMG_Quit();
////    SDL_Quit();
////}
////
