#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <sstream>
#include <iomanip>

class Vector2 {
private:
    float x, y;
public:
    Vector2(float val_x = 0.f, float val_y = 0.f);

    std::string stringy() const;

    float get_x() const;

    void set_x(float val_x);

    void set_y(float val_y);

    float get_y() const;
};

#endif
