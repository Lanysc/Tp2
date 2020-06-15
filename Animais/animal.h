#ifndef ANIMAL_H
#define ANIMAL_H
#include <QString>

namespace Wictor {

class Animal
{
public:
    Animal();
    virtual QString print()const = 0;
};
}
#endif // ANIMAL_H
