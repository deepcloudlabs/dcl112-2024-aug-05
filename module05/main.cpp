#include <iostream>

using namespace std;

class A {
    int x;
public:
    explicit A(int to_x = 10) : x(to_x) {
        cout << "A::A(int)" << endl;
    }

    A(A &other) { // copy constructor
        this->x = other.x;
        cout << "A(A &other)" << endl;
    }

    A &operator=(A &other) {
        cout << "operator=(A &other)" << endl;
        this->x = other.x;
        return other;
    }

    A operator+(A &other) {
        cout << "operator+(A &other)" << endl;
        return A{this->x + other.x};
    }

    A operator+(int x) {
        cout << "operator+(int x)" << endl;
        return A{this->x + x};
    }

    A operator-() {
        cout << "operator-()" << endl;
        return A{-this->x};
    }

    A operator++() { // pre
        cout << "operator++()" << endl;
        this->x++;
        return A{this->x};
    }

    A operator++(int) { // post
        cout << "operator++(int)" << endl;
        auto temp = this->x;
        this->x++;
        return A{temp};
    }

    A operator()(int u = 5, int v = 10) {
        cout << "operator()(int,int)" << endl;
        return A(u * this->x + v);
    }

    int operator[]() {
        return this->x;
    }

    A operator[](int i) {
        return A{this->x / i};
    }

    friend ostream &operator<<(ostream &os, A a);
};

// global function
ostream &operator<<(ostream &os, A a) {
    os << a.x << endl;
    return os;
}

int main() {
    A a1(42);
    A a2;
    // A a3 = 108; // casting: int -> A, error after explicit
    // A a5 = {42}; // error after explicit
    A a4{108};
    A a6 = a2; // copy constructor
    a6 = a4; // assignment operator
    a2 = a4;
    a1 = a2;
    a1 = a2 = a4;
    A a7 = a1 + a2; // a1.operator+(a2)
    A a8 = a4 + 100; // a1.operator+(100)
    A a9 = -a2; // a2.operator-()
    A a10 = ++a2; // pre-increment
    A a11 = a2++; // post-increment
    A a12 = a1();
    A a13 = a1(3);
    A a14 = a1(3, 5);
    cout << a14[] << endl;
    cout << a14[100](10) << endl;
    return 0;
}
