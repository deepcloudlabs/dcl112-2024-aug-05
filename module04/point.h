//
// Created by binku on 8/6/2024.
//

#ifndef POINT_H
#define POINT_H

#include <iostream>

using namespace std;


class point {
    int x, y;
    const int z;
public:
    explicit point(int x, int y = 0, int z = 0) : x(x), z(z) {
        this->y = y;
        cout << "point(" << x << "," << y << ")" << endl;
    }

    point(point &other) : z(other.z) {
        this->x = other.x;
        this->y = other.y;
    }

    [[maybe_unused]] void move(int to_x, int to_y);
};


#endif //POINT_H
