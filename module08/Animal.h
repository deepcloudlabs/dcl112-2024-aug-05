//
// Created by dcl on 8/8/2024.
//

#ifndef MODULE08_ANIMAL_H
#define MODULE08_ANIMAL_H

namespace zoo {

    class Animal {
    protected:
        int legs;

        Animal(int legs) : legs(legs) {}

    public:
        virtual void walk();

        virtual void eat() = 0;

        virtual ~Animal(){}
    };

}

#endif //MODULE08_ANIMAL_H
