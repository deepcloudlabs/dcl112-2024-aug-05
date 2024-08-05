#include <iostream>

using namespace std;

int z = 42; // global variable -> Data, Value-Typed
int u = 108; // global variable

void fun() {
    // global function -> Text
    z++;
}

int main() {
    // global function -> Text
    int x = 42; // local variable -> Stack
    int *q; // local variable -> Stack, pointer: *, address
    q = &z;
    z++; // z -> 43
    cout << *q << endl;
    cout << q[0] << endl;
    cout << hex << q << endl;
    q++; // q = q + 4
    cout << hex << q << endl;
    cout << dec << *q << endl;
    q += 1'000'000;
    cout << dec << *q << endl;

}
