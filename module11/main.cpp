#include <iostream>
#include <vector>
#include <parallel/algorithm>

using namespace std;

int main() {
    vector<int> numbers{4,8,15,16,23,42};

    // pointer
    // loop #1: external loop
    for(vector<int>::iterator p = numbers.begin();
        p != numbers.end();
        ++p){
        cout << *p << endl;
    }
    // loop #2: external loop
    for (int i=0;i<numbers.size();++i){
        cout << numbers[i] << endl;
    }
    // loop #3: external loop
    for(int number : numbers){ // for-each since c++11
        cout << number << endl;
    }
    // loop #4: internal loop
    auto print_number = [](int u){cout << u << endl;};
    for_each(numbers.begin(),numbers.end(),print_number);

    return 0;
}
