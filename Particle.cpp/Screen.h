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
         static const int SCREEN_WIDTH= 800;
         static const int SCREEN_HEIGHT= 600;

    private:
        SDL_Window* m_window;
        SDL_Renderer* m_renderer;
        SDL_Texture* m_texture;
        Uint32* m_buffer;

    public:

        Screen ();
        bool init();
        bool processEvents();
        void close();

    };
}

#endif //PARTICLE_CPP_SCREEN_H
