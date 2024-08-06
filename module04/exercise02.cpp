#include <iostream>
using namespace std;
#include "point.h"

int main() {
    point p1{100}; // no argument constructor
    point p2{4};
    point p3{10, 20};
    point my_points[5] {
        {1,2},{3},{4},{5},{100}
    };
    return 0;
}
