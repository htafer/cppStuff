//
// Created by htafer on 03.01.19.
//
#include <random>
#include "Particle.h"
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Particle::init(){

    m_x=0.0;
    m_y=0.0;
    m_speed= ((double) rand()/RAND_MAX) * 0.1;
    m_direction= ((double) rand()/RAND_MAX) * 4*M_PI_2;

    m_speed *= m_speed;

}


void Particle::update (int interval) {
    m_direction += 0.02*rand()/RAND_MAX;
    m_x += m_speed*cos(m_direction);//*interval;
    m_y += m_speed*sin(m_direction);//*interval;


    if(m_x<-1| m_x>=1 | m_y <-1 | m_y>1 | rand()/RAND_MAX > 0.99){
        init();
    }

}

