#include "vector.h"


Vector2::Vector2(float val_x, float val_y) : x(val_x), y(val_y) {}


std::string Vector2::stringy() const {
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(5);
    oss << "Voici X : " << x << " " << "Voici Y : " << y;
    return oss.str();
}


float Vector2::get_x() const {
    return x;
}


void Vector2::set_x(float val_x) {
    x = val_x;
}


void Vector2::set_y(float val_y) {
    y = val_y;
}

float Vector2::get_y() const {
    return y;
}
