
// #include "ClapTrap.hpp"

// int main(){
//     ClapTrap ct("a");
//     // ct.print_status();
//     ct.attack("b");
//     // ct.print_status();
//     ct.takeDamage(10);
//     // ct.print_status();

//     for (int i = 0; i < 10; i++)
//     {
//         ct.beRepaired(1);
//         // ct.print_status();
//     }
//     ct.set_energy(5);
//     // ct.print_status();
//     for(int i = 0; i< 10; i++)
//     {
//         ct.attack("c");
//         // ct.print_status();
//     }
//     ct.set_energy(5);
//     // ct.print_status();
//     std::cout << "*********"<< std::endl;
//     for (int i = 0; i < 10; i++)
//     {
//         ct.takeDamage(2);
//         // ct.print_status();
//     }
//     ct.print_status();
    
// }

#include "ClapTrap.hpp"

int main() {
    ClapTrap cp1("akef");
    ClapTrap cp2("emre");
    ClapTrap cp3("demir");

	cout << endl;
    cp1.attack("zz");

	cout << endl;
    cp2.takeDamage(7);
    
	cout << endl;
    cp1.attack("xx");

	cout << endl;
    cp2.takeDamage(9);

	cout << endl;
    cp3.beRepaired(1);
	
	cout << endl;
    cp3.takeDamage(100);

	cout << endl;
    cp3.takeDamage(120);
}