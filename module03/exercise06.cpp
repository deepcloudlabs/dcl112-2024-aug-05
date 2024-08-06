#include <iostream>
#include "vehicle.h"
using namespace std;

void fun(siemens::vehicle *vehicles, int nov) {

}

int main() {
    // c++11: uniform initializtion
    int number_of_vehicles = 5;
    siemens::vehicle *vehicles = new siemens::vehicle[number_of_vehicles]{
        {10'000},
        {20'000},
        {30'000},
        {},
        {40'000}
    }; // sequencial order
    // 10000,0,20000,0,30000,0,5000,0,40000,0 -> cpu cache
    for (siemens::vehicle *vp = vehicles; vp < vehicles + number_of_vehicles; vp++) {
        cout << hex << vp << endl;
        vp->load_box(5'000);
    }
    for (siemens::vehicle *vp = vehicles; vp < vehicles + number_of_vehicles; vp++) {
        cout << "load of vehicle is " << vp->get_weight() << endl;
    }
    cout << dec << sizeof(*vehicles) << endl ;
    delete[] vehicles;
    return 0;
}
