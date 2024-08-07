#include <iostream>
using namespace std;

struct A {
    int x;
    A(int to_x): x(to_x){}
    void fun(){
        cout << "A::fun()" << endl;
    }
};
struct B : public A {
    int x;
    B(int to_x): A(3*to_x),x(to_x){}
    void fun(bool b){
        cout << "B::fun(bool)" << endl;
    }
};
struct C : public B {
    int x;
    C(int to_x): B(2*to_x),x(to_x){}
    void fun(double x){
        cout << "C::fun(double)" << endl;
    }
};
// C -> B -> A
int main() {
    // C::x = 2, B::x=4, A::x=12
    C c(2);
    std::cout << c.x << std::endl;
    std::cout << c.B::x << std::endl;
    std::cout << c.A::x << std::endl;
    c.fun(3); // C::fun
    c.A::fun(); // A::fun()
    c.B::fun(true); // B::fun
    return 0;
}
