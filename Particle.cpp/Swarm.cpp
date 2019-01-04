//
// Created by htafer on 03.01.19.
//

#include "Swarm.h"
#include <random>
#include <math.h>
#include <stdlib.h>

Swarm::Swarm () : lastTime(0){
    m_pParticles = new Particle[NPARTICLE];
}

Swarm::~Swarm () {
    delete [] m_pParticles;
}

void Swarm::update (int ticks) {

    int interval = ticks - lastTime;

    for(int i=0; i<NPARTICLE; i++) {
        m_pParticles[i].update(interval);
    }
    lastTime = ticks;
}

 void Swarm::init(){
    for(int i=0; i<NPARTICLE; i++){
        m_pParticles[i].init();
    }
}



