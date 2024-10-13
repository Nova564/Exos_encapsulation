#ifndef BREAKABLEOBJECT_H
#define BREAKABLEOBJECT_H

#include "Entity.h"
#include "Alive.h"
#include <iostream>

class BreakableObject : public Entity, public Alive {
public:

    BreakableObject(float x, float y, float max_hp, float cur_hp)
        : Entity(x, y), Alive(max_hp, cur_hp) {
        std::cout << "Breakable Object just created at x = " << position.get_x()
            << " and y = " << position.get_y()
            << " with " << get_max_hp() << " max life." << std::endl;
    }

    void take_damage(float damage) override {

        cur_hp -= damage;

        if (cur_hp <= 0) {
            cur_hp = 0;
            std::cout << "Breakable Object just broke" << std::endl;
        }
        else {
            std::cout << "Breakable Object received " << damage << " damage, current HP: " << cur_hp << std::endl;
        }
    }
};

#endif
