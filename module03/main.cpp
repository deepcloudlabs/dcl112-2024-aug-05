#include <iostream>
using namespace std;

namespace siemens {
    class vehicle {
    private:
        //  members: i. attribute ii. method
        // attributes -> private -> information hiding principles
        double capacity; // kg
        double weight; // kg
        // access modifiers: private, public, protected
    public:
        // methods
        // 1. Constructors
        vehicle(double capacity = 5'000) {
            this->capacity = capacity;
            this->weight = 0;
        }

        // 2. Destructor
        ~vehicle() {
            cout << "vehicle::~vehicle()" << endl;
        }

        // 3. business methods
        bool load_box(double box_weight) {
            // business rule: regulations
            if (this->weight + box_weight > this->capacity)
                return false;
            this->weight += box_weight;
            return true;
        }

        bool unload_box(double box_weight) {
            // validation
            if (box_weight > this->weight)
                return false;
            this->weight -= box_weight;
            return true;
        }
        // 4. getter methods
        double get_weight() {
            return this->weight;
        }
        double get_capacity() {
            return this->capacity;
        }
    };
}

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
