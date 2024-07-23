#include <iostream>

class Zombie {
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void announce();
};

Zombie *newZombie(std::string name) {
    Zombie *zombie = new Zombie(name);
    return (zombie);
}

void randomChump(std::string name) {
    Zombie Zombie(name); //stack
    Zombie.announce();
}

Zombie::Zombie() {
    name = "";
}

Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << name << " is dead." << std::endl;
}

void Zombie::announce() {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* zombieHorde( int N, std::string name ) {
	Zombie *zombies = new Zombie[N];
	for (int i = 0; i < N; i++) {
		zombies[i] = Zombie(name);
	}
	return zombies;
}

int main() {
	Zombie *myZombie = newZombie("akef"); //heap
    myZombie->announce();
    delete myZombie;
    randomChump("akefrandom");

	Zombie *Nzombies = zombieHorde(5, "akef");
	for (int i = 0; i < 5; i++) {
		Nzombies[i].announce();
	}

	delete[] Nzombies;
	return 0;
}