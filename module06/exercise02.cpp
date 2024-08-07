#include <iostream>
using namespace std;

struct A {
    int x;
    A() = delete;
    A(int to_x): x(to_x){
        cout << "A::A("<< to_x << ")" << endl;
    }
    ~A(){
        cout << "A::~A()" << endl;
    }
    virtual void fun(){
        cout << "A::fun()" << endl;
    }
};
struct B : public A {
    int x;
    B(int to_x): A(42),x(to_x){
        cout << "B::B("<< to_x << ")" << endl;
    }
    ~B(){
        cout << "B::~B()" << endl;
    }
    void fun(bool b){
        cout << "B::fun(bool)" << endl;
    }
};
struct C : public B {
    int x;
    C(int to_x): B(2*to_x),x(to_x){
        cout << "C::C("<< to_x << ")" << endl;
    }
    void fun(double x){
        cout << "C::fun(double)" << endl;
    }
    ~C(){
        cout << "C::~C()" << endl;
    }
};
// C -> B -> A
int main() {
    // A::x=12 -> B::x=4 -> C::x=2
    C c(2); // Stack
    C *p = new C{42}; // Heap
    cout << sizeof(A) << endl; // 16: 8B (VT) + 4B (A::int) + 4B Padding
    cout << sizeof(B) << endl; // 16: 8B (VT) + 4B (A::int) + 4B (B::int)
    cout << sizeof(C) << endl; // 24: 8B (VT)  + 4B (A::int) + 4B (B::int) + 4B (C::int) + 4B (Padding)
    delete p;
    A* q;
    A a{1};
    B b{2};
    q = &a;
    q = &b;
    q = &c;
    B *r;
    r = &b;
    r = &c;
    r->fun(true);
    // error: r = &a;
    C *t;
    t = &c;
    // error: t = &a;
    // error: t = &b;
    cout << sizeof(A) << endl;
    cout << sizeof(B) << endl;
    cout << sizeof(C) << endl;
    return 0;
}
