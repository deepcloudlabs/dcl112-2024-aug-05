#include "Animal.h"
#include <iostream>
using namespace std;

void zoo::Animal::walk() {
    cout << "Animal with "
         << legs
         << " legs is walking now..."
         << endl;
}