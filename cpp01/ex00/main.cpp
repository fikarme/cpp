#include "Zombie.hpp"

int main(){
    Zombie *myzombie = newZombie("akef");

    myzombie->announce();
    delete myzombie;
    randomChump("akefrandom");
	return 0;
}