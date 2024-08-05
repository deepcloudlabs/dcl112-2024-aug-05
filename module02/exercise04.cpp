#include <iostream>
using namespace std;
#define kare(x) ((x)*(x))
#define kare2(x) (x*x)
inline int sq(int x) {
    return x*x;
}
int main() {
    int u = 3, v = 5;

    cout << kare(u+v) << endl;
    cout << kare2((u+v)) << endl;
    cout << sq(u+v) << endl;
    return 0;
}
