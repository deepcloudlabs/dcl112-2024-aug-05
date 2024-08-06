#include "vehicle.h"
#include <iostream>
using namespace std;

namespace siemens {
    vehicle::vehicle(const double capacity): capacity(capacity) {
        cout << "vehicle::vehicle(" << this->capacity << ")" << endl;
        this->weight = 0;
    }

    vehicle::~vehicle() {
        cout << "vehicle::~vehicle(" << (this->capacity -  this->weight) << ")" << endl;
    }

    bool vehicle::load_box(const double box_weight) {
        // business rule: regulations
        if (this->weight + box_weight > this->capacity)
            return false;
        this->weight += box_weight;
        return true;
    }

    bool vehicle::unload_box(const double box_weight) {
        // validation
        if (box_weight > this->weight)
            return false;
        this->weight -= box_weight;
        return true;
    }

    // 4. getter methods
    double vehicle::get_weight() const {
        return this->weight;
    }

    double vehicle::get_capacity() const {
        return this->capacity;
    }
}
