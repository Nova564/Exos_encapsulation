#include "Mob.h"
#include <iostream>

Mob::Mob(float x, float y, float max_hp, float cur_hp, float spd, const Vector2& dir)
    : Entity(x, y), Alive(max_hp, cur_hp), AMovable(dir, spd) {
    std::cout << "Mob just created at x = " << position.get_x() << " and y = "
        << position.get_y() << " with " << get_max_hp() << " max Health and direction x = "
        << dir.get_x() << " and y = " << dir.get_y() << std::endl;
}

void Mob::take_damage(float damage) {
    cur_hp -= damage;
    if (cur_hp < 0) {
        cur_hp = 0;
    }
    if (cur_hp == 0) {
        std::cout << "Mob just died" << std::endl;
    }
}

void Mob::move() {
    position.set_x(position.get_x() + direction.get_x() * speed);
    position.set_y(position.get_y() + direction.get_y() * speed);
    std::cout << "Mob moved to x = " << position.get_x() << " and y = "
        << position.get_y() << std::endl;
}
