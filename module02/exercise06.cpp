#include <iostream>

using namespace std;

int u = 108; // global variable:                        0x7ff759ec4000
bool v = true; // global variable -> Data, Value-Typed: 0x7ff759ec4004
int w = true; // global variable -> Data, Value-Typed:  0x7ff759ec4008
double z = 42; // global variable -> Data, Value-Typed: 0x7ff759ec4010


int main() {
    // global function -> Text
    int x = 42; // local variable -> Stack
    double *q; // local variable -> Stack, pointer: *, address
    int *p=&u;
    bool *r=&v;
    q = &z;
    cout << sizeof(p) << endl;
    cout << sizeof(q) << endl;
    cout << sizeof(r) << endl;
    cout << sizeof(*p) << endl; // int* -> 4
    cout << sizeof(*q) << endl; // double* -> 8
    cout << sizeof(*r) << endl; // bool*   -> 1
    cout << hex << p << endl;
    cout << hex << q << endl;
    cout << hex << r << endl;
    p++; // p = p + sizeof(*p)
    q++; // q = q + sizeof(*q)
    r++; // r = r + sizeof(*r)
    cout << hex << p << endl;
    cout << hex << q << endl;
    cout << hex << r << endl;
    return 0;
}
