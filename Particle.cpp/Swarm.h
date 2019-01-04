//
// Created by htafer on 03.01.19.
//

#ifndef PARTICLE_CPP_SWARM_H
#define PARTICLE_CPP_SWARM_H

#include "Particle.h"
#include <random>


class Swarm {
public:
    static const int NPARTICLE=10000;
private:
    Particle *  m_pParticles;
    int lastTime;

public:
         // only used once to initialise (seed) engine
    Swarm ();

    virtual ~Swarm ();

    const Particle * const getParticles(){
        return m_pParticles;
    }
    void init();

    void update(int interval);
};


#endif //PARTICLE_CPP_SWARM_H
