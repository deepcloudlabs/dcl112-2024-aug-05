#include <iostream>
#include "Animal.h"
#include "Fish.h"
#include "Cat.h"
#include "Spider.h"

using namespace zoo;

int main() {
    Animal *zoo_animals[]{
            new Spider,
            new Cat,
            new Fish,
            new Spider,
            new Cat("garfield"),
            new Fish("jaws")
    };
    cout << typeid(Pet).name() << endl;
    for (Animal *animal: zoo_animals) {
        animal->walk();
        animal->eat();
        cout << typeid(*animal).name() << endl;
        Pet *pet = dynamic_cast<Pet *>(animal);
        if (typeid(*animal) == typeid(Cat)) {
            cout << "we have one cat in the zoo!" << endl;
        }
        if (pet != nullptr) {
            pet->play();
        }
    }
    for (Animal *animal: zoo_animals)
        delete animal;
    return 0;
}
