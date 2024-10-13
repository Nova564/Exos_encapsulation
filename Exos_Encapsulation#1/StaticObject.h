#ifndef STATICOBJECT_H
#define STATICOBJECT_H
#include "Entity.h"

class StaticObject : public Entity {
public:
    StaticObject(float x, float y) : Entity(x, y) {
        std::cout << "Static Object just created at x = " << position.get_x()
            << " and y = " << position.get_y() << std::endl;
    }
};

#endif
