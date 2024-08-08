#include <deque>
#include <vector>
#include <iostream>

using namespace std;

struct Box;
struct Circle;

struct Shape_processing {
    virtual void process(const Box &) const {}

    virtual void process(const Circle &) const {}
};

struct Shape {
    virtual void apply(const Shape_processing &) const = 0;
};

struct Box : Shape {
    void apply(const Shape_processing &o) const override { o.process(*this); }
};

struct Circle : Shape {
    void apply(const Shape_processing &o) const override { o.process(*this); }
};

class Shapes {
    deque<Box> m_boxes;
    deque<Circle> m_circles;
    vector<Shape *> m_shape_sequence;

    template<class T>
    struct Type_ref_ {
    };

    auto storage_for(Type_ref_<Box>) -> auto & { return m_boxes; }

    auto storage_for(Type_ref_<Circle>) -> auto & { return m_circles; }

public:
    template<class Shape_kind>
    auto add_()
    -> Shapes & {
        auto &storage = storage_for(Type_ref_<Shape_kind>());
        storage.push_back({});    // No invalidation for `deque`.
        m_shape_sequence.push_back(&storage.back());
        return *this;
    }

    void apply_in_sequence(const Shape_processing &processing) const {
        for (const Shape *const p_shape: m_shape_sequence) {
            p_shape->apply(processing);
        }
    }
};

struct Processing : Shape_processing {
    void process(const Box &) const override { cout << "Displaying a box.\n"; }

    void process(const Circle &) const override { cout << "Displaying a circle.\n"; }
};

auto main() -> int {
    Shapes shapes;
    shapes
            .add_<Circle>()
            .add_<Circle>()
            .add_<Box>();
    shapes.apply_in_sequence(Processing());
}