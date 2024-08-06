#include "point.h"

int main() {
    [[maybe_unused]] point p1{100}; // no argument constructor
    [[maybe_unused]] point p2{4};
    [[maybe_unused]] point p3{10, 20};
    [[maybe_unused]] point my_points[5] {
        point{1,2},point{3},point{4},point{5},point{100}
    };
    return 0;
}
