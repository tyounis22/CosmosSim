//
// Created by Tareq Younis on 25/12/2025.
//

#include "Particle.h"

//parametrized constructor.
Particle::Particle(Vector3 position, Vector3 velocity, double mass) {
    this->position = position;
    this->velocity = velocity;
    this->mass = mass;
}

void Particle::update(double dt) {
    this->position = this->position.add(velocity.scale(dt));
}



