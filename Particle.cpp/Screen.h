//
// Created by htafer on 03.01.19.
//

#ifndef PARTICLE_CPP_SCREEN_H
#define PARTICLE_CPP_SCREEN_H

//SDL class is responsible for everything rendering
#include <iostream>
#include "SDL.h"


namespace caveofprogramming {

    class Screen {
    public:
         static const int SCREEN_WIDTH= 1024;
         static const int SCREEN_HEIGHT= 1024;

    private:
        SDL_Window* m_window;
        SDL_Renderer* m_renderer;
        SDL_Texture* m_texture;
        Uint32* m_buffer1;
        Uint32* m_buffer2;

    public:

        Screen ();
        bool init();
        bool processEvents();
        void close();
        void setPixel(int,int,int,int,int);
        void update();
        void clear();
        void boxBlur();

    };
}

#endif //PARTICLE_CPP_SCREEN_H
