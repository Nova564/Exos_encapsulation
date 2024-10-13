#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"

class Player : public Entity, public Alive, public AMovable, public IAttacker {
public:
    Player(float x, float y, float max_hp, float cur_hp, const Vector2& dir, float spd);

    void take_damage(float damage) override;
    void move() override;
    void attack(Alive* target) override;
};

#endif
