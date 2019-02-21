//
// Created by htafer on 21.02.19.
//

#ifndef FRACTALS_ZOOM_H
#define FRACTALS_ZOOM_H


struct Zoom {


    //coordinates of the zoom
    int x{0};
    int y{0};
    //scale
    double scale{0.0};
    Zoom(int x, int y, double scale) : x(x), y(y), scale(scale){}

};


#endif //FRACTALS_ZOOM_H
