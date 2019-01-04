#include <iostream>
#include <iomanip>
#include <math.h>
#include <random>
#include "SDL.h"
#include "Screen.h"
#include "Particle.h"
#include "Swarm.h"
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <ctime>

using namespace std;
using namespace caveofprogramming;


int main () {


    srand((unsigned)time(NULL));

    std::srand(std::time(nullptr));
    int elapsed;
    Screen screen1;
    //Check if initialisation went fine
    if (!screen1.init()) {
        screen1.close();
    };


    Swarm swarm;
    swarm.init();
    //swarm.init_explosion(0.1, Screen::SCREEN_WIDTH/2, Screen::SCREEN_HEIGHT/2);


    //Init random number generator
/*    std::random_device rd;     // only used once to initialise (seed) engine
    std::mt19937 rng(rd());    // random-number engine used (Mersenne-Twister in this case)
    //random number generator for
    std::uniform_int_distribution<int> horizontal(0,Screen::SCREEN_WIDTH-1); // guaranteed unbiased
    std::uniform_int_distribution<int> vertical(0,Screen::SCREEN_HEIGHT-1); // guaranteed unbiased


    Particle *particles = new Particle[max_particle];

    for(int i=0; i<max_particle; i++){
        particles[i].init(horizontal(rng), vertical(rng), 0,0,0,255,0,0,0);
    }


*/

    while (true) {
        //screen1.clear();
        elapsed=SDL_GetTicks();

        swarm.update(elapsed);
        const Particle * const pParticles = swarm.getParticles();
        unsigned char green =  (unsigned char) ((1 + sin(elapsed * 0.0001)) * 128);
        unsigned char red =    (unsigned char) ((1 + sin(elapsed * 0.0002)) * 128);
        unsigned char blue =   (unsigned char) ((1 + sin(elapsed * 0.0003)) * 128);

        for(int i=0; i<Swarm::NPARTICLE; i++){
            int x = (int) ((pParticles[i].m_x +1)/2 *Screen::SCREEN_WIDTH);
            int y = (int) ((pParticles[i].m_y +1)/2 *Screen::SCREEN_HEIGHT);
            //cout << x << ":" << y << endl;
            screen1.setPixel(x,y, red,green,blue);
            //screen1.setPixel(0,0,255,0,0);
        }

        /*elapsed = SDL_GetTicks();






        unsigned char green = (unsigned char) ((1+sin(elapsed*0.001))*128);

        for(int i=0; i<max_particle; i++){
            screen1.setPixel(particles[i].m_x, particles[i].m_y, particles[i].m_r, particles[i].m_g, particles[i].m_b);
        }


        */
        if (!screen1.processEvents()) {
            break;
        }
        screen1.boxBlur();
        screen1.update();
    }
    screen1.close();




    return 0;
}


/*


    //  Allocate pixel buffer;

    Uint32 *buffer = new Uint32[SCREEN_WIDTH*SCREEN_HEIGHT];
    //Write pixel information in the buffer.
    //Set everything to white
    memset(buffer, 0xFF0000FF, SCREEN_WIDTH*SCREEN_HEIGHT*sizeof(Uint32));
    memset(buffer, 0xFF0000FF, SCREEN_WIDTH*SCREEN_HEIGHT*sizeof(Uint32));

    //for(int i=0; i< SCREEN_HEIGHT*SCREEN_WIDTH; i++){
    //    buffer[i]=0xFF0000FF;
    //}
    SDL_Quit();
    return 0;
}
 */