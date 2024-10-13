#ifndef ENTITY_H
#define ENTITY_H

#include "vector.h"
#include <iostream>
#include <iomanip>
#include <sstream>

class Entity {
protected:
    Vector2 position;
public:
    Entity(float x = 0.f, float y = 0.f) : position(x, y) {}

    virtual ~Entity() {}

    virtual void set_position(float position_x, float position_y);

    virtual const Vector2& get_position() const;

    std::string stringy_2() const;
};

#endif
