#include <iostream>
#include "vehicle.h"
using namespace std;

[[maybe_unused]] void fun([[maybe_unused]] siemens::vehicle *vehicles, [[maybe_unused]] int nov) {

}

int main() {
    // c++11: uniform initialization
    int number_of_vehicles = 5;
    auto *vehicles = new siemens::vehicle[number_of_vehicles]{
        {10'000},
        {20'000},
        {30'000},
        {},
        {40'000}
    }; // sequential order
    // 10000,0,20000,0,30000,0,5000,0,40000,0 -> cpu cache
    for (auto *vp = vehicles; vp < vehicles + number_of_vehicles; vp++) {
        cout << hex << vp << endl;
        vp->load_box(5'000);
    }
    for (auto *vp = vehicles; vp < vehicles + number_of_vehicles; vp++) {
        cout << "load of vehicle is " << vp->get_weight() << endl;
    }
    cout << dec << sizeof(*vehicles) << endl ;
    delete[] vehicles;
    return 0;
}
