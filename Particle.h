//
// Created by Tareq Younis on 25/12/2025.
//
#pragma once
#include "Vector3.h"

class Particle {
public:
    Vector3 position;
    Vector3 velocity;
    Vector3 acceleration;
    double mass;

    //Constructor (parametrized)
    Particle(Vector3 position, Vector3 velocity, double mass);

    void applyForce(Vector3 force);
    //Moves the particle based on the velocity and time.
    void update(double dt);

};



