#include "FragTrap.hpp"

int main(){
    FragTrap ct("ramo");
    for (int i = 0; i < 3; i++){
        // ct.print_status();
        // ct.takeDamage(10);
		cout << endl;
        ct.takeDamage(10);
		cout << endl;
        ct.highFivesGuys();
		cout << endl;
        ct.attack("muco");
    }
}

// int main(){
//     FragTrap ft("fikarme");
//     ft.attack("armefik");
//     ft.beRepaired(200);
//     ft.highFivesGuys();
// }

// int main(){
//     FragTrap frag("zrt");
//     frag.attack("prt");
//     frag.beRepaired(200);
// 	frag.takeDamage(30);
//     frag.highFivesGuys();
// }