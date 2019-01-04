//
// Created by htafer on 03.01.19.
//

#include "Screen.h"
#include <iostream>
#include <iomanip>
using namespace std;

caveofprogramming::Screen::Screen ()
        : m_window(NULL), m_renderer(NULL), m_texture(NULL),
          m_buffer1(NULL), m_buffer2(NULL) {

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
    m_buffer1 = new Uint32[SCREEN_WIDTH*SCREEN_HEIGHT];
    m_buffer2 = new Uint32[SCREEN_WIDTH*SCREEN_HEIGHT];



    //Write pixel information in the buffer.
    //Set everything to white
    memset(m_buffer1, 0x00, SCREEN_WIDTH*SCREEN_HEIGHT*sizeof(Uint32));
    memset(m_buffer2, 0x00, SCREEN_WIDTH*SCREEN_HEIGHT*sizeof(Uint32));

    //Set background color, for some reason it doesn't work with memset.
    for(int i=0; i< SCREEN_HEIGHT*SCREEN_WIDTH; i++) {
        m_buffer1[i] = 0;
        m_buffer2[i] = 0;
    }

    //Start Initial Render
    //Buffer -> Texture -> Render
    SDL_UpdateTexture(m_texture,NULL,m_buffer1,SCREEN_WIDTH*sizeof(Uint32));
    //Clear Renderer
    SDL_RenderClear(m_renderer);
    //Render texture
    SDL_RenderCopy(m_renderer,m_texture,NULL,NULL);
    //Render texture to the window
    SDL_RenderPresent(m_renderer);

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
    if(m_buffer1){
        delete [] m_buffer1;
    }
    if(m_buffer2){
        delete [] m_buffer2;
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

void caveofprogramming::Screen::boxBlur(){
    Uint32 *temp = m_buffer1;
    m_buffer1 = m_buffer2;
    m_buffer2 = temp;
    int delta = 1;
    int deltaSq = (2*delta+1)*(2*delta+1);
    #pragma omp parallel
    for(int y=0; y<SCREEN_HEIGHT; y++) {
        #pragma omp for nowait
        for(int x=0; x<SCREEN_WIDTH; x++) {

            /*
             * 0 0 0
             * 0 1 0
             * 0 0 0
             */

            int redTotal=0;
            int greenTotal=0;
            int blueTotal=0;

            for(int row=-delta; row<=delta; row++) {
                for(int col=-delta; col<=delta; col++) {
                    int currentX = x + col;
                    int currentY = y + row;
                    //if inside the screen
                    if(currentX >= 0 && currentX < SCREEN_WIDTH && currentY >= 0 && currentY < SCREEN_HEIGHT) {
                        Uint32 color = m_buffer2[currentY*SCREEN_WIDTH + currentX];

                        Uint8 red = color >> 24;
                        Uint8 green = color >> 16;
                        Uint8 blue = color >> 8;

                        redTotal += red;
                        greenTotal += green;
                        blueTotal += blue;
                    }
                }
            }

            Uint8 red = redTotal/deltaSq;
            Uint8 green = greenTotal/deltaSq;
            Uint8 blue = blueTotal/deltaSq;

            setPixel(x, y, red, green, blue);
        }
    }
}



void caveofprogramming::Screen::setPixel (int x, int y, int red, int green, int blue) {

    long position_buffer = y*SCREEN_WIDTH + x;
    if(x>=SCREEN_WIDTH | x<0 | y>=SCREEN_HEIGHT | y<0){
        return;
    }
    //Convert RGB  to color. Alpha is set FF by default
    unsigned long alpha = 0;
    unsigned long color = 0;
    //Conversion of RGB to HEX, then bitshifting
    color += ((red & 0xff)<<24);
    color += ((green & 0xff)<<16);
    color += ((blue & 0xff)<<8);
    color += alpha;

    m_buffer1[position_buffer] = color;


    //cout << setfill('0') << setw(8) << hex << color << endl;

    //m_buffer[]
}

void caveofprogramming::Screen::update () {
    SDL_UpdateTexture(m_texture,NULL,m_buffer1,SCREEN_WIDTH*sizeof(Uint32));
    //Clear Renderer
    SDL_RenderClear(m_renderer);
    //Render texture
    SDL_RenderCopy(m_renderer,m_texture,NULL,NULL);
    //Render texture to the window
    SDL_RenderPresent(m_renderer);
}


void caveofprogramming::Screen::clear(){
    memset(m_buffer1, 0, SCREEN_WIDTH*SCREEN_HEIGHT*sizeof(Uint32));

}

