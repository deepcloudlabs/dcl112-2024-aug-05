#include <iostream>

void fun(); // declaration

void fun() {
    // definition
    int a = 0; // created once
    // int i=0;
    for (int i = 0; i < 100; i++) {
        // i is created once
        // i is declared in for loop
        a++;
        int p = 12; // Declaration of p
        p++;
        std::cout << "p: " << p << std::endl;
    } // i is destroyed when we exit the loop
    // error: 'i' was not declared in this scope
    // std::cout << "i: " << i << std::endl;
    std::cout << "a: " << a << std::endl;
} // a destroyed!

int main() {
    fun();
    return 0;
}
