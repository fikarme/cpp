#include "Harl.hpp"

int main() {
    Harl harl;
    std::string in;

    while (1) {
        std::cout << "Enter a level: ";
        getline(std::cin, in);
        if (in.empty())
            continue;
        if (in == "EXIT")
            break;
        harl.complain(in);
    }
    return (0);
}