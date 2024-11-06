#include "Zombie.hpp"

void randomChump(std::string name){
    Zombie rndmZombie = Zombie(name);
	rndmZombie.announce();
}