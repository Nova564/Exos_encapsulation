#include <iostream>
#include "World.h"

int main() {
    World world;
    world.Init();

    char continueSimulation;
    do {
        world.Step();

        std::cout << "Touche C puis entrer pour continuer la simulation :  ";
        std::cin >> continueSimulation;

    } while (continueSimulation == 'c');

    return 0;
}