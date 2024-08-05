#include <iostream>
// Memory: OS/Process -> Heap, Stack, Text, Data
int x = 1; // Global x: Data
int y = 0; // Global y: Data
void fun() {
    // Function is a new block
    int x = 5; // Local  x=5 -> Stack, it hides global x
    // :: -> scope operator
    ::x++; // Global x=2
    x++; // Local x=6
    y++; // Global y=1
    ::y++; // Global y=1
}


int main() {
    fun();
    return 0;
}
