#ifndef HOMEM_H
#define HOMEM_H
#include <animal.h>

namespace Wictor {
class Homem : public Animal
{
public:
    Homem();
    virtual QString print() const override;
};
}

#endif // HOMEM_H
