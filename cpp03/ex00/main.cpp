
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

    cp1.attack("zz");
    cp2.takeDamage(7);
    
    cp1.attack("xx");
    cp2.takeDamage(9);

    cp3.beRepaired(1);
    cp3.takeDamage(100);
    cp3.takeDamage(120);
}