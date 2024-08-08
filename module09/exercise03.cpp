#include <iostream>
#include <vector>
#include <ranges>

using namespace std;
auto is_even = [](int u){
    cout << "[is_even] " << u << endl;
    return u%2 == 0;
};

auto to_cube = [](int u){
    cout << "[to_cube] " << u << endl;
    return u*u*u;
};

int main() {
    vector<int> numbers{4, 8, 15, 16, 23, 42};
    for (auto number : numbers | ranges::views::filter(is_even)
                               | ranges::views::transform(to_cube)){
        cout << "[for loop]: " << number << endl;
    }
    // filter/map/reduce in js
    // numbers.filter(u => u%2 == 0).map(u => u*u*u).reduce((acc,u) => acc+u, 0)
    return 0;
}