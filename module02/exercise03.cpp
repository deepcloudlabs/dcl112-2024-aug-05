#include <iostream>
using namespace std;
int i = 42; // Data, global variable
int main() {
    static int i = 2; // Data, local variable
    {
        int n = i; // n=2
        int i = 3;
        cout << i << " " << ::i << endl; // 3 42
        cout << n << "\n"; // 2
    }
    cout << i << " " << ::i << endl; // 2 42
    return 0;
}
