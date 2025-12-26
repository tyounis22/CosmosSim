//
// Created by Tareq Younis on 25/12/2025.
//

#include "Particle.h"

//parametrized constructor.
Particle::Particle(Vector3 position, Vector3 velocity, double mass) {
    this->position = position;
    this->velocity = velocity;
    this->mass = mass;
    this->acceleration = Vector3(0, 0, 0);
}

void Particle::applyForce(Vector3 force) {
    //F = ma -> a = F / m
    Vector3 f = force.scale(1.0/ mass);
    this->acceleration = this->acceleration.add(f);
}

void Particle::update(double dt) {
    //update velocity with respect to acceleration changes
    velocity = velocity.add(acceleration.scale(dt));
    //update position
    position = position.add(velocity.scale(dt));
    //reset the acceleration so forces don't perpetually accumulate
    acceleration = Vector3(0, 0, 0);
}



