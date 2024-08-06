#include <iostream>
using namespace std;

class A {
    [[maybe_unused]] int data;

public:
    A() {
        // default constructor!
        this->data = 0;
        cout << "A::A()" << endl;
    }

    explicit A(int data) {
        // A(int)
        this->data = data;
        cout << "A::A("<< data << ")" << endl;
    }

    ~A() {
        cout << "A::~A()" << endl;
    }
};

int main() {
    std::cout << sizeof(A) << std::endl;
    A a;
    A b{100};
    A c;
    [[maybe_unused]] A aa[5]{A{42},A{108},A{1},A{2}};
    A *p = new A;
    A *q = new A();
    A *r = new A{};
    delete p;
    delete q;
    delete r;
    return 0;
}
