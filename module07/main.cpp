#include <iostream>
#include <random>

using namespace std;

struct square {
    int edge;

    explicit square(int edge) : edge(edge) {}

    // 2. declare polymorphic methods as virtual
    virtual int area() { // polymorphic
        cout << "square::area()" << endl;
        return edge * edge;
    }
};

struct cube : public square { // 1. there are inherited classes
    explicit cube(int edge) : square(edge) {}

    int area() {
        cout << "cube::area()" << endl;
        return 6 * edge * edge;
    }

};

int main() {
    // 1. base -> square -> pointer
    square *p;
    square sq{10};
    cube cb{20};
    random_device rd;
    uniform_int_distribution<int> uniform_dist(1, 6);
    if (uniform_dist(rd)>3) {
        cout << "head" << endl;
        p = &sq;
    } else {
        cout << "tail" << endl;
        p = &cb;
    }
                             // late-binding -> runtime
    auto computed_area = p->area(); // 3. call polymorphic methods over a pointer
    cb.area(); // statically bind
    sq.area(); // statically bind
    cout << "computed area is " << computed_area << endl;
    cout << sizeof(square) << endl;
    cout << sizeof(cube) << endl;
    return 0;
}
