//
// Created by htafer on 21.02.19.
//

#ifndef FRACTALS_MANDELBROT_H
#define FRACTALS_MANDELBROT_H


class Mandelbrot {
private:
    int m_iteration{0};
public:
    Mandelbrot ();
    virtual ~Mandelbrot ();
public:
    static const int MAX_ITERATIONS{1000};
    static int getIterations(double x, double y);
private:

};


#endif //FRACTALS_MANDELBROT_H
