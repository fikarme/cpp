#include "PhoneBook.hpp"

int main() {
    std::string      input;
    PhoneBook   pb;

    while (1) {
        std::cout << "> ";
        getline(std::cin, input);
        if (input.empty())
            continue;
        if ("ADD" == input)
            pb.addContact();
        else if ("SEARCH" == input)
            pb.searchContact();
        else if ("EXIT" == input)
            return (0);
        else
            std::cout << "Please enter one of the commands: ADD, SEARCH or EXIT." << std::endl;
    }
}