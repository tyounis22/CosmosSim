#include <iostream>
#include "Particle.h"

using namespace std;

int main() {
    Vector3 initialPosition = Vector3(0,10,0);
    Vector3 initialVelocity = Vector3(2, 0, 0);
    double initialMass = 1.0;

    Particle p(initialPosition, initialVelocity, initialMass);

    double dt = 1.0; //simulate 1 second per step

    for (int i = 0; i < 10; i++) {
        cout << "Time: " << i << endl;
        cout << " | Position: " << p.position.x << ", " << p.position.y << ", " << p.position.z << endl;

        p.update(dt);
    }
    return 0;
}