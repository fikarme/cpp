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

int main() {
	Zombie *myZombie = newZombie("akef"); //heap
    myZombie->announce();
    delete myZombie;
    randomChump("akefrandom");
}