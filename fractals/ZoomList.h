//
// Created by htafer on 21.02.19.
//

#include "Zoom.h"
#include <vector>
#include <utility>
#ifndef FRACTALS_ZOOMLIST_H
#define FRACTALS_ZOOMLIST_H


class ZoomList {
private:
    int m_width{0};
    int m_height{0};
    double m_xCenter{0};
    double m_yCenter{0};
    double m_scale{1};
    std::vector<Zoom> zooms;

public:
    ZoomList (int width, int height);
    void add(const Zoom &zoom);
    std::pair<double, double>  doZoom(int x, int y);
};


#endif //FRACTALS_ZOOMLIST_H
