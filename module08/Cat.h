//
// Created by dcl on 8/8/2024.
//

#ifndef MODULE08_CAT_H
#define MODULE08_CAT_H

#include "Pet.h"
#include "Animal.h"

namespace zoo {

    class Cat : public Animal, public Pet {
        string name;
    public:
        Cat() : Cat("tekir") {}

        Cat(string name) : Animal(4), name(name) {}

        void eat() override;

        string getName() override;

        void setName(string name) override;

        void play() override;
    };
}


#endif //MODULE08_CAT_H
