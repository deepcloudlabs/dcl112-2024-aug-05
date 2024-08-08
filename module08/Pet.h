#include <string>

using namespace std;

#ifndef MODULE08_PET_H
#define MODULE08_PET_H
namespace zoo {

    struct Pet { // interface
        virtual string getName() = 0;

        virtual void setName(string name) = 0;

        virtual void play() = 0;
    };
}
#endif //MODULE08_PET_H
