#include <iostream>
#include "vehicle.h"
using namespace std;
siemens::vehicle global_vehicles[] {
    { 60'000 },
    { 70'000 },
    { 80'000 }
}; // Data Array

int main() {
    // c++11: uniform initializtion
    siemens::vehicle vehicles[] {
        { 10'000 },
        { 20'000 },
        { 30'000 },
        {  },
        { 40'000 }
    }; // constructor
    // 5 vehicle objects are created in the stack!
    // stack -> LIFO
    cout << sizeof(vehicles)/sizeof(siemens::vehicle) << endl;
    return 0;
}
