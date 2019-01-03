//
// Created by htafer on 03.01.19.
//

#include "Screen.h"
#include <iostream>

using namespace std;

caveofprogramming::Screen::Screen ()
        : m_window(NULL), m_renderer(NULL), m_texture(NULL),
          m_buffer(NULL) {

}

bool caveofprogramming::Screen::init () {
    //init windows
    if(SDL_Init(SDL_INIT_VIDEO) < 0){
        cout <<  "SDL init failed" << endl;
        return false;
    }
    //Create Window
    m_window = SDL_CreateWindow("Particle Fire",
            SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED,
            SCREEN_WIDTH,
            SCREEN_HEIGHT,
            SDL_WINDOW_SHOWN);
    //Check if windows is created well
    if(m_window==NULL){
        cout << "Could not create the renderer" << endl;
        cout << SDL_GetError() << endl;
        return false;
    }
    //Create renderer
    m_renderer = SDL_CreateRenderer(
            m_window,
            -1,
            SDL_RENDERER_PRESENTVSYNC);
    //Check renderer
    if(m_renderer==NULL){
        cout << SDL_GetError << endl;
        cout << "Could not create the renderer" << endl;
        return false;
    }
    //Create a texture to render
    m_texture = SDL_CreateTexture(m_renderer,
                                             SDL_PIXELFORMAT_RGBA8888,
                                             SDL_TEXTUREACCESS_STATIC,
                                             SCREEN_WIDTH,
                                             SCREEN_HEIGHT );

    if(m_texture==NULL){
        cout << "Could not create the renderer" << endl;
        cout << SDL_GetError() << endl;
    }

    //  Allocate pixel buffer;
    m_buffer = new Uint32[SCREEN_WIDTH*SCREEN_HEIGHT];

    //Write pixel information in the buffer.
    //Set everything to white
    memset(m_buffer, 0xFF0000FF, SCREEN_WIDTH*SCREEN_HEIGHT*sizeof(Uint32));
    //Set background color, for some reason it doesn't work with memset.
    for(int i=0; i< SCREEN_HEIGHT*SCREEN_WIDTH; i++) {
        m_buffer[i] = 0xFF0000FF;
    }

    //Start Initial Render
    //Buffer -> Texture -> Render
    SDL_UpdateTexture(m_texture,NULL,m_buffer,SCREEN_WIDTH*sizeof(Uint32));
    //Clear Renderer
    SDL_RenderClear(m_renderer);
    //Render texture
    SDL_RenderCopy(m_renderer,m_texture,NULL,NULL);
    //Render texture to the window
    SDL_RenderPresent(m_renderer);

    bool quit=false;

    return true;
}







bool caveofprogramming::Screen::processEvents () {
    SDL_Event event;
    bool quit=true;

    while(SDL_PollEvent(&event)) {
        switch (event.type) {
            case SDL_QUIT:
                quit = false;

            case SDL_KEYDOWN:
                switch (event.key.keysym.sym) {
                    case SDLK_q:
                        quit = false;
                        break;
                    default:
                        break;
                }
            default:
                break;
        }
    }
    return quit;

}

void caveofprogramming::Screen::close () {
    //Check if any of the pointer was initialized
    if(m_buffer){
        delete [] m_buffer;
    }
    if(m_texture){
        SDL_DestroyTexture(m_texture);
    }
    if(m_renderer){
        SDL_DestroyRenderer(m_renderer);
    }
    if(m_window){
        SDL_DestroyWindow(m_window);
    }

    SDL_Quit();

}
