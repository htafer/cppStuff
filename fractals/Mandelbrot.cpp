//
// Created by htafer on 21.02.19.
//

#include "Mandelbrot.h"
#include <complex>
using namespace std;
Mandelbrot::Mandelbrot () {}

Mandelbrot::~Mandelbrot () {

}

int Mandelbrot::getIterations (double x, double y) {
    complex<double> z{0,0};
    complex<double> c(x,y);
    int iteration = 0;
    while(iteration < Mandelbrot::MAX_ITERATIONS && z.real()*z.real() + z.imag()*z.imag() < 4){
        z = z*z +c;
        iteration++;
    }

    return iteration;
}
