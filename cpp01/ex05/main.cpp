#include "Harl.hpp"

void __attribute__((destructor)) calledLast(); 

void calledLast(){
    system("leaks lain");
}

int main(){
	std::string input;
    while(1){
        std::cout << "level:";
		getline(std::cin, input);
		if(std::cin.eof())
			break;
        if(input.empty())
            continue;
        Harl harl;
        harl.complain(input);
    }
    return 0;
}