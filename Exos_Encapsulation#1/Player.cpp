#include "Player.h"
#include <iostream>

Player::Player(float x, float y, float max_hp, float cur_hp, const Vector2& dir, float spd)
    : Entity(x, y), Alive(max_hp, cur_hp), AMovable(dir, spd) {
    std::cout << "Player just created at : " << position.get_x() << " and y : "
        << position.get_y() << " with " << max_hp
        << " max life, direction x = " << dir.get_x()
        << " and y " << dir.get_y() << std::endl;
}

void Player::take_damage(float damage) {
    cur_hp -= damage;
    if (cur_hp < 0) {
        cur_hp = 0;
    }
    if (cur_hp == 0) {
        std::cout << "Player just died" << std::endl;
    }
}

void Player::move() {
    position.set_x(position.get_x() + direction.get_x() * speed);
    position.set_y(position.get_y() + direction.get_y() * speed);
    std::cout << "Player moved to x = " << position.get_x() << " and y = "
        << position.get_y() << std::endl;
}

void Player::attack(Alive* target) {
    if (target) {
        target->take_damage(10);
        std::cout << "Player just attacked." << std::endl;
    }
}
