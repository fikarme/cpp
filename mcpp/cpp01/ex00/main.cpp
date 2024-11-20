#include "Zombie.hpp"

int main() {
    Zombie *zombie = newZombie("Muco");

    zombie->announce();
    delete zombie;
    randomChump("Muco2");
}