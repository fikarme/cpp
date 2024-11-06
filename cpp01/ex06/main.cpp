#include "Harl.hpp"

void __attribute__((destructor)) calledLast(); 

void calledLast(){
    system("leaks lain");
}

int main(int ac, char **av){
    if(ac == 2){
        Harl harl;
        harl.complain(av[1]);
    }
    return 0;
}