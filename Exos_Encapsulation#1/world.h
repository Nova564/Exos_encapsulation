#ifndef WORLD_H
#define WORLD_H

#include <vector>
#include <iostream>
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"

class World {
private:
    std::vector<Entity*> entities;

public:
    ~World() {
        for (Entity* entity : entities) {
            delete entity;
        }
    }

    void Init() {
        entities.push_back(new StaticObject(3.0f, 4.0f));
        entities.push_back(new BreakableObject(5.0f, 7.0f, 1.0f, 1.0f));
        entities.push_back(new Mob(1.0f, 2.0f, 20.0f, 20.0f, 0.0f, Vector2(0.0f, 1.0f)));
        entities.push_back(new Player(0.0f, 0.0f, 10.0f, 10.0f, Vector2(0.0f, 1.0f), 0.0f));
    }

    void Step() {
        int deadCount = 0;

        for (Entity* entity : entities) {
            if (Mob* mob = dynamic_cast<Mob*>(entity)) {
                if (mob->get_cur_hp() <= 0) {
                    deadCount++;
                    continue;
                }
                for (Entity* target : entities) {
                    if (BreakableObject* breakable = dynamic_cast<BreakableObject*>(target)) {
                        mob->move();
                        std::cout << "Mob is moving towards BreakableObject." << std::endl;
                        break;
                    }
                }
            }
            else if (Player* player = dynamic_cast<Player*>(entity)) {
                bool mobAlive = false;
                for (Entity* target : entities) {
                    if (Mob* mob = dynamic_cast<Mob*>(target)) {
                        if (mob->get_cur_hp() > 0) {
                            mobAlive = true;
                            player->attack(mob);
                            std::cout << "Player attacked Mob." << std::endl;
                            break;
                        }
                    }
                }
                if (!mobAlive) {
                    for (Entity* target : entities) {
                        if (BreakableObject* breakable = dynamic_cast<BreakableObject*>(target)) {
                            player->attack(breakable);
                            std::cout << "Player attacked BreakableObject." << std::endl;
                            break;
                        }
                    }
                }
            }

            if (dynamic_cast<Alive*>(entity) && dynamic_cast<Alive*>(entity)->get_cur_hp() <= 0) {
                deadCount++;
            }
        }


        if (deadCount >= 2) {
            std::cout << "Simulation Finished" << std::endl;
            exit(0);
        }
    }
};

#endif
