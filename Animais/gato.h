#ifndef GATO_H
#define GATO_H
#include <animal.h>

namespace Wictor {
class Gato : public Animal
{
public:
    Gato();
    virtual QString print() const;
};
}
#endif // GATO_H
