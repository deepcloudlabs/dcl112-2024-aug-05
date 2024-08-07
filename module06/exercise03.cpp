#include <iostream>

using namespace std;

struct C {
    int x;

    C(int to_x) : x(to_x) {
        cout << "C::C(" << to_x << ")" << endl;
    }

    void fun(double x) {
        cout << "C::fun(double)" << endl;
    }

    ~C() {
        cout << "C::~C()" << endl;
    }
};

struct A {
    int x;
    C c;

    A(int to_x) : c(to_x * to_x), x(to_x) {
        cout << "A::A(" << to_x << ")" << endl;
    }

    ~A() {
        cout << "A::~A()" << endl;
    }

    void fun() {
        cout << "A::fun()" << endl;
    }
};

struct B : public A {
    int x;

    B(int to_x) : A(3 * to_x), x(to_x) {
        cout << "B::B(" << to_x << ")" << endl;
    }

    ~B() {
        cout << "B::~B()" << endl;
    }

    void fun(bool b) {
        cout << "B::fun(bool)" << endl;
    }
};

// B -> A(C)
int main() {

    B b(2); // C() -> A() -> B()
    // Destructor? ~B() -> ~A() -> ~C()
    return 0;
}
