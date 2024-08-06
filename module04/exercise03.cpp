#include <iostream>
using namespace std;

class A {
    int *p; // pointer
public:
    A() {
        p = new int(42);
    }

    ~A() {
        delete p;
    }

    // Compiler's copy constructor that does shallow copy!
    /*
    A(A& other) {
        p = other.p; // shallow copy
    }
    */

    A(A &other) {
        p = new int(*other.p); // deep copy
    }
};

int main() {
    A a1;
    A a2{a1};
    return 0;
}
