#include "Harl.hpp"

int main(int ac, char **av){
	Harl harl;
	if(ac == 1){
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	}
	else if(ac == 2){
        harl.complain(av[1]);
    }
}