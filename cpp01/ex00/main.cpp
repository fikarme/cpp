#include "Zombie.hpp"

void __attribute__((destructor)) calledLast(); 

void calledLast(){
    system("leaks lain");
}

int main(){
    Zombie *myzombie = newZombie("akef");

    myzombie->announce();
    delete myzombie;
    randomChump("akefrandom");
	return 0;
}