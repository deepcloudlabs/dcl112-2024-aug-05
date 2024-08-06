#include <iostream>
using namespace std;

class A {
    int data;

public:
    A() {
        // default constructor!
        this->data = 0;
        cout << "A::A()" << endl;
    }

    A(int data) {
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
    A a();
    A b{100};
    A c;
    A aa[5]{42,108};
    A *p = new A;
    A *q = new A();
    A *r = new A{};
    delete p;
    delete q;
    delete r;
    return 0;
}
