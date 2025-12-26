#include <iostream>
#include "Particle.h"

using namespace std;

int main() {
    // Start at height 100, stationary
    Particle rock(Vector3(0, 100, 0), Vector3(0, 0, 0), 1.0);

    double dt = 1.0;
    Vector3 gravity(0, -10, 0); // A constant downward force

    cout << "--- DROPPING ROCK ---" << endl;

    for (int i = 0; i < 6; i++) {
        // 1. Apply Force
        rock.applyForce(gravity);

        // 2. Update Physics
        rock.update(dt);

        // 3. Print
        cout << "Time " << i << " | Height: " << rock.position.y
             << " | Speed: " << rock.velocity.y << endl;
    }
    cout << " I love Yala" << endl;
    return 0;
}