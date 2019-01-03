#include <iostream>
#include <iomanip>
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


    //Bit shift
    unsigned char alpha=0xFF;
    unsigned char red=0x12;
    unsigned char blue=0x34;
    unsigned char green=0x56;

    unsigned int color = 0;
    color+=alpha;
    //color = 000000ff
    color<<=8;
    //color = 0000ff00
    color+=red;
    //color = 0000ff12
    color<<=8;
    //color = 00ff1200
    color+=blue;
    color<<=8;
    //color = ff123400
    color+=green;
    //color <<=24;

    cout << setfill('0') << setw(8) << hex << color << endl;

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