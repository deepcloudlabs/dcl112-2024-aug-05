#include <iostream>
#include "vehicle.h"
using namespace std;


int main() {
    // c++11: uniform initialization
    siemens::vehicle* *vehicles;
    vehicles = new siemens::vehicle*[5]; // no object is created
    vehicles[0] = new siemens::vehicle { 10'000 };
    vehicles[1] = new siemens::vehicle { 20'000 };
    vehicles[2] = new siemens::vehicle { 30'000 };
    vehicles[3] = new siemens::vehicle { 40'000 };
    vehicles[4] = new siemens::vehicle {  };
    for (siemens::vehicle **vp=vehicles;vp < vehicles + 5; vp++) {
        cout << hex << *vp << endl;
        (*vp)->load_box(5'000);
    }
    for (siemens::vehicle **vp=vehicles;vp < vehicles + 5; vp++) {
        cout << "load of vehicle is " << (*vp)->get_weight() << endl ;
    }
    for (siemens::vehicle **vp=vehicles;vp < vehicles + 5; vp++) {
        delete *vp;
    }
    delete[] vehicles;
    return 0;
}
