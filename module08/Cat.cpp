#include "Cat.h"
#include <iostream>

using namespace std;

void zoo::Cat::eat() {
    cout << this->name
         << " is eating now..."
         << endl;
}

string zoo::Cat::getName() {
    return this->name;
}

void zoo::Cat::setName(string name) {
    this->name = name;
}

void zoo::Cat::play() {
    cout << this->name
         << " is playing now..."
         << endl;
}