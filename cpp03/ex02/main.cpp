#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(){
    FragTrap frag("zrt");
    frag.attack("prt");
    frag.beRepaired(200);
	frag.takeDamage(30);
    frag.highFivesGuys();

	FragTrap ft("fikarme");
    ft.attack("armefik");
    ft.beRepaired(200);
    ft.highFivesGuys();

	ScavTrap ct1("akef");
    ScavTrap ct2("emre");
    ScavTrap ct3("demir");

	cout << endl;
    ct1.attack("zz");
}