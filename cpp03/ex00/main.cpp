#include "ClapTrap.hpp"

int main(){
    ClapTrap ct1("akef");
    ClapTrap ct2("emre");
    ClapTrap ct3("demir");

	cout << endl;
    ct1.attack("zz");

	cout << endl;
    ct2.takeDamage(7);
    
	cout << endl;
    ct1.attack("xx");

	cout << endl;
    ct2.takeDamage(9);

	cout << endl;
    ct3.beRepaired(1);
	
	cout << endl;
    ct3.takeDamage(100);

	cout << endl;
    ct3.takeDamage(120);

	cout << endl;
    ct3.takeDamage(120);
}