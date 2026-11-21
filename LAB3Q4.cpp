#include <iostream>
using namespace std;

int main() {
    // Pengisytiharan pembolehubah
    double mass, velocity, kineticEnergy;
    cout << "Input the object's mass (kg): ";
    cin >> mass;
    cout << "Input the object's velocity (m/s): ";
    cin >> velocity;

    kineticEnergy = 0.5 * mass * velocity * velocity;

    cout << "The kinetic energy (Joules): " << kineticEnergy << endl;

    return 0;
}