//
// Created by htafer on 21.02.19.
//

#include "RGB.h"

RGB::RGB (double r, double g, double b) : m_red(r), m_green(g), m_blue(b){}

RGB::~RGB () {

}

RGB RGB::operator- (const RGB &rgb) {
    RGB result(m_red, m_green, m_blue);

    result.m_red -= rgb.m_red;
    result.m_green -= rgb.m_green;
    result.m_blue -= rgb.m_blue;

    return result;
}
