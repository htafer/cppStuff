#include <iostream>
#include "SDL.h"
#include "Screen.h"

using namespace std;
using namespace caveofprogramming;


int main () {
    Screen screen1;
    //Check if initialisation went fine
    if (!screen1.init()) {
        screen1.close();
    };

    while (true) {
        if (!screen1.processEvents())
            break;
    }
    screen1.close();




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