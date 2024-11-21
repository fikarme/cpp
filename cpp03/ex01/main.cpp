#include "ScavTrap.hpp" // ????

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

// int main() {
//     ClapTrap cp1("akef");
//     ClapTrap cp2("emre");
//     ClapTrap cp3("demir");
// 	cout << endl;
//     cp1.attack("zz");
// 	cout << endl;
//     cp2.takeDamage(7);
// 	cout << endl;
//     cp1.attack("xx");
// 	cout << endl;
//     cp2.takeDamage(9);
// 	cout << endl;
//     cp3.beRepaired(1);
// 	cout << endl;
//     cp3.takeDamage(100);
// 	cout << endl;
//     cp3.takeDamage(120);
// }

// int main() {
//     ScavTrap st("zart");
// 	cout << endl;
//     st.attack("zort");
// 	cout << endl;
//     st.beRepaired(3);
// 	cout << endl;
//     st.guardGate();
//     return 0;
// }

int main() {
    ScavTrap st("zart");
	ClapTrap sss("zzzz");
	sss = st;
	sss.attack("mal");

	// ClapTrap *x[2];
	// x[0] = new ScavTrap("1");
	// x[1] = new ClapTrap("2");
	// x[0]->attack("akefffff");
	// x[1]->attack("akefffff");
	// x[0]->guardGate();

	cout << endl;
    st.attack("zort");
	cout << endl;
    st.beRepaired(3);
	cout << endl;
    st.guardGate();
    return 0;
}