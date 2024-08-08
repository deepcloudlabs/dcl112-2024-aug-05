//
// Created by dcl on 8/8/2024.
//

#include "Fish.h"
#include <iostream>

using namespace std;

void zoo::Fish::eat() {
    cout << this->name
         << " is eating now..."
         << endl;
}

string zoo::Fish::getName() {
    return this->name;
}

void zoo::Fish::setName(string name) {
    this->name = name;
}

void zoo::Fish::play() {
    cout << this->name
         << " is playing now..."
         << endl;
}

void zoo::Fish::walk() {
    cout << this->name
         << " is swimming now..."
         << endl;
}