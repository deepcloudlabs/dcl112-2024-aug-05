#include <iostream>
#include <vector>

using namespace std;
int solution = 0; // global variable -> data

int main() {
    vector<int> numbers{4, 8, 15, 16, 23, 42};
    // imperative programming: procedural programming, oop, aop, ...
    // algorithm -> implement -> solution
    for (const auto &number: numbers) { // external loop
        if (number % 2 == 0) {
            auto cubed = number * number * number;
            solution += cubed;
        }
    }
    // print solution to the console
    cout << "solution is " << solution << endl;
    // solution is 78760
    return 0;
}
