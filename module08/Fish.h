//
// Created by dcl on 8/8/2024.
//

#ifndef MODULE08_FISH_H
#define MODULE08_FISH_H

#include "Pet.h"
#include "Animal.h"
#include <string>

using namespace std;

namespace zoo {

    class Fish : public Animal, public Pet {
        string name;
    public:
        Fish() : Fish("Free Willy") {}

        Fish(string name) : Animal(0), name(name) {}

        void eat() override;

        string getName() override;

        void setName(string name) override;

        void play() override;

        void walk() override;
    };
}


#endif //MODULE08_FISH_H
