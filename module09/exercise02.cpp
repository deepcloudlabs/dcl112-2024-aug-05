#include <iostream>
#include <vector>
#include <parallel/algorithm>
#include <parallel/numeric>

using namespace std;

int main() {
    vector<int> numbers{4, 8, 15, 16, 23, 42};
    // declarative programming: oop, fp, rp, ...
    // data -> pipeline -> function (HoF) chain -> solution
    vector<int> even_numbers;
    copy_if( // internal loop, HoF
            numbers.begin(),numbers.end(),
            back_inserter(even_numbers),
            [](int u){return u%2 == 0;} // lambda expression since c++11
    );
    vector<int> cubed_numbers;
    transform(
            even_numbers.begin(),even_numbers.end(),
            back_inserter(cubed_numbers),
            [](int u){return u*u*u;} // lambda expression since c++11
    );
    auto solution = accumulate(
            cubed_numbers.begin(),cubed_numbers.end(),
            0,
            [](int acc,int u){return acc+u;}
    );
    // print solution to the console
    cout << "solution is " << solution << endl;
    // solution is 78760
    return 0;
}
