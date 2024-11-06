#include "Zombie.hpp"

int main(){
	Zombie *Nzombies = zombieHorde(5, "akef");
	for (int i = 0; i < 5; i++) {
		Nzombies[i].announce();
	}
	delete [] Nzombies;
	return 0;
}

