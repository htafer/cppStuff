//
// Created by htafer on 21.02.19.
//

#ifndef FRACTALS_RGB_H
#define FRACTALS_RGB_H


struct RGB {
    double m_red;
    double m_blue;
    double m_green;
    RGB (double r, double g , double b);
    RGB operator-(const RGB &rgb);
    virtual ~RGB ();
};


#endif //FRACTALS_RGB_H
