#include <iostream>
#include <random>

using namespace std;

struct shape { // abstract class
    virtual int area() const = 0; // pure virtual method
    virtual void draw() const = 0;
};

struct square : public shape {
    int edge;

    explicit square(int edge) : edge(edge) {}

    // 2. declare polymorphic methods as virtual
    int area() const override { // polymorphic
        cout << "square::area()" << endl;
        return edge * edge;
    }

    void draw() const override {
        cout << "square(" << edge << ")" << endl;
    }

    virtual ~square() {
        cout << "square::~square()" << endl;
    }
};

struct cube : public shape { // 1. there are inherited classes
    int edge;

    explicit cube(int edge) : edge(edge) {}

    int area() const override {
        cout << "cube::area()" << endl;
        return 6 * edge * edge;
    }

    void draw() const override {
        cout << "square(" << edge << ")" << endl;
    }

    ~cube() {
        cout << "cube::~cube()" << endl;
    }
};

int main() {
    // 1. base -> shape -> pointer
    shape *p;
    square sq{10};
    cube cb{20};
    random_device rd;
    uniform_int_distribution<int> uniform_dist(1, 6);
    if (uniform_dist(rd) > 3) {
        cout << "head" << endl;
        p = &sq;
    } else {
        cout << "tail" << endl;
        p = &cb;
    }
    // late-binding -> runtime
    auto computed_area = p->area(); // 3. call polymorphic methods over a pointer
    cb.area(); // cube::area <-- statically bind
    sq.area(); // square::area <-- statically bind
    cout << "computed area is " << computed_area << endl;
    cout << sizeof(square) << endl;
    cout << sizeof(cube) << endl;
    shape *q;
    if (uniform_dist(rd) > 3) {
        cout << "head -> square" << endl;
        q = new square(100);
    } else {
        cout << "tail -> cube" << endl;
        q = new cube(100);
    }
    cout << "before deleting q..." << endl;
    delete q;
    cout << "after deleting q..." << endl;
    return 0;
}
