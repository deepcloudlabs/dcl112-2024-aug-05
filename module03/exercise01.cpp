#include <iostream>
#include "vehicle.h"
using namespace std;

int main() {
    // object -> stack -> attributes' size
    siemens::vehicle v1(8'000);
    std::cout << "current weight of vehicle: " << v1.get_weight() << std::endl;

    std::cout << "size of vehicle: " << sizeof(v1) << std::endl;
    v1.load_box(2'000); // load_box(&v1,2'000);
    std::cout << "current weight of vehicle: " << v1.get_weight() << std::endl;
    v1.load_box(3'000);
    std::cout << "current weight of vehicle: " << v1.get_weight() << std::endl;
    v1.load_box(1'000);
    std::cout << "current weight of vehicle: " << v1.get_weight() << std::endl;
    v1.load_box(1'000);
    std::cout << "current weight of vehicle: " << v1.get_weight() << std::endl;
    v1.load_box(2'000);
    std::cout << "current weight of vehicle: " << v1.get_weight() << std::endl;

    return 0;
}
