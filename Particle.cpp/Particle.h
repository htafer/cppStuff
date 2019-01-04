//
// Created by htafer on 03.01.19.
//

#ifndef PARTICLE_CPP_PARTICLE_H
#define PARTICLE_CPP_PARTICLE_H


class Particle {



public:
    //Total number of particles
    //position
    double m_x;
    double m_y;

    double m_speed;
    double m_direction;

    void update(int interval);

    void init();

};


#endif //PARTICLE_CPP_PARTICLE_H
