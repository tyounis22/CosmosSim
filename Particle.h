//
// Created by Tareq Younis on 25/12/2025.
//
#pragma once
#include "Vec3.h"

class Particle {
public:
    Vec3 position;
    Vec3 velocity;
    Vec3 acceleration;
    double mass;

    //Constructor (parametrized)
    Particle(Vec3 position, Vec3 velocity, double mass);

    void applyForce(Vec3 force);
    //Moves the particle based on the velocity and time.
    void update(double dt);

};



