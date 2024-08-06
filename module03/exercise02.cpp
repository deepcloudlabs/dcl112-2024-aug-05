#include <iostream>
#include "vehicle.h"
using namespace std;

// Data
siemens::vehicle v2(12'000); // constructor
// return 0 -> destructor

int main() {
    // object -> Stack -> attributes' size
    siemens::vehicle v1(8'000); // constructor
    std::cout << "current weight of vehicle #1: " << v1.get_weight() << std::endl;
    std::cout << "current weight of vehicle:#2: " << v2.get_weight() << std::endl;
    // Heap
    siemens::vehicle* p; // Stack pointer -> ?
    p = new siemens::vehicle(23'000); // Heap -> constructor
    std::cout << "current weight of vehicle:#3: " << p->get_weight() << std::endl;
    delete p; // destructor
    // destroys all stack objects
    return 0;
}
