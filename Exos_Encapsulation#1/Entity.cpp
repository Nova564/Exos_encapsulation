#include "Entity.h"


std::string Entity::stringy_2() const {
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(4);
    oss << "position X : " << position.get_x() << " "
        << "\nPosition Y : " << position.get_y();
    return oss.str();
}


void Entity::set_position(float x, float y) {
    position.set_x(x);
    position.set_y(y);
}


const Vector2& Entity::get_position() const {
    return position;
}
