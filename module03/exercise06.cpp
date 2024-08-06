#include <iostream>
#include "vehicle.h"
using namespace std;


int main() {
    // c++11: uniform initializtion
    siemens::vehicle *vehicles = new siemens::vehicle[5]{
        {10'000},
        {20'000},
        {30'000},
        {},
        {40'000}
    }; // sequencial order
    // 10000,0,20000,0,30000,0,5000,0,40000,0 -> cpu cache
    for (siemens::vehicle *vp = vehicles; vp < vehicles + 5; vp++) {
        cout << hex << vp << endl;
        vp->load_box(5'000);
    }
    for (siemens::vehicle *vp = vehicles; vp < vehicles + 5; vp++) {
        cout << "load of vehicle is " << vp->get_weight() << endl;
    }
    delete[] vehicles;
    return 0;
}
