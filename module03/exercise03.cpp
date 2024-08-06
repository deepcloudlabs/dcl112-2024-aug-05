#include <iostream>
#include "vehicle.h"
using namespace std;

int main() {
    // c++11: uniform initializtion
    siemens::vehicle v1{8'000}; // constructor
    int x = 42;
    int y{42};
    // arrays
    int numbers[] = {4, 8, 15, 16, 23, 42}; // stack
    cout << hex << numbers << endl;     // address
    int *q = numbers;
    cout << dec << *(q+0) << endl; // 4
    cout << q[0] << endl;   // 4
    cout << *(q+3) << endl; // 16
    cout << q[3] << endl;   // 16
    // a pointer in stack
    int *p;
    p = new int[6]{4, 8, 15, 16, 23, 42}; // heap
    cout << hex << p << endl;     // address
    cout << dec << *p << endl;     // 4
    cout << *(p+0) << endl; // 4
    cout << p[0] << endl;   // 4
    cout << *(p+3) << endl; // 16
    cout << p[3] << endl;   // 16
    delete []p;
    return 0;
}
