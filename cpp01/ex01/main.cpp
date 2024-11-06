#include "Zombie.hpp"

void __attribute__((destructor)) calledLast(); 

void calledLast(){
    system("leaks lain");
}

int main(){
	Zombie *Nzombies = zombieHorde(5, "akef");
	for (int i = 0; i < 5; i++) {
		Nzombies[i].announce();
	}
	delete [] Nzombies;
	return 0;
}

