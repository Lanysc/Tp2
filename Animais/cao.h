#ifndef CAO_H
#define CAO_H
#include <animal.h>

namespace Wictor {
class Cao : public Animal
{
public:
    Cao();
    virtual QString print() const override;
};
}
#endif // CAO_H
