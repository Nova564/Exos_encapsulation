#ifndef MOB_H
#define MOB_H

#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"

class Mob : public Entity, public Alive, public AMovable {
public:
    Mob(float x, float y, float max_hp, float cur_hp, float spd, const Vector2& dir);

    void take_damage(float damage) override;
    void move() override;
};

#endif
