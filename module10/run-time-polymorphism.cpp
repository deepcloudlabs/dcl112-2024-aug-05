#include <iostream>
#include <vector>
#include <memory>

using namespace std;

struct Coordinate {
};

class Shape {
public:
    virtual void draw() const = 0;

    virtual Coordinate center_of_gravity() const = 0;
};

class Circle {
public:
    void draw() const {
        cout << "Drawing Circle()..." << endl;
    }

    Coordinate center_of_gravity() const override {
        return Coordinate{};
    }
};

class Line {
public:
    void draw() const {
        cout << "Drawing Line()..." << endl;
    }

    Coordinate center_of_gravity() const {
        return Coordinate{};
    }
};

template<class T>
void draw_shapes(vector<shared_ptr<T>> &shapes) {
    for (const auto &shape: shapes) {
        shape->draw();
        cout << typeid(*shape).name() << endl;
    }
}

int main() {
    vector<shared_ptr<Shape>> my_shapes;
    my_shapes.push_back(make_shared<Line>());
    my_shapes.push_back(make_shared<Circle>());
    my_shapes.push_back(make_shared<Line>());
    my_shapes.push_back(make_shared<Circle>());
    draw_shapes(my_shapes);
    return 0;
}
